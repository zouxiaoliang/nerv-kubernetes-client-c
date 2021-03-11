#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_gce_persistent_disk_volume_source.h"



io_k8s_api_core_v1_gce_persistent_disk_volume_source_t *io_k8s_api_core_v1_gce_persistent_disk_volume_source_create(
    char *fs_type,
    int partition,
    char *pd_name,
    int read_only
    ) {
    io_k8s_api_core_v1_gce_persistent_disk_volume_source_t *io_k8s_api_core_v1_gce_persistent_disk_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_gce_persistent_disk_volume_source_t));
    if (!io_k8s_api_core_v1_gce_persistent_disk_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_gce_persistent_disk_volume_source_local_var->fs_type = fs_type;
    io_k8s_api_core_v1_gce_persistent_disk_volume_source_local_var->partition = partition;
    io_k8s_api_core_v1_gce_persistent_disk_volume_source_local_var->pd_name = pd_name;
    io_k8s_api_core_v1_gce_persistent_disk_volume_source_local_var->read_only = read_only;

    return io_k8s_api_core_v1_gce_persistent_disk_volume_source_local_var;
}


void io_k8s_api_core_v1_gce_persistent_disk_volume_source_free(io_k8s_api_core_v1_gce_persistent_disk_volume_source_t *io_k8s_api_core_v1_gce_persistent_disk_volume_source) {
    if(NULL == io_k8s_api_core_v1_gce_persistent_disk_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_gce_persistent_disk_volume_source->fs_type) {
        free(io_k8s_api_core_v1_gce_persistent_disk_volume_source->fs_type);
        io_k8s_api_core_v1_gce_persistent_disk_volume_source->fs_type = NULL;
    }
    if (io_k8s_api_core_v1_gce_persistent_disk_volume_source->pd_name) {
        free(io_k8s_api_core_v1_gce_persistent_disk_volume_source->pd_name);
        io_k8s_api_core_v1_gce_persistent_disk_volume_source->pd_name = NULL;
    }
    free(io_k8s_api_core_v1_gce_persistent_disk_volume_source);
}

cJSON *io_k8s_api_core_v1_gce_persistent_disk_volume_source_convertToJSON(io_k8s_api_core_v1_gce_persistent_disk_volume_source_t *io_k8s_api_core_v1_gce_persistent_disk_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_gce_persistent_disk_volume_source->fs_type
    if(io_k8s_api_core_v1_gce_persistent_disk_volume_source->fs_type) { 
    if(cJSON_AddStringToObject(item, "fsType", io_k8s_api_core_v1_gce_persistent_disk_volume_source->fs_type) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_gce_persistent_disk_volume_source->partition
    if(io_k8s_api_core_v1_gce_persistent_disk_volume_source->partition) { 
    if(cJSON_AddNumberToObject(item, "partition", io_k8s_api_core_v1_gce_persistent_disk_volume_source->partition) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_gce_persistent_disk_volume_source->pd_name
    if (!io_k8s_api_core_v1_gce_persistent_disk_volume_source->pd_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "pdName", io_k8s_api_core_v1_gce_persistent_disk_volume_source->pd_name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_gce_persistent_disk_volume_source->read_only
    if(io_k8s_api_core_v1_gce_persistent_disk_volume_source->read_only) { 
    if(cJSON_AddBoolToObject(item, "readOnly", io_k8s_api_core_v1_gce_persistent_disk_volume_source->read_only) == NULL) {
    goto fail; //Bool
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_gce_persistent_disk_volume_source_t *io_k8s_api_core_v1_gce_persistent_disk_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_gce_persistent_disk_volume_sourceJSON){

    io_k8s_api_core_v1_gce_persistent_disk_volume_source_t *io_k8s_api_core_v1_gce_persistent_disk_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_gce_persistent_disk_volume_source->fs_type
    cJSON *fs_type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_gce_persistent_disk_volume_sourceJSON, "fsType");
    if (fs_type) { 
    if(!cJSON_IsString(fs_type))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_gce_persistent_disk_volume_source->partition
    cJSON *partition = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_gce_persistent_disk_volume_sourceJSON, "partition");
    if (partition) { 
    if(!cJSON_IsNumber(partition))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_gce_persistent_disk_volume_source->pd_name
    cJSON *pd_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_gce_persistent_disk_volume_sourceJSON, "pdName");
    if (!pd_name) {
        goto end;
    }

    
    if(!cJSON_IsString(pd_name))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_gce_persistent_disk_volume_source->read_only
    cJSON *read_only = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_gce_persistent_disk_volume_sourceJSON, "readOnly");
    if (read_only) { 
    if(!cJSON_IsBool(read_only))
    {
    goto end; //Bool
    }
    }


    io_k8s_api_core_v1_gce_persistent_disk_volume_source_local_var = io_k8s_api_core_v1_gce_persistent_disk_volume_source_create (
        fs_type ? strdup(fs_type->valuestring) : NULL,
        partition ? partition->valuedouble : 0,
        strdup(pd_name->valuestring),
        read_only ? read_only->valueint : 0
        );

    return io_k8s_api_core_v1_gce_persistent_disk_volume_source_local_var;
end:
    return NULL;

}
