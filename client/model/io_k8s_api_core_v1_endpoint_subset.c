#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_endpoint_subset.h"



io_k8s_api_core_v1_endpoint_subset_t *io_k8s_api_core_v1_endpoint_subset_create(
    list_t *addresses,
    list_t *not_ready_addresses,
    list_t *ports
    ) {
    io_k8s_api_core_v1_endpoint_subset_t *io_k8s_api_core_v1_endpoint_subset_local_var = malloc(sizeof(io_k8s_api_core_v1_endpoint_subset_t));
    if (!io_k8s_api_core_v1_endpoint_subset_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_endpoint_subset_local_var->addresses = addresses;
    io_k8s_api_core_v1_endpoint_subset_local_var->not_ready_addresses = not_ready_addresses;
    io_k8s_api_core_v1_endpoint_subset_local_var->ports = ports;

    return io_k8s_api_core_v1_endpoint_subset_local_var;
}


void io_k8s_api_core_v1_endpoint_subset_free(io_k8s_api_core_v1_endpoint_subset_t *io_k8s_api_core_v1_endpoint_subset) {
    if(NULL == io_k8s_api_core_v1_endpoint_subset){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_endpoint_subset->addresses) {
        list_ForEach(listEntry, io_k8s_api_core_v1_endpoint_subset->addresses) {
            io_k8s_api_core_v1_endpoint_address_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_endpoint_subset->addresses);
        io_k8s_api_core_v1_endpoint_subset->addresses = NULL;
    }
    if (io_k8s_api_core_v1_endpoint_subset->not_ready_addresses) {
        list_ForEach(listEntry, io_k8s_api_core_v1_endpoint_subset->not_ready_addresses) {
            io_k8s_api_core_v1_endpoint_address_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_endpoint_subset->not_ready_addresses);
        io_k8s_api_core_v1_endpoint_subset->not_ready_addresses = NULL;
    }
    if (io_k8s_api_core_v1_endpoint_subset->ports) {
        list_ForEach(listEntry, io_k8s_api_core_v1_endpoint_subset->ports) {
            io_k8s_api_core_v1_endpoint_port_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_endpoint_subset->ports);
        io_k8s_api_core_v1_endpoint_subset->ports = NULL;
    }
    free(io_k8s_api_core_v1_endpoint_subset);
}

cJSON *io_k8s_api_core_v1_endpoint_subset_convertToJSON(io_k8s_api_core_v1_endpoint_subset_t *io_k8s_api_core_v1_endpoint_subset) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_endpoint_subset->addresses
    if(io_k8s_api_core_v1_endpoint_subset->addresses) { 
    cJSON *addresses = cJSON_AddArrayToObject(item, "addresses");
    if(addresses == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *addressesListEntry;
    if (io_k8s_api_core_v1_endpoint_subset->addresses) {
    list_ForEach(addressesListEntry, io_k8s_api_core_v1_endpoint_subset->addresses) {
    cJSON *itemLocal = io_k8s_api_core_v1_endpoint_address_convertToJSON(addressesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(addresses, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_endpoint_subset->not_ready_addresses
    if(io_k8s_api_core_v1_endpoint_subset->not_ready_addresses) { 
    cJSON *not_ready_addresses = cJSON_AddArrayToObject(item, "notReadyAddresses");
    if(not_ready_addresses == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *not_ready_addressesListEntry;
    if (io_k8s_api_core_v1_endpoint_subset->not_ready_addresses) {
    list_ForEach(not_ready_addressesListEntry, io_k8s_api_core_v1_endpoint_subset->not_ready_addresses) {
    cJSON *itemLocal = io_k8s_api_core_v1_endpoint_address_convertToJSON(not_ready_addressesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(not_ready_addresses, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_endpoint_subset->ports
    if(io_k8s_api_core_v1_endpoint_subset->ports) { 
    cJSON *ports = cJSON_AddArrayToObject(item, "ports");
    if(ports == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *portsListEntry;
    if (io_k8s_api_core_v1_endpoint_subset->ports) {
    list_ForEach(portsListEntry, io_k8s_api_core_v1_endpoint_subset->ports) {
    cJSON *itemLocal = io_k8s_api_core_v1_endpoint_port_convertToJSON(portsListEntry->data);
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

io_k8s_api_core_v1_endpoint_subset_t *io_k8s_api_core_v1_endpoint_subset_parseFromJSON(cJSON *io_k8s_api_core_v1_endpoint_subsetJSON){

    io_k8s_api_core_v1_endpoint_subset_t *io_k8s_api_core_v1_endpoint_subset_local_var = NULL;

    // io_k8s_api_core_v1_endpoint_subset->addresses
    cJSON *addresses = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_endpoint_subsetJSON, "addresses");
    list_t *addressesList;
    if (addresses) { 
    cJSON *addresses_local_nonprimitive;
    if(!cJSON_IsArray(addresses)){
        goto end; //nonprimitive container
    }

    addressesList = list_create();

    cJSON_ArrayForEach(addresses_local_nonprimitive,addresses )
    {
        if(!cJSON_IsObject(addresses_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_endpoint_address_t *addressesItem = io_k8s_api_core_v1_endpoint_address_parseFromJSON(addresses_local_nonprimitive);

        list_addElement(addressesList, addressesItem);
    }
    }

    // io_k8s_api_core_v1_endpoint_subset->not_ready_addresses
    cJSON *not_ready_addresses = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_endpoint_subsetJSON, "notReadyAddresses");
    list_t *not_ready_addressesList;
    if (not_ready_addresses) { 
    cJSON *not_ready_addresses_local_nonprimitive;
    if(!cJSON_IsArray(not_ready_addresses)){
        goto end; //nonprimitive container
    }

    not_ready_addressesList = list_create();

    cJSON_ArrayForEach(not_ready_addresses_local_nonprimitive,not_ready_addresses )
    {
        if(!cJSON_IsObject(not_ready_addresses_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_endpoint_address_t *not_ready_addressesItem = io_k8s_api_core_v1_endpoint_address_parseFromJSON(not_ready_addresses_local_nonprimitive);

        list_addElement(not_ready_addressesList, not_ready_addressesItem);
    }
    }

    // io_k8s_api_core_v1_endpoint_subset->ports
    cJSON *ports = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_endpoint_subsetJSON, "ports");
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
        io_k8s_api_core_v1_endpoint_port_t *portsItem = io_k8s_api_core_v1_endpoint_port_parseFromJSON(ports_local_nonprimitive);

        list_addElement(portsList, portsItem);
    }
    }


    io_k8s_api_core_v1_endpoint_subset_local_var = io_k8s_api_core_v1_endpoint_subset_create (
        addresses ? addressesList : NULL,
        not_ready_addresses ? not_ready_addressesList : NULL,
        ports ? portsList : NULL
        );

    return io_k8s_api_core_v1_endpoint_subset_local_var;
end:
    return NULL;

}
