#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_discovery_v1beta1_endpoint.h"



io_k8s_api_discovery_v1beta1_endpoint_t *io_k8s_api_discovery_v1beta1_endpoint_create(
    list_t *addresses,
    io_k8s_api_discovery_v1beta1_endpoint_conditions_t *conditions,
    char *hostname,
    char *node_name,
    io_k8s_api_core_v1_object_reference_t *target_ref,
    list_t* topology
    ) {
    io_k8s_api_discovery_v1beta1_endpoint_t *io_k8s_api_discovery_v1beta1_endpoint_local_var = malloc(sizeof(io_k8s_api_discovery_v1beta1_endpoint_t));
    if (!io_k8s_api_discovery_v1beta1_endpoint_local_var) {
        return NULL;
    }
    io_k8s_api_discovery_v1beta1_endpoint_local_var->addresses = addresses;
    io_k8s_api_discovery_v1beta1_endpoint_local_var->conditions = conditions;
    io_k8s_api_discovery_v1beta1_endpoint_local_var->hostname = hostname;
    io_k8s_api_discovery_v1beta1_endpoint_local_var->node_name = node_name;
    io_k8s_api_discovery_v1beta1_endpoint_local_var->target_ref = target_ref;
    io_k8s_api_discovery_v1beta1_endpoint_local_var->topology = topology;

    return io_k8s_api_discovery_v1beta1_endpoint_local_var;
}


void io_k8s_api_discovery_v1beta1_endpoint_free(io_k8s_api_discovery_v1beta1_endpoint_t *io_k8s_api_discovery_v1beta1_endpoint) {
    if(NULL == io_k8s_api_discovery_v1beta1_endpoint){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_discovery_v1beta1_endpoint->addresses) {
        list_ForEach(listEntry, io_k8s_api_discovery_v1beta1_endpoint->addresses) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_discovery_v1beta1_endpoint->addresses);
        io_k8s_api_discovery_v1beta1_endpoint->addresses = NULL;
    }
    if (io_k8s_api_discovery_v1beta1_endpoint->conditions) {
        io_k8s_api_discovery_v1beta1_endpoint_conditions_free(io_k8s_api_discovery_v1beta1_endpoint->conditions);
        io_k8s_api_discovery_v1beta1_endpoint->conditions = NULL;
    }
    if (io_k8s_api_discovery_v1beta1_endpoint->hostname) {
        free(io_k8s_api_discovery_v1beta1_endpoint->hostname);
        io_k8s_api_discovery_v1beta1_endpoint->hostname = NULL;
    }
    if (io_k8s_api_discovery_v1beta1_endpoint->node_name) {
        free(io_k8s_api_discovery_v1beta1_endpoint->node_name);
        io_k8s_api_discovery_v1beta1_endpoint->node_name = NULL;
    }
    if (io_k8s_api_discovery_v1beta1_endpoint->target_ref) {
        io_k8s_api_core_v1_object_reference_free(io_k8s_api_discovery_v1beta1_endpoint->target_ref);
        io_k8s_api_discovery_v1beta1_endpoint->target_ref = NULL;
    }
    if (io_k8s_api_discovery_v1beta1_endpoint->topology) {
        list_ForEach(listEntry, io_k8s_api_discovery_v1beta1_endpoint->topology) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_discovery_v1beta1_endpoint->topology);
        io_k8s_api_discovery_v1beta1_endpoint->topology = NULL;
    }
    free(io_k8s_api_discovery_v1beta1_endpoint);
}

cJSON *io_k8s_api_discovery_v1beta1_endpoint_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint_t *io_k8s_api_discovery_v1beta1_endpoint) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_discovery_v1beta1_endpoint->addresses
    if (!io_k8s_api_discovery_v1beta1_endpoint->addresses) {
        goto fail;
    }
    
    cJSON *addresses = cJSON_AddArrayToObject(item, "addresses");
    if(addresses == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *addressesListEntry;
    list_ForEach(addressesListEntry, io_k8s_api_discovery_v1beta1_endpoint->addresses) {
    if(cJSON_AddStringToObject(addresses, "", (char*)addressesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // io_k8s_api_discovery_v1beta1_endpoint->conditions
    if(io_k8s_api_discovery_v1beta1_endpoint->conditions) { 
    cJSON *conditions_local_JSON = io_k8s_api_discovery_v1beta1_endpoint_conditions_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint->conditions);
    if(conditions_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "conditions", conditions_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_discovery_v1beta1_endpoint->hostname
    if(io_k8s_api_discovery_v1beta1_endpoint->hostname) { 
    if(cJSON_AddStringToObject(item, "hostname", io_k8s_api_discovery_v1beta1_endpoint->hostname) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_discovery_v1beta1_endpoint->node_name
    if(io_k8s_api_discovery_v1beta1_endpoint->node_name) { 
    if(cJSON_AddStringToObject(item, "nodeName", io_k8s_api_discovery_v1beta1_endpoint->node_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_discovery_v1beta1_endpoint->target_ref
    if(io_k8s_api_discovery_v1beta1_endpoint->target_ref) { 
    cJSON *target_ref_local_JSON = io_k8s_api_core_v1_object_reference_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint->target_ref);
    if(target_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "targetRef", target_ref_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_discovery_v1beta1_endpoint->topology
    if(io_k8s_api_discovery_v1beta1_endpoint->topology) { 
    cJSON *topology = cJSON_AddObjectToObject(item, "topology");
    if(topology == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = topology;
    listEntry_t *topologyListEntry;
    if (io_k8s_api_discovery_v1beta1_endpoint->topology) {
    list_ForEach(topologyListEntry, io_k8s_api_discovery_v1beta1_endpoint->topology) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)topologyListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
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

io_k8s_api_discovery_v1beta1_endpoint_t *io_k8s_api_discovery_v1beta1_endpoint_parseFromJSON(cJSON *io_k8s_api_discovery_v1beta1_endpointJSON){

    io_k8s_api_discovery_v1beta1_endpoint_t *io_k8s_api_discovery_v1beta1_endpoint_local_var = NULL;

    // io_k8s_api_discovery_v1beta1_endpoint->addresses
    cJSON *addresses = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpointJSON, "addresses");
    if (!addresses) {
        goto end;
    }

    list_t *addressesList;
    
    cJSON *addresses_local;
    if(!cJSON_IsArray(addresses)) {
        goto end;//primitive container
    }
    addressesList = list_create();

    cJSON_ArrayForEach(addresses_local, addresses)
    {
        if(!cJSON_IsString(addresses_local))
        {
            goto end;
        }
        list_addElement(addressesList , strdup(addresses_local->valuestring));
    }

    // io_k8s_api_discovery_v1beta1_endpoint->conditions
    cJSON *conditions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpointJSON, "conditions");
    io_k8s_api_discovery_v1beta1_endpoint_conditions_t *conditions_local_nonprim = NULL;
    if (conditions) { 
    conditions_local_nonprim = io_k8s_api_discovery_v1beta1_endpoint_conditions_parseFromJSON(conditions); //nonprimitive
    }

    // io_k8s_api_discovery_v1beta1_endpoint->hostname
    cJSON *hostname = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpointJSON, "hostname");
    if (hostname) { 
    if(!cJSON_IsString(hostname))
    {
    goto end; //String
    }
    }

    // io_k8s_api_discovery_v1beta1_endpoint->node_name
    cJSON *node_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpointJSON, "nodeName");
    if (node_name) { 
    if(!cJSON_IsString(node_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_discovery_v1beta1_endpoint->target_ref
    cJSON *target_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpointJSON, "targetRef");
    io_k8s_api_core_v1_object_reference_t *target_ref_local_nonprim = NULL;
    if (target_ref) { 
    target_ref_local_nonprim = io_k8s_api_core_v1_object_reference_parseFromJSON(target_ref); //nonprimitive
    }

    // io_k8s_api_discovery_v1beta1_endpoint->topology
    cJSON *topology = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpointJSON, "topology");
    list_t *topologyList;
    if (topology) { 
    cJSON *topology_local_map;
    if(!cJSON_IsObject(topology)) {
        goto end;//primitive map container
    }
    topologyList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(topology_local_map, topology)
    {
		cJSON *localMapObject = topology_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(topologyList , localMapKeyPair);
    }
    }


    io_k8s_api_discovery_v1beta1_endpoint_local_var = io_k8s_api_discovery_v1beta1_endpoint_create (
        addressesList,
        conditions ? conditions_local_nonprim : NULL,
        hostname ? strdup(hostname->valuestring) : NULL,
        node_name ? strdup(node_name->valuestring) : NULL,
        target_ref ? target_ref_local_nonprim : NULL,
        topology ? topologyList : NULL
        );

    return io_k8s_api_discovery_v1beta1_endpoint_local_var;
end:
    if (conditions_local_nonprim) {
        io_k8s_api_discovery_v1beta1_endpoint_conditions_free(conditions_local_nonprim);
        conditions_local_nonprim = NULL;
    }
    if (target_ref_local_nonprim) {
        io_k8s_api_core_v1_object_reference_free(target_ref_local_nonprim);
        target_ref_local_nonprim = NULL;
    }
    return NULL;

}
