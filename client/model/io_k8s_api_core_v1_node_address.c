#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_node_address.h"



io_k8s_api_core_v1_node_address_t *io_k8s_api_core_v1_node_address_create(
    char *address,
    char *type
    ) {
    io_k8s_api_core_v1_node_address_t *io_k8s_api_core_v1_node_address_local_var = malloc(sizeof(io_k8s_api_core_v1_node_address_t));
    if (!io_k8s_api_core_v1_node_address_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_node_address_local_var->address = address;
    io_k8s_api_core_v1_node_address_local_var->type = type;

    return io_k8s_api_core_v1_node_address_local_var;
}


void io_k8s_api_core_v1_node_address_free(io_k8s_api_core_v1_node_address_t *io_k8s_api_core_v1_node_address) {
    if(NULL == io_k8s_api_core_v1_node_address){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_node_address->address) {
        free(io_k8s_api_core_v1_node_address->address);
        io_k8s_api_core_v1_node_address->address = NULL;
    }
    if (io_k8s_api_core_v1_node_address->type) {
        free(io_k8s_api_core_v1_node_address->type);
        io_k8s_api_core_v1_node_address->type = NULL;
    }
    free(io_k8s_api_core_v1_node_address);
}

cJSON *io_k8s_api_core_v1_node_address_convertToJSON(io_k8s_api_core_v1_node_address_t *io_k8s_api_core_v1_node_address) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_node_address->address
    if (!io_k8s_api_core_v1_node_address->address) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "address", io_k8s_api_core_v1_node_address->address) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_node_address->type
    if (!io_k8s_api_core_v1_node_address->type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_core_v1_node_address->type) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_node_address_t *io_k8s_api_core_v1_node_address_parseFromJSON(cJSON *io_k8s_api_core_v1_node_addressJSON){

    io_k8s_api_core_v1_node_address_t *io_k8s_api_core_v1_node_address_local_var = NULL;

    // io_k8s_api_core_v1_node_address->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_addressJSON, "address");
    if (!address) {
        goto end;
    }

    
    if(!cJSON_IsString(address))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_node_address->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_addressJSON, "type");
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_node_address_local_var = io_k8s_api_core_v1_node_address_create (
        strdup(address->valuestring),
        strdup(type->valuestring)
        );

    return io_k8s_api_core_v1_node_address_local_var;
end:
    return NULL;

}
