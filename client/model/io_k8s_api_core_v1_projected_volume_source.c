#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_projected_volume_source.h"



io_k8s_api_core_v1_projected_volume_source_t *io_k8s_api_core_v1_projected_volume_source_create(
    int default_mode,
    list_t *sources
    ) {
    io_k8s_api_core_v1_projected_volume_source_t *io_k8s_api_core_v1_projected_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_projected_volume_source_t));
    if (!io_k8s_api_core_v1_projected_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_projected_volume_source_local_var->default_mode = default_mode;
    io_k8s_api_core_v1_projected_volume_source_local_var->sources = sources;

    return io_k8s_api_core_v1_projected_volume_source_local_var;
}


void io_k8s_api_core_v1_projected_volume_source_free(io_k8s_api_core_v1_projected_volume_source_t *io_k8s_api_core_v1_projected_volume_source) {
    if(NULL == io_k8s_api_core_v1_projected_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_projected_volume_source->sources) {
        list_ForEach(listEntry, io_k8s_api_core_v1_projected_volume_source->sources) {
            io_k8s_api_core_v1_volume_projection_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_projected_volume_source->sources);
        io_k8s_api_core_v1_projected_volume_source->sources = NULL;
    }
    free(io_k8s_api_core_v1_projected_volume_source);
}

cJSON *io_k8s_api_core_v1_projected_volume_source_convertToJSON(io_k8s_api_core_v1_projected_volume_source_t *io_k8s_api_core_v1_projected_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_projected_volume_source->default_mode
    if(io_k8s_api_core_v1_projected_volume_source->default_mode) { 
    if(cJSON_AddNumberToObject(item, "defaultMode", io_k8s_api_core_v1_projected_volume_source->default_mode) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_projected_volume_source->sources
    if(io_k8s_api_core_v1_projected_volume_source->sources) { 
    cJSON *sources = cJSON_AddArrayToObject(item, "sources");
    if(sources == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *sourcesListEntry;
    if (io_k8s_api_core_v1_projected_volume_source->sources) {
    list_ForEach(sourcesListEntry, io_k8s_api_core_v1_projected_volume_source->sources) {
    cJSON *itemLocal = io_k8s_api_core_v1_volume_projection_convertToJSON(sourcesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(sources, itemLocal);
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

io_k8s_api_core_v1_projected_volume_source_t *io_k8s_api_core_v1_projected_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_projected_volume_sourceJSON){

    io_k8s_api_core_v1_projected_volume_source_t *io_k8s_api_core_v1_projected_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_projected_volume_source->default_mode
    cJSON *default_mode = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_projected_volume_sourceJSON, "defaultMode");
    if (default_mode) { 
    if(!cJSON_IsNumber(default_mode))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_projected_volume_source->sources
    cJSON *sources = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_projected_volume_sourceJSON, "sources");
    list_t *sourcesList;
    if (sources) { 
    cJSON *sources_local_nonprimitive;
    if(!cJSON_IsArray(sources)){
        goto end; //nonprimitive container
    }

    sourcesList = list_create();

    cJSON_ArrayForEach(sources_local_nonprimitive,sources )
    {
        if(!cJSON_IsObject(sources_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_volume_projection_t *sourcesItem = io_k8s_api_core_v1_volume_projection_parseFromJSON(sources_local_nonprimitive);

        list_addElement(sourcesList, sourcesItem);
    }
    }


    io_k8s_api_core_v1_projected_volume_source_local_var = io_k8s_api_core_v1_projected_volume_source_create (
        default_mode ? default_mode->valuedouble : 0,
        sources ? sourcesList : NULL
        );

    return io_k8s_api_core_v1_projected_volume_source_local_var;
end:
    return NULL;

}
