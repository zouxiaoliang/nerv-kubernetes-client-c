#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_list_meta.h"



io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_create(
    char *_continue,
    long remaining_item_count,
    char *resource_version,
    char *self_link
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_local_var->_continue = _continue;
    io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_local_var->remaining_item_count = remaining_item_count;
    io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_local_var->resource_version = resource_version;
    io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_local_var->self_link = self_link;

    return io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_free(io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *io_k8s_apimachinery_pkg_apis_meta_v1_list_meta) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_list_meta){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->_continue) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->_continue);
        io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->_continue = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->resource_version) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->resource_version);
        io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->resource_version = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->self_link) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->self_link);
        io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->self_link = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_list_meta);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *io_k8s_apimachinery_pkg_apis_meta_v1_list_meta) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->_continue
    if(io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->_continue) { 
    if(cJSON_AddStringToObject(item, "continue", io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->_continue) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->remaining_item_count
    if(io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->remaining_item_count) { 
    if(cJSON_AddNumberToObject(item, "remainingItemCount", io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->remaining_item_count) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->resource_version
    if(io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->resource_version) { 
    if(cJSON_AddStringToObject(item, "resourceVersion", io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->resource_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->self_link
    if(io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->self_link) { 
    if(cJSON_AddStringToObject(item, "selfLink", io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->self_link) == NULL) {
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

io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_list_metaJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->_continue
    cJSON *_continue = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_list_metaJSON, "continue");
    if (_continue) { 
    if(!cJSON_IsString(_continue))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->remaining_item_count
    cJSON *remaining_item_count = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_list_metaJSON, "remainingItemCount");
    if (remaining_item_count) { 
    if(!cJSON_IsNumber(remaining_item_count))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->resource_version
    cJSON *resource_version = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_list_metaJSON, "resourceVersion");
    if (resource_version) { 
    if(!cJSON_IsString(resource_version))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_list_meta->self_link
    cJSON *self_link = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_list_metaJSON, "selfLink");
    if (self_link) { 
    if(!cJSON_IsString(self_link))
    {
    goto end; //String
    }
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_create (
        _continue ? strdup(_continue->valuestring) : NULL,
        remaining_item_count ? remaining_item_count->valuedouble : 0,
        resource_version ? strdup(resource_version->valuestring) : NULL,
        self_link ? strdup(self_link->valuestring) : NULL
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_local_var;
end:
    return NULL;

}
