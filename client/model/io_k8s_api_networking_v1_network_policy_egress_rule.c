#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_networking_v1_network_policy_egress_rule.h"



io_k8s_api_networking_v1_network_policy_egress_rule_t *io_k8s_api_networking_v1_network_policy_egress_rule_create(
    list_t *ports,
    list_t *to
    ) {
    io_k8s_api_networking_v1_network_policy_egress_rule_t *io_k8s_api_networking_v1_network_policy_egress_rule_local_var = malloc(sizeof(io_k8s_api_networking_v1_network_policy_egress_rule_t));
    if (!io_k8s_api_networking_v1_network_policy_egress_rule_local_var) {
        return NULL;
    }
    io_k8s_api_networking_v1_network_policy_egress_rule_local_var->ports = ports;
    io_k8s_api_networking_v1_network_policy_egress_rule_local_var->to = to;

    return io_k8s_api_networking_v1_network_policy_egress_rule_local_var;
}


void io_k8s_api_networking_v1_network_policy_egress_rule_free(io_k8s_api_networking_v1_network_policy_egress_rule_t *io_k8s_api_networking_v1_network_policy_egress_rule) {
    if(NULL == io_k8s_api_networking_v1_network_policy_egress_rule){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_networking_v1_network_policy_egress_rule->ports) {
        list_ForEach(listEntry, io_k8s_api_networking_v1_network_policy_egress_rule->ports) {
            io_k8s_api_networking_v1_network_policy_port_free(listEntry->data);
        }
        list_free(io_k8s_api_networking_v1_network_policy_egress_rule->ports);
        io_k8s_api_networking_v1_network_policy_egress_rule->ports = NULL;
    }
    if (io_k8s_api_networking_v1_network_policy_egress_rule->to) {
        list_ForEach(listEntry, io_k8s_api_networking_v1_network_policy_egress_rule->to) {
            io_k8s_api_networking_v1_network_policy_peer_free(listEntry->data);
        }
        list_free(io_k8s_api_networking_v1_network_policy_egress_rule->to);
        io_k8s_api_networking_v1_network_policy_egress_rule->to = NULL;
    }
    free(io_k8s_api_networking_v1_network_policy_egress_rule);
}

cJSON *io_k8s_api_networking_v1_network_policy_egress_rule_convertToJSON(io_k8s_api_networking_v1_network_policy_egress_rule_t *io_k8s_api_networking_v1_network_policy_egress_rule) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_networking_v1_network_policy_egress_rule->ports
    if(io_k8s_api_networking_v1_network_policy_egress_rule->ports) { 
    cJSON *ports = cJSON_AddArrayToObject(item, "ports");
    if(ports == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *portsListEntry;
    if (io_k8s_api_networking_v1_network_policy_egress_rule->ports) {
    list_ForEach(portsListEntry, io_k8s_api_networking_v1_network_policy_egress_rule->ports) {
    cJSON *itemLocal = io_k8s_api_networking_v1_network_policy_port_convertToJSON(portsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(ports, itemLocal);
    }
    }
     } 


    // io_k8s_api_networking_v1_network_policy_egress_rule->to
    if(io_k8s_api_networking_v1_network_policy_egress_rule->to) { 
    cJSON *to = cJSON_AddArrayToObject(item, "to");
    if(to == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *toListEntry;
    if (io_k8s_api_networking_v1_network_policy_egress_rule->to) {
    list_ForEach(toListEntry, io_k8s_api_networking_v1_network_policy_egress_rule->to) {
    cJSON *itemLocal = io_k8s_api_networking_v1_network_policy_peer_convertToJSON(toListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(to, itemLocal);
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

io_k8s_api_networking_v1_network_policy_egress_rule_t *io_k8s_api_networking_v1_network_policy_egress_rule_parseFromJSON(cJSON *io_k8s_api_networking_v1_network_policy_egress_ruleJSON){

    io_k8s_api_networking_v1_network_policy_egress_rule_t *io_k8s_api_networking_v1_network_policy_egress_rule_local_var = NULL;

    // io_k8s_api_networking_v1_network_policy_egress_rule->ports
    cJSON *ports = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_network_policy_egress_ruleJSON, "ports");
    list_t *portsList;
    if (ports) { 
    cJSON *ports_local_nonprimitive;
    if(!cJSON_IsArray(ports)){
        goto end; //nonprimitive container
    }

    portsList = list_create();

    cJSON_ArrayForEach(ports_local_nonprimitive,ports )
    {
        if(!cJSON_IsObject(ports_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_networking_v1_network_policy_port_t *portsItem = io_k8s_api_networking_v1_network_policy_port_parseFromJSON(ports_local_nonprimitive);

        list_addElement(portsList, portsItem);
    }
    }

    // io_k8s_api_networking_v1_network_policy_egress_rule->to
    cJSON *to = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_network_policy_egress_ruleJSON, "to");
    list_t *toList;
    if (to) { 
    cJSON *to_local_nonprimitive;
    if(!cJSON_IsArray(to)){
        goto end; //nonprimitive container
    }

    toList = list_create();

    cJSON_ArrayForEach(to_local_nonprimitive,to )
    {
        if(!cJSON_IsObject(to_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_networking_v1_network_policy_peer_t *toItem = io_k8s_api_networking_v1_network_policy_peer_parseFromJSON(to_local_nonprimitive);

        list_addElement(toList, toItem);
    }
    }


    io_k8s_api_networking_v1_network_policy_egress_rule_local_var = io_k8s_api_networking_v1_network_policy_egress_rule_create (
        ports ? portsList : NULL,
        to ? toList : NULL
        );

    return io_k8s_api_networking_v1_network_policy_egress_rule_local_var;
end:
    return NULL;

}
