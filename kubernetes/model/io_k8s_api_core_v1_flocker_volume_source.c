#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_flocker_volume_source.h"



io_k8s_api_core_v1_flocker_volume_source_t *io_k8s_api_core_v1_flocker_volume_source_create(
    char *dataset_name,
    char *dataset_uuid
    ) {
    io_k8s_api_core_v1_flocker_volume_source_t *io_k8s_api_core_v1_flocker_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_flocker_volume_source_t));
    if (!io_k8s_api_core_v1_flocker_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_flocker_volume_source_local_var->dataset_name = dataset_name;
    io_k8s_api_core_v1_flocker_volume_source_local_var->dataset_uuid = dataset_uuid;

    return io_k8s_api_core_v1_flocker_volume_source_local_var;
}


void io_k8s_api_core_v1_flocker_volume_source_free(io_k8s_api_core_v1_flocker_volume_source_t *io_k8s_api_core_v1_flocker_volume_source) {
    if(NULL == io_k8s_api_core_v1_flocker_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_flocker_volume_source->dataset_name) {
        free(io_k8s_api_core_v1_flocker_volume_source->dataset_name);
        io_k8s_api_core_v1_flocker_volume_source->dataset_name = NULL;
    }
    if (io_k8s_api_core_v1_flocker_volume_source->dataset_uuid) {
        free(io_k8s_api_core_v1_flocker_volume_source->dataset_uuid);
        io_k8s_api_core_v1_flocker_volume_source->dataset_uuid = NULL;
    }
    free(io_k8s_api_core_v1_flocker_volume_source);
}

cJSON *io_k8s_api_core_v1_flocker_volume_source_convertToJSON(io_k8s_api_core_v1_flocker_volume_source_t *io_k8s_api_core_v1_flocker_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_flocker_volume_source->dataset_name
    if(io_k8s_api_core_v1_flocker_volume_source->dataset_name) { 
    if(cJSON_AddStringToObject(item, "datasetName", io_k8s_api_core_v1_flocker_volume_source->dataset_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_flocker_volume_source->dataset_uuid
    if(io_k8s_api_core_v1_flocker_volume_source->dataset_uuid) { 
    if(cJSON_AddStringToObject(item, "datasetUUID", io_k8s_api_core_v1_flocker_volume_source->dataset_uuid) == NULL) {
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

io_k8s_api_core_v1_flocker_volume_source_t *io_k8s_api_core_v1_flocker_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_flocker_volume_sourceJSON){

    io_k8s_api_core_v1_flocker_volume_source_t *io_k8s_api_core_v1_flocker_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_flocker_volume_source->dataset_name
    cJSON *dataset_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_flocker_volume_sourceJSON, "datasetName");
    if (dataset_name) { 
    if(!cJSON_IsString(dataset_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_flocker_volume_source->dataset_uuid
    cJSON *dataset_uuid = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_flocker_volume_sourceJSON, "datasetUUID");
    if (dataset_uuid) { 
    if(!cJSON_IsString(dataset_uuid))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_flocker_volume_source_local_var = io_k8s_api_core_v1_flocker_volume_source_create (
        dataset_name ? strdup(dataset_name->valuestring) : NULL,
        dataset_uuid ? strdup(dataset_uuid->valuestring) : NULL
        );

    return io_k8s_api_core_v1_flocker_volume_source_local_var;
end:
    return NULL;

}
