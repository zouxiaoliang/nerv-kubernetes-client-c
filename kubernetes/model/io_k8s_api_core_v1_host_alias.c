#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_host_alias.h"



io_k8s_api_core_v1_host_alias_t *io_k8s_api_core_v1_host_alias_create(
    list_t *hostnames,
    char *ip
    ) {
    io_k8s_api_core_v1_host_alias_t *io_k8s_api_core_v1_host_alias_local_var = malloc(sizeof(io_k8s_api_core_v1_host_alias_t));
    if (!io_k8s_api_core_v1_host_alias_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_host_alias_local_var->hostnames = hostnames;
    io_k8s_api_core_v1_host_alias_local_var->ip = ip;

    return io_k8s_api_core_v1_host_alias_local_var;
}


void io_k8s_api_core_v1_host_alias_free(io_k8s_api_core_v1_host_alias_t *io_k8s_api_core_v1_host_alias) {
    if(NULL == io_k8s_api_core_v1_host_alias){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_host_alias->hostnames) {
        list_ForEach(listEntry, io_k8s_api_core_v1_host_alias->hostnames) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_host_alias->hostnames);
        io_k8s_api_core_v1_host_alias->hostnames = NULL;
    }
    if (io_k8s_api_core_v1_host_alias->ip) {
        free(io_k8s_api_core_v1_host_alias->ip);
        io_k8s_api_core_v1_host_alias->ip = NULL;
    }
    free(io_k8s_api_core_v1_host_alias);
}

cJSON *io_k8s_api_core_v1_host_alias_convertToJSON(io_k8s_api_core_v1_host_alias_t *io_k8s_api_core_v1_host_alias) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_host_alias->hostnames
    if(io_k8s_api_core_v1_host_alias->hostnames) { 
    cJSON *hostnames = cJSON_AddArrayToObject(item, "hostnames");
    if(hostnames == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *hostnamesListEntry;
    list_ForEach(hostnamesListEntry, io_k8s_api_core_v1_host_alias->hostnames) {
    if(cJSON_AddStringToObject(hostnames, "", (char*)hostnamesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_host_alias->ip
    if(io_k8s_api_core_v1_host_alias->ip) { 
    if(cJSON_AddStringToObject(item, "ip", io_k8s_api_core_v1_host_alias->ip) == NULL) {
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

io_k8s_api_core_v1_host_alias_t *io_k8s_api_core_v1_host_alias_parseFromJSON(cJSON *io_k8s_api_core_v1_host_aliasJSON){

    io_k8s_api_core_v1_host_alias_t *io_k8s_api_core_v1_host_alias_local_var = NULL;

    // io_k8s_api_core_v1_host_alias->hostnames
    cJSON *hostnames = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_host_aliasJSON, "hostnames");
    list_t *hostnamesList;
    if (hostnames) { 
    cJSON *hostnames_local;
    if(!cJSON_IsArray(hostnames)) {
        goto end;//primitive container
    }
    hostnamesList = list_create();

    cJSON_ArrayForEach(hostnames_local, hostnames)
    {
        if(!cJSON_IsString(hostnames_local))
        {
            goto end;
        }
        list_addElement(hostnamesList , strdup(hostnames_local->valuestring));
    }
    }

    // io_k8s_api_core_v1_host_alias->ip
    cJSON *ip = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_host_aliasJSON, "ip");
    if (ip) { 
    if(!cJSON_IsString(ip))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_host_alias_local_var = io_k8s_api_core_v1_host_alias_create (
        hostnames ? hostnamesList : NULL,
        ip ? strdup(ip->valuestring) : NULL
        );

    return io_k8s_api_core_v1_host_alias_local_var;
end:
    return NULL;

}
