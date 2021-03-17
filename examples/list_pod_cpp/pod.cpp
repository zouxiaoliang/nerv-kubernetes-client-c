//
// Created by 邹晓亮 on 2021/3/4.
//

#include "pod.h"
#include "k8s.h"

namespace nerv {
namespace k8s {
namespace pod {

std::list<std::string> list(const std::shared_ptr<Client>& client, const char *ns)
{
    nerv::k8s::core::v1_pod_list_t *pods_c = CoreV1API_listCoreV1NamespacedPod(
            client->api(),
            const_cast<char *>(ns),
            nullptr,
            0,
            nullptr,
            nullptr,
            nullptr,
            0,
            nullptr,
            nullptr,
            0,
            0);
    std::cout << "the return code of http request: " << client->api()->response_code << std::endl;

    std::list<std::string> pods;
    if (nullptr != pods_c)
    {
        listEntry_t *list_entry = nullptr;
        nerv::k8s::core::v1_pod_t *pod = nullptr;
        list_ForEach(list_entry, pods_c->items) {
            pod = (nerv::k8s::core::v1_pod_t*)list_entry->data;
            pods.emplace_back(pod->metadata->name);
        }
        NS_API(v1_pod_list_free)(pods_c);
    }
    else
    {
        std::cout << "can't get any pod." << std::endl;
    }

    return pods;
}

bool create(
        const std::shared_ptr<Client>& client,
        const char *ns,
        const char *pod,
        const char *container_name,
        const char *host_path,
        const char *volume_name,
        const char *image,
        const char *pull_policy,
        const std::list<std::string> &cmd_list,
        const std::list<std::string> &args,
        const std::map<std::string, std::string> &volume_mounts_mapper)
{
    auto *pod_info = static_cast<nerv::k8s::core::v1_pod_t*>(calloc(1, sizeof(nerv::k8s::core::v1_pod_t)));
    pod_info->api_version = strdup("v1");
    pod_info->kind = strdup("Pod");
    pod_info->spec = static_cast<nerv::k8s::core::v1_pod_spec_t*>(calloc(1, sizeof(nerv::k8s::core::v1_pod_spec_t)));
    pod_info->metadata = static_cast<nerv::k8s::apimachinery::v1_object_meta_t*>(calloc(1, sizeof(nerv::k8s::apimachinery::v1_object_meta_t)));
    pod_info->metadata->name = strdup(pod);

    /* set containers for pod */
    list_t *container_list = list_create();
    auto *con = static_cast<nerv::k8s::core::v1_container_t*>(calloc(1, sizeof(nerv::k8s::core::v1_container_t)));
    con->name = strdup(container_name);
    con->image = strdup(image);
    con->image_pull_policy = strdup(pull_policy);

    /* set command for container */
    auto *command_list = list_create();
    for (const auto &c: cmd_list)
    {
        list_addElement(command_list, strdup(c.c_str()));
    }
    con->command = command_list;

    list_t *arglist = list_create();
    for (const auto &a: args)
    {
        list_addElement(arglist, strdup(a.c_str()));
    }
    con->args = arglist;

    /* set volume mounts for container  */
    auto *volume_mounts = list_create();
    for (const auto &item: volume_mounts_mapper)
    {
        auto *vol = static_cast<nerv::k8s::core::v1_volume_mount_t*>(calloc(1, sizeof(nerv::k8s::core::v1_volume_mount_t)));
        vol->mount_path = strdup(item.first.c_str());
        vol->name = strdup(item.second.c_str());
        list_addElement(volume_mounts, vol);
    }
    con->volume_mounts = volume_mounts;

    list_addElement(container_list, con);
    pod_info->spec->containers = container_list;

    /* set volumes for pod */
    list_t *volume_list = list_create();
    auto *volume = static_cast<nerv::k8s::core::v1_volume_t*>(calloc(1, sizeof(nerv::k8s::core::v1_volume_t)));
    volume->name = strdup(volume_name);

    auto *hostPath = static_cast<nerv::k8s::core::v1_host_path_volume_source_t*>(calloc(1, sizeof(nerv::k8s::core::v1_host_path_volume_source_t)));
    hostPath->path = strdup(host_path);
    volume->host_path = hostPath;

    list_addElement(volume_list, volume);
    pod_info->spec->volumes = volume_list;

    /* call API in libkubernetes to create pod */
    auto *apod = CoreV1API_createCoreV1NamespacedPod(client->api(), const_cast<char*>(ns), pod_info, nullptr, nullptr, nullptr);
    printf("code=%ld\n", client->api()->response_code);

    NS_API(v1_pod_free)(apod);
    NS_API(v1_pod_free)(pod_info);
    return false;
}

void del(const std::shared_ptr<Client> &client, const char *name, const char *ns)
{
    auto pod = CoreV1API_deleteCoreV1NamespacedPod(
            client->api(),
            const_cast<char*>(name),
            const_cast<char*>(ns),
            nullptr,
            nullptr,
            0,
            0,
            nullptr,
            nullptr
            );
    printf("The return code of HTTP request=%ld\n", client->api()->response_code);

    if (200 == client->api()->response_code || 202 == client->api()->response_code) {
        printf("The pod is deleted successfully.\n");
    } else {
        if (pod && pod->status && pod->status->message) {
            printf("Failed to delete the pod. The error message: %s\n", pod->status->message);
        }
    }

    if (pod) {
        NS_API(v1_pod_free)(pod);
        pod = nullptr;
    }
}

/**
 * @brief event_handler 事件处理接口
 * @param pData
 * @param data_length
 */
void event_handler(void **pData, long *data_length, void* userptr)
{

}

void watch(const std::shared_ptr<Client> &client, const char *ns, std::function<void(const char *)> on)
{
    if (nullptr ==  ns) return;

    client->api()->data_callback_func = event_handler;
    client->set_watch_on(std::move(on));

    CoreV1API_listCoreV1NamespacedPod(
            client->api(),
            const_cast<char*>(ns),
            nullptr,
            0,
            nullptr,
            nullptr,
            nullptr,
            0,
            nullptr,
            nullptr,
            0,
            1);
}

}}}
