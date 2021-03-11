#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_pod_ip.h"



io_k8s_api_core_v1_pod_ip_t *io_k8s_api_core_v1_pod_ip_create(
    char *ip
    ) {
    io_k8s_api_core_v1_pod_ip_t *io_k8s_api_core_v1_pod_ip_local_var = malloc(sizeof(io_k8s_api_core_v1_pod_ip_t));
    if (!io_k8s_api_core_v1_pod_ip_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_pod_ip_local_var->ip = ip;

    return io_k8s_api_core_v1_pod_ip_local_var;
}


void io_k8s_api_core_v1_pod_ip_free(io_k8s_api_core_v1_pod_ip_t *io_k8s_api_core_v1_pod_ip) {
    if(NULL == io_k8s_api_core_v1_pod_ip){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_pod_ip->ip) {
        free(io_k8s_api_core_v1_pod_ip->ip);
        io_k8s_api_core_v1_pod_ip->ip = NULL;
    }
    free(io_k8s_api_core_v1_pod_ip);
}

cJSON *io_k8s_api_core_v1_pod_ip_convertToJSON(io_k8s_api_core_v1_pod_ip_t *io_k8s_api_core_v1_pod_ip) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_pod_ip->ip
    if(io_k8s_api_core_v1_pod_ip->ip) { 
    if(cJSON_AddStringToObject(item, "ip", io_k8s_api_core_v1_pod_ip->ip) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_pod_ip_t *io_k8s_api_core_v1_pod_ip_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_ipJSON){

    io_k8s_api_core_v1_pod_ip_t *io_k8s_api_core_v1_pod_ip_local_var = NULL;

    // io_k8s_api_core_v1_pod_ip->ip
    cJSON *ip = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_ipJSON, "ip");
    if (ip) { 
    if(!cJSON_IsString(ip))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_pod_ip_local_var = io_k8s_api_core_v1_pod_ip_create (
        ip ? strdup(ip->valuestring) : NULL
        );

    return io_k8s_api_core_v1_pod_ip_local_var;
end:
    return NULL;

}
