#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_capabilities.h"



io_k8s_api_core_v1_capabilities_t *io_k8s_api_core_v1_capabilities_create(
    list_t *add,
    list_t *drop
    ) {
    io_k8s_api_core_v1_capabilities_t *io_k8s_api_core_v1_capabilities_local_var = malloc(sizeof(io_k8s_api_core_v1_capabilities_t));
    if (!io_k8s_api_core_v1_capabilities_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_capabilities_local_var->add = add;
    io_k8s_api_core_v1_capabilities_local_var->drop = drop;

    return io_k8s_api_core_v1_capabilities_local_var;
}


void io_k8s_api_core_v1_capabilities_free(io_k8s_api_core_v1_capabilities_t *io_k8s_api_core_v1_capabilities) {
    if(NULL == io_k8s_api_core_v1_capabilities){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_capabilities->add) {
        list_ForEach(listEntry, io_k8s_api_core_v1_capabilities->add) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_capabilities->add);
        io_k8s_api_core_v1_capabilities->add = NULL;
    }
    if (io_k8s_api_core_v1_capabilities->drop) {
        list_ForEach(listEntry, io_k8s_api_core_v1_capabilities->drop) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_capabilities->drop);
        io_k8s_api_core_v1_capabilities->drop = NULL;
    }
    free(io_k8s_api_core_v1_capabilities);
}

cJSON *io_k8s_api_core_v1_capabilities_convertToJSON(io_k8s_api_core_v1_capabilities_t *io_k8s_api_core_v1_capabilities) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_capabilities->add
    if(io_k8s_api_core_v1_capabilities->add) { 
    cJSON *add = cJSON_AddArrayToObject(item, "add");
    if(add == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *addListEntry;
    list_ForEach(addListEntry, io_k8s_api_core_v1_capabilities->add) {
    if(cJSON_AddStringToObject(add, "", (char*)addListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_capabilities->drop
    if(io_k8s_api_core_v1_capabilities->drop) { 
    cJSON *drop = cJSON_AddArrayToObject(item, "drop");
    if(drop == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *dropListEntry;
    list_ForEach(dropListEntry, io_k8s_api_core_v1_capabilities->drop) {
    if(cJSON_AddStringToObject(drop, "", (char*)dropListEntry->data) == NULL)
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

io_k8s_api_core_v1_capabilities_t *io_k8s_api_core_v1_capabilities_parseFromJSON(cJSON *io_k8s_api_core_v1_capabilitiesJSON){

    io_k8s_api_core_v1_capabilities_t *io_k8s_api_core_v1_capabilities_local_var = NULL;

    // io_k8s_api_core_v1_capabilities->add
    cJSON *add = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_capabilitiesJSON, "add");
    list_t *addList;
    if (add) { 
    cJSON *add_local;
    if(!cJSON_IsArray(add)) {
        goto end;//primitive container
    }
    addList = list_create();

    cJSON_ArrayForEach(add_local, add)
    {
        if(!cJSON_IsString(add_local))
        {
            goto end;
        }
        list_addElement(addList , strdup(add_local->valuestring));
    }
    }

    // io_k8s_api_core_v1_capabilities->drop
    cJSON *drop = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_capabilitiesJSON, "drop");
    list_t *dropList;
    if (drop) { 
    cJSON *drop_local;
    if(!cJSON_IsArray(drop)) {
        goto end;//primitive container
    }
    dropList = list_create();

    cJSON_ArrayForEach(drop_local, drop)
    {
        if(!cJSON_IsString(drop_local))
        {
            goto end;
        }
        list_addElement(dropList , strdup(drop_local->valuestring));
    }
    }


    io_k8s_api_core_v1_capabilities_local_var = io_k8s_api_core_v1_capabilities_create (
        add ? addList : NULL,
        drop ? dropList : NULL
        );

    return io_k8s_api_core_v1_capabilities_local_var;
end:
    return NULL;

}
