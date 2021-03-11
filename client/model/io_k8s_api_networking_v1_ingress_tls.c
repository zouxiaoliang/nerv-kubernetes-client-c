#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_networking_v1_ingress_tls.h"



io_k8s_api_networking_v1_ingress_tls_t *io_k8s_api_networking_v1_ingress_tls_create(
    list_t *hosts,
    char *secret_name
    ) {
    io_k8s_api_networking_v1_ingress_tls_t *io_k8s_api_networking_v1_ingress_tls_local_var = malloc(sizeof(io_k8s_api_networking_v1_ingress_tls_t));
    if (!io_k8s_api_networking_v1_ingress_tls_local_var) {
        return NULL;
    }
    io_k8s_api_networking_v1_ingress_tls_local_var->hosts = hosts;
    io_k8s_api_networking_v1_ingress_tls_local_var->secret_name = secret_name;

    return io_k8s_api_networking_v1_ingress_tls_local_var;
}


void io_k8s_api_networking_v1_ingress_tls_free(io_k8s_api_networking_v1_ingress_tls_t *io_k8s_api_networking_v1_ingress_tls) {
    if(NULL == io_k8s_api_networking_v1_ingress_tls){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_networking_v1_ingress_tls->hosts) {
        list_ForEach(listEntry, io_k8s_api_networking_v1_ingress_tls->hosts) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_networking_v1_ingress_tls->hosts);
        io_k8s_api_networking_v1_ingress_tls->hosts = NULL;
    }
    if (io_k8s_api_networking_v1_ingress_tls->secret_name) {
        free(io_k8s_api_networking_v1_ingress_tls->secret_name);
        io_k8s_api_networking_v1_ingress_tls->secret_name = NULL;
    }
    free(io_k8s_api_networking_v1_ingress_tls);
}

cJSON *io_k8s_api_networking_v1_ingress_tls_convertToJSON(io_k8s_api_networking_v1_ingress_tls_t *io_k8s_api_networking_v1_ingress_tls) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_networking_v1_ingress_tls->hosts
    if(io_k8s_api_networking_v1_ingress_tls->hosts) { 
    cJSON *hosts = cJSON_AddArrayToObject(item, "hosts");
    if(hosts == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *hostsListEntry;
    list_ForEach(hostsListEntry, io_k8s_api_networking_v1_ingress_tls->hosts) {
    if(cJSON_AddStringToObject(hosts, "", (char*)hostsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_networking_v1_ingress_tls->secret_name
    if(io_k8s_api_networking_v1_ingress_tls->secret_name) { 
    if(cJSON_AddStringToObject(item, "secretName", io_k8s_api_networking_v1_ingress_tls->secret_name) == NULL) {
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

io_k8s_api_networking_v1_ingress_tls_t *io_k8s_api_networking_v1_ingress_tls_parseFromJSON(cJSON *io_k8s_api_networking_v1_ingress_tlsJSON){

    io_k8s_api_networking_v1_ingress_tls_t *io_k8s_api_networking_v1_ingress_tls_local_var = NULL;

    // io_k8s_api_networking_v1_ingress_tls->hosts
    cJSON *hosts = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_ingress_tlsJSON, "hosts");
    list_t *hostsList;
    if (hosts) { 
    cJSON *hosts_local;
    if(!cJSON_IsArray(hosts)) {
        goto end;//primitive container
    }
    hostsList = list_create();

    cJSON_ArrayForEach(hosts_local, hosts)
    {
        if(!cJSON_IsString(hosts_local))
        {
            goto end;
        }
        list_addElement(hostsList , strdup(hosts_local->valuestring));
    }
    }

    // io_k8s_api_networking_v1_ingress_tls->secret_name
    cJSON *secret_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_ingress_tlsJSON, "secretName");
    if (secret_name) { 
    if(!cJSON_IsString(secret_name))
    {
    goto end; //String
    }
    }


    io_k8s_api_networking_v1_ingress_tls_local_var = io_k8s_api_networking_v1_ingress_tls_create (
        hosts ? hostsList : NULL,
        secret_name ? strdup(secret_name->valuestring) : NULL
        );

    return io_k8s_api_networking_v1_ingress_tls_local_var;
end:
    return NULL;

}
