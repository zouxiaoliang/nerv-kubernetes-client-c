#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_networking_v1_network_policy_ingress_rule.h"



io_k8s_api_networking_v1_network_policy_ingress_rule_t *io_k8s_api_networking_v1_network_policy_ingress_rule_create(
    list_t *from,
    list_t *ports
    ) {
    io_k8s_api_networking_v1_network_policy_ingress_rule_t *io_k8s_api_networking_v1_network_policy_ingress_rule_local_var = malloc(sizeof(io_k8s_api_networking_v1_network_policy_ingress_rule_t));
    if (!io_k8s_api_networking_v1_network_policy_ingress_rule_local_var) {
        return NULL;
    }
    io_k8s_api_networking_v1_network_policy_ingress_rule_local_var->from = from;
    io_k8s_api_networking_v1_network_policy_ingress_rule_local_var->ports = ports;

    return io_k8s_api_networking_v1_network_policy_ingress_rule_local_var;
}


void io_k8s_api_networking_v1_network_policy_ingress_rule_free(io_k8s_api_networking_v1_network_policy_ingress_rule_t *io_k8s_api_networking_v1_network_policy_ingress_rule) {
    if(NULL == io_k8s_api_networking_v1_network_policy_ingress_rule){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_networking_v1_network_policy_ingress_rule->from) {
        list_ForEach(listEntry, io_k8s_api_networking_v1_network_policy_ingress_rule->from) {
            io_k8s_api_networking_v1_network_policy_peer_free(listEntry->data);
        }
        list_free(io_k8s_api_networking_v1_network_policy_ingress_rule->from);
        io_k8s_api_networking_v1_network_policy_ingress_rule->from = NULL;
    }
    if (io_k8s_api_networking_v1_network_policy_ingress_rule->ports) {
        list_ForEach(listEntry, io_k8s_api_networking_v1_network_policy_ingress_rule->ports) {
            io_k8s_api_networking_v1_network_policy_port_free(listEntry->data);
        }
        list_free(io_k8s_api_networking_v1_network_policy_ingress_rule->ports);
        io_k8s_api_networking_v1_network_policy_ingress_rule->ports = NULL;
    }
    free(io_k8s_api_networking_v1_network_policy_ingress_rule);
}

cJSON *io_k8s_api_networking_v1_network_policy_ingress_rule_convertToJSON(io_k8s_api_networking_v1_network_policy_ingress_rule_t *io_k8s_api_networking_v1_network_policy_ingress_rule) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_networking_v1_network_policy_ingress_rule->from
    if(io_k8s_api_networking_v1_network_policy_ingress_rule->from) { 
    cJSON *from = cJSON_AddArrayToObject(item, "from");
    if(from == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *fromListEntry;
    if (io_k8s_api_networking_v1_network_policy_ingress_rule->from) {
    list_ForEach(fromListEntry, io_k8s_api_networking_v1_network_policy_ingress_rule->from) {
    cJSON *itemLocal = io_k8s_api_networking_v1_network_policy_peer_convertToJSON(fromListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(from, itemLocal);
    }
    }
     } 


    // io_k8s_api_networking_v1_network_policy_ingress_rule->ports
    if(io_k8s_api_networking_v1_network_policy_ingress_rule->ports) { 
    cJSON *ports = cJSON_AddArrayToObject(item, "ports");
    if(ports == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *portsListEntry;
    if (io_k8s_api_networking_v1_network_policy_ingress_rule->ports) {
    list_ForEach(portsListEntry, io_k8s_api_networking_v1_network_policy_ingress_rule->ports) {
    cJSON *itemLocal = io_k8s_api_networking_v1_network_policy_port_convertToJSON(portsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(ports, itemLocal);
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

io_k8s_api_networking_v1_network_policy_ingress_rule_t *io_k8s_api_networking_v1_network_policy_ingress_rule_parseFromJSON(cJSON *io_k8s_api_networking_v1_network_policy_ingress_ruleJSON){

    io_k8s_api_networking_v1_network_policy_ingress_rule_t *io_k8s_api_networking_v1_network_policy_ingress_rule_local_var = NULL;

    // io_k8s_api_networking_v1_network_policy_ingress_rule->from
    cJSON *from = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_network_policy_ingress_ruleJSON, "from");
    list_t *fromList;
    if (from) { 
    cJSON *from_local_nonprimitive;
    if(!cJSON_IsArray(from)){
        goto end; //nonprimitive container
    }

    fromList = list_create();

    cJSON_ArrayForEach(from_local_nonprimitive,from )
    {
        if(!cJSON_IsObject(from_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_networking_v1_network_policy_peer_t *fromItem = io_k8s_api_networking_v1_network_policy_peer_parseFromJSON(from_local_nonprimitive);

        list_addElement(fromList, fromItem);
    }
    }

    // io_k8s_api_networking_v1_network_policy_ingress_rule->ports
    cJSON *ports = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_network_policy_ingress_ruleJSON, "ports");
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


    io_k8s_api_networking_v1_network_policy_ingress_rule_local_var = io_k8s_api_networking_v1_network_policy_ingress_rule_create (
        from ? fromList : NULL,
        ports ? portsList : NULL
        );

    return io_k8s_api_networking_v1_network_policy_ingress_rule_local_var;
end:
    return NULL;

}
