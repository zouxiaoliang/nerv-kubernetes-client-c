#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_namespace_spec.h"



io_k8s_api_core_v1_namespace_spec_t *io_k8s_api_core_v1_namespace_spec_create(
    list_t *finalizers
    ) {
    io_k8s_api_core_v1_namespace_spec_t *io_k8s_api_core_v1_namespace_spec_local_var = malloc(sizeof(io_k8s_api_core_v1_namespace_spec_t));
    if (!io_k8s_api_core_v1_namespace_spec_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_namespace_spec_local_var->finalizers = finalizers;

    return io_k8s_api_core_v1_namespace_spec_local_var;
}


void io_k8s_api_core_v1_namespace_spec_free(io_k8s_api_core_v1_namespace_spec_t *io_k8s_api_core_v1_namespace_spec) {
    if(NULL == io_k8s_api_core_v1_namespace_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_namespace_spec->finalizers) {
        list_ForEach(listEntry, io_k8s_api_core_v1_namespace_spec->finalizers) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_namespace_spec->finalizers);
        io_k8s_api_core_v1_namespace_spec->finalizers = NULL;
    }
    free(io_k8s_api_core_v1_namespace_spec);
}

cJSON *io_k8s_api_core_v1_namespace_spec_convertToJSON(io_k8s_api_core_v1_namespace_spec_t *io_k8s_api_core_v1_namespace_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_namespace_spec->finalizers
    if(io_k8s_api_core_v1_namespace_spec->finalizers) { 
    cJSON *finalizers = cJSON_AddArrayToObject(item, "finalizers");
    if(finalizers == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *finalizersListEntry;
    list_ForEach(finalizersListEntry, io_k8s_api_core_v1_namespace_spec->finalizers) {
    if(cJSON_AddStringToObject(finalizers, "", (char*)finalizersListEntry->data) == NULL)
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

io_k8s_api_core_v1_namespace_spec_t *io_k8s_api_core_v1_namespace_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_namespace_specJSON){

    io_k8s_api_core_v1_namespace_spec_t *io_k8s_api_core_v1_namespace_spec_local_var = NULL;

    // io_k8s_api_core_v1_namespace_spec->finalizers
    cJSON *finalizers = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_namespace_specJSON, "finalizers");
    list_t *finalizersList;
    if (finalizers) { 
    cJSON *finalizers_local;
    if(!cJSON_IsArray(finalizers)) {
        goto end;//primitive container
    }
    finalizersList = list_create();

    cJSON_ArrayForEach(finalizers_local, finalizers)
    {
        if(!cJSON_IsString(finalizers_local))
        {
            goto end;
        }
        list_addElement(finalizersList , strdup(finalizers_local->valuestring));
    }
    }


    io_k8s_api_core_v1_namespace_spec_local_var = io_k8s_api_core_v1_namespace_spec_create (
        finalizers ? finalizersList : NULL
        );

    return io_k8s_api_core_v1_namespace_spec_local_var;
end:
    return NULL;

}
