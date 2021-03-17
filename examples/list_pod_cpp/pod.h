//
// Created by 邹晓亮 on 2021/3/4.
//

#ifndef KUBERNETES_MONITOR_POD_H
#define KUBERNETES_MONITOR_POD_H

#include <string>
#include <list>
#include <map>
#include <iostream>
#include <memory>
#include <functional>

namespace nerv {
namespace k8s {
class Client;
namespace pod {

/**
 * @brief list
 * @param client
 * @param ns
 * @return
 */
std::list<std::string> list(const std::shared_ptr<Client>& client, const char *ns);

/**
 * @brief create
 * @param client
 * @param ns
 * @param pod
 * @param container_name
 * @param host_path
 * @param volume_name
 * @param image
 * @param pull_policy
 * @param cmd_list
 * @param args
 * @param volume_mounts_mapper
 * @return
 */
bool create(
        const std::shared_ptr<Client>& client,
        const char *ns,
        const char *pod,
        const char *container_name,
        const char *host_path,
        const char *volume_name,
        const char *image,
        const char *pull_policy = "IfNotPresent",
        const std::list<std::string> &cmd_list = {},
        const std::list<std::string> &args = {},
        const std::map<std::string, std::string> &volume_mounts_mapper = {});

/**
 * @brief del 删除对应命名空间下的pod
 * @param client
 * @param name pod name
 * @param ns namespace
 */
void del(const std::shared_ptr<Client> &client, const char *name, const char *ns);

/**
 * @brief watch
 * @param client
 * @param ns namespace
 * @param on 事件响应函数
 */
void watch(const std::shared_ptr<Client> &client, const char *ns, std::function<void(const char *)> on);
}}}


#endif //KUBERNETES_MONITOR_POD_H
