#include <kube_config.h>
#include <apiClient.h>
#include <CoreV1API.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

#define NS_API(type) io_k8s_api_core_##type
#define NS_API_META(type) io_k8s_apimachinery_pkg_apis_meta_##type

void create_a_pod(apiClient_t * apiClient)
{
    char *namespace = "default";

    NS_API(v1_pod_t) *podinfo = calloc(1, sizeof(NS_API(v1_pod_t)));
    podinfo->api_version = strdup("v1");
    podinfo->kind = strdup("Pod");
    podinfo->spec = calloc(1, sizeof(NS_API(v1_pod_spec_t)));

    podinfo->metadata = calloc(1, sizeof(NS_API_META(v1_object_meta_t)));
    /* set pod name */
    podinfo->metadata->name = strdup("test-pod-6");

    /* set containers for pod */
    list_t *containerlist = list_create();
    NS_API(v1_container_t) *con = calloc(1, sizeof(NS_API(v1_container_t)));
    con->name = strdup("my-container");
    con->image = strdup("ubuntu:latest");
    con->image_pull_policy = strdup("IfNotPresent");

    /* set command for container */
    list_t *commandlist = list_create();
    char *cmd = strdup("sleep");
    list_addElement(commandlist, cmd);
    con->command = commandlist;

    list_t *arglist = list_create();
    char *arg1 = strdup("3600");
    list_addElement(arglist, arg1);
    con->args = arglist;

    /* set volume mounts for container  */
    list_t *volumemounts = list_create();
    NS_API(v1_volume_mount_t) *volmou = calloc(1, sizeof(NS_API(v1_volume_mount_t)));
    volmou->mount_path = strdup("/test");
    volmou->name = strdup("test");
    list_addElement(volumemounts, volmou);
    con->volume_mounts = volumemounts;

    list_addElement(containerlist, con);
    podinfo->spec->containers = containerlist;

    /* set volumes for pod */
    list_t *volumelist = list_create();
    NS_API(v1_volume_t) *volume = calloc(1, sizeof(NS_API(v1_volume_t)));
    volume->name = strdup("test");

    NS_API(v1_host_path_volume_source_t) *hostPath = calloc(1, sizeof(NS_API(v1_host_path_volume_source_t)));
    hostPath->path = strdup("/test");
    volume->host_path = hostPath;

    list_addElement(volumelist, volume);
    podinfo->spec->volumes = volumelist;

    /* call API in libkubernetes to create pod */
    NS_API(v1_pod_t) *apod = CoreV1API_createCoreV1NamespacedPod(apiClient, namespace, podinfo, NULL, NULL, NULL);
    printf("code=%ld\n", apiClient->response_code);

    NS_API(v1_pod_free)(apod);
    NS_API(v1_pod_free)(podinfo);
}

int main(int argc, char *argv[])
{

    int rc = 0;

    char *baseName = NULL;
    sslConfig_t *sslConfig = NULL;
    list_t *apiKeys = NULL;
    apiClient_t *k8sApiClient = NULL;

    rc = load_kube_config(&baseName, &sslConfig, &apiKeys, NULL);
    if (0 == rc) {
        k8sApiClient = apiClient_create_with_base_path(baseName, sslConfig, apiKeys);
    } else {
        printf("Cannot load kubernetes configuration.\n");
        return -1;
    }

    if (k8sApiClient) {
        create_a_pod(k8sApiClient);
    }

    free_client_config(baseName, sslConfig, apiKeys);
    baseName = NULL;
    sslConfig = NULL;
    apiKeys = NULL;

    apiClient_free(k8sApiClient);
    k8sApiClient = NULL;
    apiClient_unsetupGlobalEnv();

    return 0;
}
