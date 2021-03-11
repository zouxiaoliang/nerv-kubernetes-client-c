#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_pod_status.h"



io_k8s_api_core_v1_pod_status_t *io_k8s_api_core_v1_pod_status_create(
    list_t *conditions,
    list_t *container_statuses,
    list_t *ephemeral_container_statuses,
    char *host_ip,
    list_t *init_container_statuses,
    char *message,
    char *nominated_node_name,
    char *phase,
    char *pod_ip,
    list_t *pod_ips,
    char *qos_class,
    char *reason,
    char *start_time
    ) {
    io_k8s_api_core_v1_pod_status_t *io_k8s_api_core_v1_pod_status_local_var = malloc(sizeof(io_k8s_api_core_v1_pod_status_t));
    if (!io_k8s_api_core_v1_pod_status_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_pod_status_local_var->conditions = conditions;
    io_k8s_api_core_v1_pod_status_local_var->container_statuses = container_statuses;
    io_k8s_api_core_v1_pod_status_local_var->ephemeral_container_statuses = ephemeral_container_statuses;
    io_k8s_api_core_v1_pod_status_local_var->host_ip = host_ip;
    io_k8s_api_core_v1_pod_status_local_var->init_container_statuses = init_container_statuses;
    io_k8s_api_core_v1_pod_status_local_var->message = message;
    io_k8s_api_core_v1_pod_status_local_var->nominated_node_name = nominated_node_name;
    io_k8s_api_core_v1_pod_status_local_var->phase = phase;
    io_k8s_api_core_v1_pod_status_local_var->pod_ip = pod_ip;
    io_k8s_api_core_v1_pod_status_local_var->pod_ips = pod_ips;
    io_k8s_api_core_v1_pod_status_local_var->qos_class = qos_class;
    io_k8s_api_core_v1_pod_status_local_var->reason = reason;
    io_k8s_api_core_v1_pod_status_local_var->start_time = start_time;

    return io_k8s_api_core_v1_pod_status_local_var;
}


void io_k8s_api_core_v1_pod_status_free(io_k8s_api_core_v1_pod_status_t *io_k8s_api_core_v1_pod_status) {
    if(NULL == io_k8s_api_core_v1_pod_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_pod_status->conditions) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_status->conditions) {
            io_k8s_api_core_v1_pod_condition_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_status->conditions);
        io_k8s_api_core_v1_pod_status->conditions = NULL;
    }
    if (io_k8s_api_core_v1_pod_status->container_statuses) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_status->container_statuses) {
            io_k8s_api_core_v1_container_status_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_status->container_statuses);
        io_k8s_api_core_v1_pod_status->container_statuses = NULL;
    }
    if (io_k8s_api_core_v1_pod_status->ephemeral_container_statuses) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_status->ephemeral_container_statuses) {
            io_k8s_api_core_v1_container_status_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_status->ephemeral_container_statuses);
        io_k8s_api_core_v1_pod_status->ephemeral_container_statuses = NULL;
    }
    if (io_k8s_api_core_v1_pod_status->host_ip) {
        free(io_k8s_api_core_v1_pod_status->host_ip);
        io_k8s_api_core_v1_pod_status->host_ip = NULL;
    }
    if (io_k8s_api_core_v1_pod_status->init_container_statuses) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_status->init_container_statuses) {
            io_k8s_api_core_v1_container_status_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_status->init_container_statuses);
        io_k8s_api_core_v1_pod_status->init_container_statuses = NULL;
    }
    if (io_k8s_api_core_v1_pod_status->message) {
        free(io_k8s_api_core_v1_pod_status->message);
        io_k8s_api_core_v1_pod_status->message = NULL;
    }
    if (io_k8s_api_core_v1_pod_status->nominated_node_name) {
        free(io_k8s_api_core_v1_pod_status->nominated_node_name);
        io_k8s_api_core_v1_pod_status->nominated_node_name = NULL;
    }
    if (io_k8s_api_core_v1_pod_status->phase) {
        free(io_k8s_api_core_v1_pod_status->phase);
        io_k8s_api_core_v1_pod_status->phase = NULL;
    }
    if (io_k8s_api_core_v1_pod_status->pod_ip) {
        free(io_k8s_api_core_v1_pod_status->pod_ip);
        io_k8s_api_core_v1_pod_status->pod_ip = NULL;
    }
    if (io_k8s_api_core_v1_pod_status->pod_ips) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_status->pod_ips) {
            io_k8s_api_core_v1_pod_ip_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_status->pod_ips);
        io_k8s_api_core_v1_pod_status->pod_ips = NULL;
    }
    if (io_k8s_api_core_v1_pod_status->qos_class) {
        free(io_k8s_api_core_v1_pod_status->qos_class);
        io_k8s_api_core_v1_pod_status->qos_class = NULL;
    }
    if (io_k8s_api_core_v1_pod_status->reason) {
        free(io_k8s_api_core_v1_pod_status->reason);
        io_k8s_api_core_v1_pod_status->reason = NULL;
    }
    if (io_k8s_api_core_v1_pod_status->start_time) {
        free(io_k8s_api_core_v1_pod_status->start_time);
        io_k8s_api_core_v1_pod_status->start_time = NULL;
    }
    free(io_k8s_api_core_v1_pod_status);
}

cJSON *io_k8s_api_core_v1_pod_status_convertToJSON(io_k8s_api_core_v1_pod_status_t *io_k8s_api_core_v1_pod_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_pod_status->conditions
    if(io_k8s_api_core_v1_pod_status->conditions) { 
    cJSON *conditions = cJSON_AddArrayToObject(item, "conditions");
    if(conditions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *conditionsListEntry;
    if (io_k8s_api_core_v1_pod_status->conditions) {
    list_ForEach(conditionsListEntry, io_k8s_api_core_v1_pod_status->conditions) {
    cJSON *itemLocal = io_k8s_api_core_v1_pod_condition_convertToJSON(conditionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(conditions, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_pod_status->container_statuses
    if(io_k8s_api_core_v1_pod_status->container_statuses) { 
    cJSON *container_statuses = cJSON_AddArrayToObject(item, "containerStatuses");
    if(container_statuses == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *container_statusesListEntry;
    if (io_k8s_api_core_v1_pod_status->container_statuses) {
    list_ForEach(container_statusesListEntry, io_k8s_api_core_v1_pod_status->container_statuses) {
    cJSON *itemLocal = io_k8s_api_core_v1_container_status_convertToJSON(container_statusesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(container_statuses, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_pod_status->ephemeral_container_statuses
    if(io_k8s_api_core_v1_pod_status->ephemeral_container_statuses) { 
    cJSON *ephemeral_container_statuses = cJSON_AddArrayToObject(item, "ephemeralContainerStatuses");
    if(ephemeral_container_statuses == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *ephemeral_container_statusesListEntry;
    if (io_k8s_api_core_v1_pod_status->ephemeral_container_statuses) {
    list_ForEach(ephemeral_container_statusesListEntry, io_k8s_api_core_v1_pod_status->ephemeral_container_statuses) {
    cJSON *itemLocal = io_k8s_api_core_v1_container_status_convertToJSON(ephemeral_container_statusesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(ephemeral_container_statuses, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_pod_status->host_ip
    if(io_k8s_api_core_v1_pod_status->host_ip) { 
    if(cJSON_AddStringToObject(item, "hostIP", io_k8s_api_core_v1_pod_status->host_ip) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_status->init_container_statuses
    if(io_k8s_api_core_v1_pod_status->init_container_statuses) { 
    cJSON *init_container_statuses = cJSON_AddArrayToObject(item, "initContainerStatuses");
    if(init_container_statuses == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *init_container_statusesListEntry;
    if (io_k8s_api_core_v1_pod_status->init_container_statuses) {
    list_ForEach(init_container_statusesListEntry, io_k8s_api_core_v1_pod_status->init_container_statuses) {
    cJSON *itemLocal = io_k8s_api_core_v1_container_status_convertToJSON(init_container_statusesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(init_container_statuses, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_pod_status->message
    if(io_k8s_api_core_v1_pod_status->message) { 
    if(cJSON_AddStringToObject(item, "message", io_k8s_api_core_v1_pod_status->message) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_status->nominated_node_name
    if(io_k8s_api_core_v1_pod_status->nominated_node_name) { 
    if(cJSON_AddStringToObject(item, "nominatedNodeName", io_k8s_api_core_v1_pod_status->nominated_node_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_status->phase
    if(io_k8s_api_core_v1_pod_status->phase) { 
    if(cJSON_AddStringToObject(item, "phase", io_k8s_api_core_v1_pod_status->phase) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_status->pod_ip
    if(io_k8s_api_core_v1_pod_status->pod_ip) { 
    if(cJSON_AddStringToObject(item, "podIP", io_k8s_api_core_v1_pod_status->pod_ip) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_status->pod_ips
    if(io_k8s_api_core_v1_pod_status->pod_ips) { 
    cJSON *pod_ips = cJSON_AddArrayToObject(item, "podIPs");
    if(pod_ips == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *pod_ipsListEntry;
    if (io_k8s_api_core_v1_pod_status->pod_ips) {
    list_ForEach(pod_ipsListEntry, io_k8s_api_core_v1_pod_status->pod_ips) {
    cJSON *itemLocal = io_k8s_api_core_v1_pod_ip_convertToJSON(pod_ipsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(pod_ips, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_pod_status->qos_class
    if(io_k8s_api_core_v1_pod_status->qos_class) { 
    if(cJSON_AddStringToObject(item, "qosClass", io_k8s_api_core_v1_pod_status->qos_class) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_status->reason
    if(io_k8s_api_core_v1_pod_status->reason) { 
    if(cJSON_AddStringToObject(item, "reason", io_k8s_api_core_v1_pod_status->reason) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_status->start_time
    if(io_k8s_api_core_v1_pod_status->start_time) { 
    if(cJSON_AddStringToObject(item, "startTime", io_k8s_api_core_v1_pod_status->start_time) == NULL) {
    goto fail; //Date-Time
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_pod_status_t *io_k8s_api_core_v1_pod_status_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_statusJSON){

    io_k8s_api_core_v1_pod_status_t *io_k8s_api_core_v1_pod_status_local_var = NULL;

    // io_k8s_api_core_v1_pod_status->conditions
    cJSON *conditions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_statusJSON, "conditions");
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
        io_k8s_api_core_v1_pod_condition_t *conditionsItem = io_k8s_api_core_v1_pod_condition_parseFromJSON(conditions_local_nonprimitive);

        list_addElement(conditionsList, conditionsItem);
    }
    }

    // io_k8s_api_core_v1_pod_status->container_statuses
    cJSON *container_statuses = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_statusJSON, "containerStatuses");
    list_t *container_statusesList;
    if (container_statuses) { 
    cJSON *container_statuses_local_nonprimitive;
    if(!cJSON_IsArray(container_statuses)){
        goto end; //nonprimitive container
    }

    container_statusesList = list_create();

    cJSON_ArrayForEach(container_statuses_local_nonprimitive,container_statuses )
    {
        if(!cJSON_IsObject(container_statuses_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_container_status_t *container_statusesItem = io_k8s_api_core_v1_container_status_parseFromJSON(container_statuses_local_nonprimitive);

        list_addElement(container_statusesList, container_statusesItem);
    }
    }

    // io_k8s_api_core_v1_pod_status->ephemeral_container_statuses
    cJSON *ephemeral_container_statuses = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_statusJSON, "ephemeralContainerStatuses");
    list_t *ephemeral_container_statusesList;
    if (ephemeral_container_statuses) { 
    cJSON *ephemeral_container_statuses_local_nonprimitive;
    if(!cJSON_IsArray(ephemeral_container_statuses)){
        goto end; //nonprimitive container
    }

    ephemeral_container_statusesList = list_create();

    cJSON_ArrayForEach(ephemeral_container_statuses_local_nonprimitive,ephemeral_container_statuses )
    {
        if(!cJSON_IsObject(ephemeral_container_statuses_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_container_status_t *ephemeral_container_statusesItem = io_k8s_api_core_v1_container_status_parseFromJSON(ephemeral_container_statuses_local_nonprimitive);

        list_addElement(ephemeral_container_statusesList, ephemeral_container_statusesItem);
    }
    }

    // io_k8s_api_core_v1_pod_status->host_ip
    cJSON *host_ip = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_statusJSON, "hostIP");
    if (host_ip) { 
    if(!cJSON_IsString(host_ip))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_status->init_container_statuses
    cJSON *init_container_statuses = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_statusJSON, "initContainerStatuses");
    list_t *init_container_statusesList;
    if (init_container_statuses) { 
    cJSON *init_container_statuses_local_nonprimitive;
    if(!cJSON_IsArray(init_container_statuses)){
        goto end; //nonprimitive container
    }

    init_container_statusesList = list_create();

    cJSON_ArrayForEach(init_container_statuses_local_nonprimitive,init_container_statuses )
    {
        if(!cJSON_IsObject(init_container_statuses_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_container_status_t *init_container_statusesItem = io_k8s_api_core_v1_container_status_parseFromJSON(init_container_statuses_local_nonprimitive);

        list_addElement(init_container_statusesList, init_container_statusesItem);
    }
    }

    // io_k8s_api_core_v1_pod_status->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_statusJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_status->nominated_node_name
    cJSON *nominated_node_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_statusJSON, "nominatedNodeName");
    if (nominated_node_name) { 
    if(!cJSON_IsString(nominated_node_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_status->phase
    cJSON *phase = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_statusJSON, "phase");
    if (phase) { 
    if(!cJSON_IsString(phase))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_status->pod_ip
    cJSON *pod_ip = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_statusJSON, "podIP");
    if (pod_ip) { 
    if(!cJSON_IsString(pod_ip))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_status->pod_ips
    cJSON *pod_ips = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_statusJSON, "podIPs");
    list_t *pod_ipsList;
    if (pod_ips) { 
    cJSON *pod_ips_local_nonprimitive;
    if(!cJSON_IsArray(pod_ips)){
        goto end; //nonprimitive container
    }

    pod_ipsList = list_create();

    cJSON_ArrayForEach(pod_ips_local_nonprimitive,pod_ips )
    {
        if(!cJSON_IsObject(pod_ips_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_pod_ip_t *pod_ipsItem = io_k8s_api_core_v1_pod_ip_parseFromJSON(pod_ips_local_nonprimitive);

        list_addElement(pod_ipsList, pod_ipsItem);
    }
    }

    // io_k8s_api_core_v1_pod_status->qos_class
    cJSON *qos_class = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_statusJSON, "qosClass");
    if (qos_class) { 
    if(!cJSON_IsString(qos_class))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_status->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_statusJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_status->start_time
    cJSON *start_time = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_statusJSON, "startTime");
    if (start_time) { 
    if(!cJSON_IsString(start_time))
    {
    goto end; //DateTime
    }
    }


    io_k8s_api_core_v1_pod_status_local_var = io_k8s_api_core_v1_pod_status_create (
        conditions ? conditionsList : NULL,
        container_statuses ? container_statusesList : NULL,
        ephemeral_container_statuses ? ephemeral_container_statusesList : NULL,
        host_ip ? strdup(host_ip->valuestring) : NULL,
        init_container_statuses ? init_container_statusesList : NULL,
        message ? strdup(message->valuestring) : NULL,
        nominated_node_name ? strdup(nominated_node_name->valuestring) : NULL,
        phase ? strdup(phase->valuestring) : NULL,
        pod_ip ? strdup(pod_ip->valuestring) : NULL,
        pod_ips ? pod_ipsList : NULL,
        qos_class ? strdup(qos_class->valuestring) : NULL,
        reason ? strdup(reason->valuestring) : NULL,
        start_time ? strdup(start_time->valuestring) : NULL
        );

    return io_k8s_api_core_v1_pod_status_local_var;
end:
    return NULL;

}
