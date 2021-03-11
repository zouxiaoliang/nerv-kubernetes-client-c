#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_networking_v1_http_ingress_rule_value.h"



io_k8s_api_networking_v1_http_ingress_rule_value_t *io_k8s_api_networking_v1_http_ingress_rule_value_create(
    list_t *paths
    ) {
    io_k8s_api_networking_v1_http_ingress_rule_value_t *io_k8s_api_networking_v1_http_ingress_rule_value_local_var = malloc(sizeof(io_k8s_api_networking_v1_http_ingress_rule_value_t));
    if (!io_k8s_api_networking_v1_http_ingress_rule_value_local_var) {
        return NULL;
    }
    io_k8s_api_networking_v1_http_ingress_rule_value_local_var->paths = paths;

    return io_k8s_api_networking_v1_http_ingress_rule_value_local_var;
}


void io_k8s_api_networking_v1_http_ingress_rule_value_free(io_k8s_api_networking_v1_http_ingress_rule_value_t *io_k8s_api_networking_v1_http_ingress_rule_value) {
    if(NULL == io_k8s_api_networking_v1_http_ingress_rule_value){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_networking_v1_http_ingress_rule_value->paths) {
        list_ForEach(listEntry, io_k8s_api_networking_v1_http_ingress_rule_value->paths) {
            io_k8s_api_networking_v1_http_ingress_path_free(listEntry->data);
        }
        list_free(io_k8s_api_networking_v1_http_ingress_rule_value->paths);
        io_k8s_api_networking_v1_http_ingress_rule_value->paths = NULL;
    }
    free(io_k8s_api_networking_v1_http_ingress_rule_value);
}

cJSON *io_k8s_api_networking_v1_http_ingress_rule_value_convertToJSON(io_k8s_api_networking_v1_http_ingress_rule_value_t *io_k8s_api_networking_v1_http_ingress_rule_value) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_networking_v1_http_ingress_rule_value->paths
    if (!io_k8s_api_networking_v1_http_ingress_rule_value->paths) {
        goto fail;
    }
    
    cJSON *paths = cJSON_AddArrayToObject(item, "paths");
    if(paths == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *pathsListEntry;
    if (io_k8s_api_networking_v1_http_ingress_rule_value->paths) {
    list_ForEach(pathsListEntry, io_k8s_api_networking_v1_http_ingress_rule_value->paths) {
    cJSON *itemLocal = io_k8s_api_networking_v1_http_ingress_path_convertToJSON(pathsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(paths, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_networking_v1_http_ingress_rule_value_t *io_k8s_api_networking_v1_http_ingress_rule_value_parseFromJSON(cJSON *io_k8s_api_networking_v1_http_ingress_rule_valueJSON){

    io_k8s_api_networking_v1_http_ingress_rule_value_t *io_k8s_api_networking_v1_http_ingress_rule_value_local_var = NULL;

    // io_k8s_api_networking_v1_http_ingress_rule_value->paths
    cJSON *paths = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_http_ingress_rule_valueJSON, "paths");
    if (!paths) {
        goto end;
    }

    list_t *pathsList;
    
    cJSON *paths_local_nonprimitive;
    if(!cJSON_IsArray(paths)){
        goto end; //nonprimitive container
    }

    pathsList = list_create();

    cJSON_ArrayForEach(paths_local_nonprimitive,paths )
    {
        if(!cJSON_IsObject(paths_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_networking_v1_http_ingress_path_t *pathsItem = io_k8s_api_networking_v1_http_ingress_path_parseFromJSON(paths_local_nonprimitive);

        list_addElement(pathsList, pathsItem);
    }


    io_k8s_api_networking_v1_http_ingress_rule_value_local_var = io_k8s_api_networking_v1_http_ingress_rule_value_create (
        pathsList
        );

    return io_k8s_api_networking_v1_http_ingress_rule_value_local_var;
end:
    return NULL;

}
