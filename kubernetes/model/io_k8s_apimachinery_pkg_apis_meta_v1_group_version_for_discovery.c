#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery.h"



io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t *io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_create(
    char *group_version,
    char *version
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t *io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_local_var->group_version = group_version;
    io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_local_var->version = version;

    return io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_free(io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t *io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery->group_version) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery->group_version);
        io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery->group_version = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery->version) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery->version);
        io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery->version = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t *io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery->group_version
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery->group_version) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "groupVersion", io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery->group_version) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery->version
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery->version) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "version", io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery->version) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t *io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discoveryJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t *io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery->group_version
    cJSON *group_version = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discoveryJSON, "groupVersion");
    if (!group_version) {
        goto end;
    }

    
    if(!cJSON_IsString(group_version))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discoveryJSON, "version");
    if (!version) {
        goto end;
    }

    
    if(!cJSON_IsString(version))
    {
    goto end; //String
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_create (
        strdup(group_version->valuestring),
        strdup(version->valuestring)
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_local_var;
end:
    return NULL;

}
