//
// Created by 邹晓亮 on 2021/3/4.
//

#ifndef KUBERNETES_MONITOR_K8S_H
#define KUBERNETES_MONITOR_K8S_H

#ifdef  __cplusplus
extern "C" {
#endif
#include <apiClient.h>
#include <CoreV1API.h>
#include <alias.hpp>
#include <kube_config.h>
#ifdef __cplusplus
}
#endif

#include <memory>
#include <functional>
#include <iostream>

namespace nerv {
namespace k8s {

class Client
{
    Client(apiClient_t *api, list_t* token, char *base_path, sslConfig_t *ssl_config):
            m_api(api), m_token(token), m_base_path(base_path), m_ssl_config(ssl_config), m_fn_on({})
    {

    }
public:
    ~Client()
    {
        if (nullptr != m_api)
        {
            apiClient_free(m_api);
        }
        free_client_config(m_base_path, m_ssl_config, m_token);
    }

    void set_watch_on(std::function<void (const char*)> on)
    {
        m_fn_on = on;
    }

    std::function<void(const char*)> watch_on()
    {
        return m_fn_on;
    }

    static std::shared_ptr<Client> create(const char *config_path = nullptr)
    {
        char *base_path = nullptr;
        sslConfig_t *ssl_config = nullptr;
        list_t *token = nullptr;

        int rc = load_kube_config(&base_path, &ssl_config, &token, const_cast<char*>(config_path));
        if (0 != rc)
        {
            std::cout << "can't load kubernetes configuration." << std::endl;
            return nullptr;
        }

        apiClient_t *api = apiClient_create_with_base_path(base_path, ssl_config, token);
        if (nullptr == api)
        {
            std::cout << "can't create a kubernetes client." << std::endl;
            return nullptr;
        }

        return std::shared_ptr<Client>(new Client(api, token, base_path, ssl_config));
    }

    inline apiClient_t *api()
    {
        return m_api;
    }
private:
    apiClient_t *m_api;
    list_t *m_token;
    char *m_base_path;
    sslConfig_t *m_ssl_config;
    std::function<void(const char*)> m_fn_on{};
};


}}
#endif //KUBERNETES_MONITOR_K8S_H
