#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_load_balancer_status.h"



io_k8s_api_core_v1_load_balancer_status_t *io_k8s_api_core_v1_load_balancer_status_create(
    list_t *ingress
    ) {
    io_k8s_api_core_v1_load_balancer_status_t *io_k8s_api_core_v1_load_balancer_status_local_var = malloc(sizeof(io_k8s_api_core_v1_load_balancer_status_t));
    if (!io_k8s_api_core_v1_load_balancer_status_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_load_balancer_status_local_var->ingress = ingress;

    return io_k8s_api_core_v1_load_balancer_status_local_var;
}


void io_k8s_api_core_v1_load_balancer_status_free(io_k8s_api_core_v1_load_balancer_status_t *io_k8s_api_core_v1_load_balancer_status) {
    if(NULL == io_k8s_api_core_v1_load_balancer_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_load_balancer_status->ingress) {
        list_ForEach(listEntry, io_k8s_api_core_v1_load_balancer_status->ingress) {
            io_k8s_api_core_v1_load_balancer_ingress_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_load_balancer_status->ingress);
        io_k8s_api_core_v1_load_balancer_status->ingress = NULL;
    }
    free(io_k8s_api_core_v1_load_balancer_status);
}

cJSON *io_k8s_api_core_v1_load_balancer_status_convertToJSON(io_k8s_api_core_v1_load_balancer_status_t *io_k8s_api_core_v1_load_balancer_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_load_balancer_status->ingress
    if(io_k8s_api_core_v1_load_balancer_status->ingress) { 
    cJSON *ingress = cJSON_AddArrayToObject(item, "ingress");
    if(ingress == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *ingressListEntry;
    if (io_k8s_api_core_v1_load_balancer_status->ingress) {
    list_ForEach(ingressListEntry, io_k8s_api_core_v1_load_balancer_status->ingress) {
    cJSON *itemLocal = io_k8s_api_core_v1_load_balancer_ingress_convertToJSON(ingressListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(ingress, itemLocal);
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

io_k8s_api_core_v1_load_balancer_status_t *io_k8s_api_core_v1_load_balancer_status_parseFromJSON(cJSON *io_k8s_api_core_v1_load_balancer_statusJSON){

    io_k8s_api_core_v1_load_balancer_status_t *io_k8s_api_core_v1_load_balancer_status_local_var = NULL;

    // io_k8s_api_core_v1_load_balancer_status->ingress
    cJSON *ingress = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_load_balancer_statusJSON, "ingress");
    list_t *ingressList;
    if (ingress) { 
    cJSON *ingress_local_nonprimitive;
    if(!cJSON_IsArray(ingress)){
        goto end; //nonprimitive container
    }

    ingressList = list_create();

    cJSON_ArrayForEach(ingress_local_nonprimitive,ingress )
    {
        if(!cJSON_IsObject(ingress_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_load_balancer_ingress_t *ingressItem = io_k8s_api_core_v1_load_balancer_ingress_parseFromJSON(ingress_local_nonprimitive);

        list_addElement(ingressList, ingressItem);
    }
    }


    io_k8s_api_core_v1_load_balancer_status_local_var = io_k8s_api_core_v1_load_balancer_status_create (
        ingress ? ingressList : NULL
        );

    return io_k8s_api_core_v1_load_balancer_status_local_var;
end:
    return NULL;

}
