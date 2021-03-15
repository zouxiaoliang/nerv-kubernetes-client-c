#include <kube_config.h>
#include <apiClient.h>
#include <CoreV1API.h>
#include <alias.h>
#include <stdio.h>
#include <errno.h>


void delete_a_pod(apiClient_t * apiClient)
{
    v1_pod_t *pod = CoreV1API_deleteCoreV1NamespacedPod(
        apiClient,
        "test-pod-6",   // char *name
        "default",      // char *namespace
        NULL,           // char *pretty
        NULL,           // char *dryRun
        0,              // int gracePeriodSeconds
        0,              // int orphanDependents
        NULL,           // char *propagationPolicy
        NULL            // v1_delete_options_t *body
        );

    printf("The return code of HTTP request=%ld\n", apiClient->response_code);

    if (200 == apiClient->response_code || 202 == apiClient->response_code) {
        printf("The pod is deleted successfully.\n");
    } else {
        if (pod && pod->status && pod->status->message) {
            printf("Failed to delete the pod. The error message: %s\n", pod->status->message);
        }
    }

    if (pod) {
        io_k8s_api_core_v1_pod_free(pod);
        pod = NULL;
    }
}

int main(int argc, char *argv[])
{
    char *basePath = NULL;
    sslConfig_t *sslConfig = NULL;
    list_t *apiKeys = NULL;
    int rc = load_kube_config(&basePath, &sslConfig, &apiKeys, NULL);   /* NULL means loading configuration from $HOME/.kube/config */
    if (rc != 0) {
        printf("Cannot load kubernetes configuration.\n");
        return -1;
    }
    apiClient_t *apiClient = apiClient_create_with_base_path(basePath, sslConfig, apiKeys);
    if (!apiClient) {
        printf("Cannot create a kubernetes client.\n");
        return -1;
    }

    delete_a_pod(apiClient);

    apiClient_free(apiClient);
    apiClient = NULL;
    free_client_config(basePath, sslConfig, apiKeys);
    basePath = NULL;
    sslConfig = NULL;
    apiKeys = NULL;
    apiClient_unsetupGlobalEnv();

    return 0;
}
