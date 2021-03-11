#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_preconditions.h"



io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t *io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_create(
    char *resource_version,
    char *uid
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t *io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_local_var->resource_version = resource_version;
    io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_local_var->uid = uid;

    return io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_free(io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t *io_k8s_apimachinery_pkg_apis_meta_v1_preconditions) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_preconditions){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_preconditions->resource_version) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_preconditions->resource_version);
        io_k8s_apimachinery_pkg_apis_meta_v1_preconditions->resource_version = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_preconditions->uid) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_preconditions->uid);
        io_k8s_apimachinery_pkg_apis_meta_v1_preconditions->uid = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_preconditions);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t *io_k8s_apimachinery_pkg_apis_meta_v1_preconditions) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_preconditions->resource_version
    if(io_k8s_apimachinery_pkg_apis_meta_v1_preconditions->resource_version) { 
    if(cJSON_AddStringToObject(item, "resourceVersion", io_k8s_apimachinery_pkg_apis_meta_v1_preconditions->resource_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_preconditions->uid
    if(io_k8s_apimachinery_pkg_apis_meta_v1_preconditions->uid) { 
    if(cJSON_AddStringToObject(item, "uid", io_k8s_apimachinery_pkg_apis_meta_v1_preconditions->uid) == NULL) {
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

io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t *io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_preconditionsJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t *io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_preconditions->resource_version
    cJSON *resource_version = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_preconditionsJSON, "resourceVersion");
    if (resource_version) { 
    if(!cJSON_IsString(resource_version))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_preconditions->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_preconditionsJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_create (
        resource_version ? strdup(resource_version->valuestring) : NULL,
        uid ? strdup(uid->valuestring) : NULL
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_local_var;
end:
    return NULL;

}
