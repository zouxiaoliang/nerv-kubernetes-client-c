#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_service_status.h"



io_k8s_api_core_v1_service_status_t *io_k8s_api_core_v1_service_status_create(
    list_t *conditions,
    io_k8s_api_core_v1_load_balancer_status_t *load_balancer
    ) {
    io_k8s_api_core_v1_service_status_t *io_k8s_api_core_v1_service_status_local_var = malloc(sizeof(io_k8s_api_core_v1_service_status_t));
    if (!io_k8s_api_core_v1_service_status_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_service_status_local_var->conditions = conditions;
    io_k8s_api_core_v1_service_status_local_var->load_balancer = load_balancer;

    return io_k8s_api_core_v1_service_status_local_var;
}


void io_k8s_api_core_v1_service_status_free(io_k8s_api_core_v1_service_status_t *io_k8s_api_core_v1_service_status) {
    if(NULL == io_k8s_api_core_v1_service_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_service_status->conditions) {
        list_ForEach(listEntry, io_k8s_api_core_v1_service_status->conditions) {
            io_k8s_apimachinery_pkg_apis_meta_v1_condition_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_service_status->conditions);
        io_k8s_api_core_v1_service_status->conditions = NULL;
    }
    if (io_k8s_api_core_v1_service_status->load_balancer) {
        io_k8s_api_core_v1_load_balancer_status_free(io_k8s_api_core_v1_service_status->load_balancer);
        io_k8s_api_core_v1_service_status->load_balancer = NULL;
    }
    free(io_k8s_api_core_v1_service_status);
}

cJSON *io_k8s_api_core_v1_service_status_convertToJSON(io_k8s_api_core_v1_service_status_t *io_k8s_api_core_v1_service_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_service_status->conditions
    if(io_k8s_api_core_v1_service_status->conditions) { 
    cJSON *conditions = cJSON_AddArrayToObject(item, "conditions");
    if(conditions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *conditionsListEntry;
    if (io_k8s_api_core_v1_service_status->conditions) {
    list_ForEach(conditionsListEntry, io_k8s_api_core_v1_service_status->conditions) {
    cJSON *itemLocal = io_k8s_apimachinery_pkg_apis_meta_v1_condition_convertToJSON(conditionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(conditions, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_service_status->load_balancer
    if(io_k8s_api_core_v1_service_status->load_balancer) { 
    cJSON *load_balancer_local_JSON = io_k8s_api_core_v1_load_balancer_status_convertToJSON(io_k8s_api_core_v1_service_status->load_balancer);
    if(load_balancer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "loadBalancer", load_balancer_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_service_status_t *io_k8s_api_core_v1_service_status_parseFromJSON(cJSON *io_k8s_api_core_v1_service_statusJSON){

    io_k8s_api_core_v1_service_status_t *io_k8s_api_core_v1_service_status_local_var = NULL;

    // io_k8s_api_core_v1_service_status->conditions
    cJSON *conditions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_statusJSON, "conditions");
    list_t *conditionsList;
    if (conditions) { 
    cJSON *conditions_local_nonprimitive;
    if(!cJSON_IsArray(conditions)){
        goto end; //nonprimitive container
    }

    conditionsList = list_create();

    cJSON_ArrayForEach(conditions_local_nonprimitive,conditions )
    {
        if(!cJSON_IsObject(conditions_local_nonprimitive)){
            goto end;
        }
        io_k8s_apimachinery_pkg_apis_meta_v1_condition_t *conditionsItem = io_k8s_apimachinery_pkg_apis_meta_v1_condition_parseFromJSON(conditions_local_nonprimitive);

        list_addElement(conditionsList, conditionsItem);
    }
    }

    // io_k8s_api_core_v1_service_status->load_balancer
    cJSON *load_balancer = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_statusJSON, "loadBalancer");
    io_k8s_api_core_v1_load_balancer_status_t *load_balancer_local_nonprim = NULL;
    if (load_balancer) { 
    load_balancer_local_nonprim = io_k8s_api_core_v1_load_balancer_status_parseFromJSON(load_balancer); //nonprimitive
    }


    io_k8s_api_core_v1_service_status_local_var = io_k8s_api_core_v1_service_status_create (
        conditions ? conditionsList : NULL,
        load_balancer ? load_balancer_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_service_status_local_var;
end:
    if (load_balancer_local_nonprim) {
        io_k8s_api_core_v1_load_balancer_status_free(load_balancer_local_nonprim);
        load_balancer_local_nonprim = NULL;
    }
    return NULL;

}
