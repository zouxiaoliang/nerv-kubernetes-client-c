#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status.h"



io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_create(
    list_t *conditions
    ) {
    io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_local_var = malloc(sizeof(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_t));
    if (!io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_local_var) {
        return NULL;
    }
    io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_local_var->conditions = conditions;

    return io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_local_var;
}


void io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_free(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status) {
    if(NULL == io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status->conditions) {
        list_ForEach(listEntry, io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status->conditions) {
            io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_condition_free(listEntry->data);
        }
        list_free(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status->conditions);
        io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status->conditions = NULL;
    }
    free(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status);
}

cJSON *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_convertToJSON(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status->conditions
    if(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status->conditions) { 
    cJSON *conditions = cJSON_AddArrayToObject(item, "conditions");
    if(conditions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *conditionsListEntry;
    if (io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status->conditions) {
    list_ForEach(conditionsListEntry, io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status->conditions) {
    cJSON *itemLocal = io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_condition_convertToJSON(conditionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(conditions, itemLocal);
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

io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_statusJSON){

    io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_local_var = NULL;

    // io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status->conditions
    cJSON *conditions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_statusJSON, "conditions");
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
        io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_condition_t *conditionsItem = io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_condition_parseFromJSON(conditions_local_nonprimitive);

        list_addElement(conditionsList, conditionsItem);
    }
    }


    io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_local_var = io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_create (
        conditions ? conditionsList : NULL
        );

    return io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_local_var;
end:
    return NULL;

}
