#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_limit_range_spec.h"



io_k8s_api_core_v1_limit_range_spec_t *io_k8s_api_core_v1_limit_range_spec_create(
    list_t *limits
    ) {
    io_k8s_api_core_v1_limit_range_spec_t *io_k8s_api_core_v1_limit_range_spec_local_var = malloc(sizeof(io_k8s_api_core_v1_limit_range_spec_t));
    if (!io_k8s_api_core_v1_limit_range_spec_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_limit_range_spec_local_var->limits = limits;

    return io_k8s_api_core_v1_limit_range_spec_local_var;
}


void io_k8s_api_core_v1_limit_range_spec_free(io_k8s_api_core_v1_limit_range_spec_t *io_k8s_api_core_v1_limit_range_spec) {
    if(NULL == io_k8s_api_core_v1_limit_range_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_limit_range_spec->limits) {
        list_ForEach(listEntry, io_k8s_api_core_v1_limit_range_spec->limits) {
            io_k8s_api_core_v1_limit_range_item_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_limit_range_spec->limits);
        io_k8s_api_core_v1_limit_range_spec->limits = NULL;
    }
    free(io_k8s_api_core_v1_limit_range_spec);
}

cJSON *io_k8s_api_core_v1_limit_range_spec_convertToJSON(io_k8s_api_core_v1_limit_range_spec_t *io_k8s_api_core_v1_limit_range_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_limit_range_spec->limits
    if (!io_k8s_api_core_v1_limit_range_spec->limits) {
        goto fail;
    }
    
    cJSON *limits = cJSON_AddArrayToObject(item, "limits");
    if(limits == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *limitsListEntry;
    if (io_k8s_api_core_v1_limit_range_spec->limits) {
    list_ForEach(limitsListEntry, io_k8s_api_core_v1_limit_range_spec->limits) {
    cJSON *itemLocal = io_k8s_api_core_v1_limit_range_item_convertToJSON(limitsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(limits, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_limit_range_spec_t *io_k8s_api_core_v1_limit_range_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_limit_range_specJSON){

    io_k8s_api_core_v1_limit_range_spec_t *io_k8s_api_core_v1_limit_range_spec_local_var = NULL;

    // io_k8s_api_core_v1_limit_range_spec->limits
    cJSON *limits = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_limit_range_specJSON, "limits");
    if (!limits) {
        goto end;
    }

    list_t *limitsList;
    
    cJSON *limits_local_nonprimitive;
    if(!cJSON_IsArray(limits)){
        goto end; //nonprimitive container
    }

    limitsList = list_create();

    cJSON_ArrayForEach(limits_local_nonprimitive,limits )
    {
        if(!cJSON_IsObject(limits_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_limit_range_item_t *limitsItem = io_k8s_api_core_v1_limit_range_item_parseFromJSON(limits_local_nonprimitive);

        list_addElement(limitsList, limitsItem);
    }


    io_k8s_api_core_v1_limit_range_spec_local_var = io_k8s_api_core_v1_limit_range_spec_create (
        limitsList
        );

    return io_k8s_api_core_v1_limit_range_spec_local_var;
end:
    return NULL;

}
