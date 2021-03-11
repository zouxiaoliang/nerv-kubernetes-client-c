#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_fc_volume_source.h"



io_k8s_api_core_v1_fc_volume_source_t *io_k8s_api_core_v1_fc_volume_source_create(
    char *fs_type,
    int lun,
    int read_only,
    list_t *target_wwns,
    list_t *wwids
    ) {
    io_k8s_api_core_v1_fc_volume_source_t *io_k8s_api_core_v1_fc_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_fc_volume_source_t));
    if (!io_k8s_api_core_v1_fc_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_fc_volume_source_local_var->fs_type = fs_type;
    io_k8s_api_core_v1_fc_volume_source_local_var->lun = lun;
    io_k8s_api_core_v1_fc_volume_source_local_var->read_only = read_only;
    io_k8s_api_core_v1_fc_volume_source_local_var->target_wwns = target_wwns;
    io_k8s_api_core_v1_fc_volume_source_local_var->wwids = wwids;

    return io_k8s_api_core_v1_fc_volume_source_local_var;
}


void io_k8s_api_core_v1_fc_volume_source_free(io_k8s_api_core_v1_fc_volume_source_t *io_k8s_api_core_v1_fc_volume_source) {
    if(NULL == io_k8s_api_core_v1_fc_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_fc_volume_source->fs_type) {
        free(io_k8s_api_core_v1_fc_volume_source->fs_type);
        io_k8s_api_core_v1_fc_volume_source->fs_type = NULL;
    }
    if (io_k8s_api_core_v1_fc_volume_source->target_wwns) {
        list_ForEach(listEntry, io_k8s_api_core_v1_fc_volume_source->target_wwns) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_fc_volume_source->target_wwns);
        io_k8s_api_core_v1_fc_volume_source->target_wwns = NULL;
    }
    if (io_k8s_api_core_v1_fc_volume_source->wwids) {
        list_ForEach(listEntry, io_k8s_api_core_v1_fc_volume_source->wwids) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_fc_volume_source->wwids);
        io_k8s_api_core_v1_fc_volume_source->wwids = NULL;
    }
    free(io_k8s_api_core_v1_fc_volume_source);
}

cJSON *io_k8s_api_core_v1_fc_volume_source_convertToJSON(io_k8s_api_core_v1_fc_volume_source_t *io_k8s_api_core_v1_fc_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_fc_volume_source->fs_type
    if(io_k8s_api_core_v1_fc_volume_source->fs_type) { 
    if(cJSON_AddStringToObject(item, "fsType", io_k8s_api_core_v1_fc_volume_source->fs_type) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_fc_volume_source->lun
    if(io_k8s_api_core_v1_fc_volume_source->lun) { 
    if(cJSON_AddNumberToObject(item, "lun", io_k8s_api_core_v1_fc_volume_source->lun) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_fc_volume_source->read_only
    if(io_k8s_api_core_v1_fc_volume_source->read_only) { 
    if(cJSON_AddBoolToObject(item, "readOnly", io_k8s_api_core_v1_fc_volume_source->read_only) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_fc_volume_source->target_wwns
    if(io_k8s_api_core_v1_fc_volume_source->target_wwns) { 
    cJSON *target_wwns = cJSON_AddArrayToObject(item, "targetWWNs");
    if(target_wwns == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *target_wwnsListEntry;
    list_ForEach(target_wwnsListEntry, io_k8s_api_core_v1_fc_volume_source->target_wwns) {
    if(cJSON_AddStringToObject(target_wwns, "", (char*)target_wwnsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_fc_volume_source->wwids
    if(io_k8s_api_core_v1_fc_volume_source->wwids) { 
    cJSON *wwids = cJSON_AddArrayToObject(item, "wwids");
    if(wwids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *wwidsListEntry;
    list_ForEach(wwidsListEntry, io_k8s_api_core_v1_fc_volume_source->wwids) {
    if(cJSON_AddStringToObject(wwids, "", (char*)wwidsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_fc_volume_source_t *io_k8s_api_core_v1_fc_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_fc_volume_sourceJSON){

    io_k8s_api_core_v1_fc_volume_source_t *io_k8s_api_core_v1_fc_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_fc_volume_source->fs_type
    cJSON *fs_type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_fc_volume_sourceJSON, "fsType");
    if (fs_type) { 
    if(!cJSON_IsString(fs_type))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_fc_volume_source->lun
    cJSON *lun = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_fc_volume_sourceJSON, "lun");
    if (lun) { 
    if(!cJSON_IsNumber(lun))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_fc_volume_source->read_only
    cJSON *read_only = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_fc_volume_sourceJSON, "readOnly");
    if (read_only) { 
    if(!cJSON_IsBool(read_only))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_fc_volume_source->target_wwns
    cJSON *target_wwns = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_fc_volume_sourceJSON, "targetWWNs");
    list_t *target_wwnsList;
    if (target_wwns) { 
    cJSON *target_wwns_local;
    if(!cJSON_IsArray(target_wwns)) {
        goto end;//primitive container
    }
    target_wwnsList = list_create();

    cJSON_ArrayForEach(target_wwns_local, target_wwns)
    {
        if(!cJSON_IsString(target_wwns_local))
        {
            goto end;
        }
        list_addElement(target_wwnsList , strdup(target_wwns_local->valuestring));
    }
    }

    // io_k8s_api_core_v1_fc_volume_source->wwids
    cJSON *wwids = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_fc_volume_sourceJSON, "wwids");
    list_t *wwidsList;
    if (wwids) { 
    cJSON *wwids_local;
    if(!cJSON_IsArray(wwids)) {
        goto end;//primitive container
    }
    wwidsList = list_create();

    cJSON_ArrayForEach(wwids_local, wwids)
    {
        if(!cJSON_IsString(wwids_local))
        {
            goto end;
        }
        list_addElement(wwidsList , strdup(wwids_local->valuestring));
    }
    }


    io_k8s_api_core_v1_fc_volume_source_local_var = io_k8s_api_core_v1_fc_volume_source_create (
        fs_type ? strdup(fs_type->valuestring) : NULL,
        lun ? lun->valuedouble : 0,
        read_only ? read_only->valueint : 0,
        target_wwns ? target_wwnsList : NULL,
        wwids ? wwidsList : NULL
        );

    return io_k8s_api_core_v1_fc_volume_source_local_var;
end:
    return NULL;

}
