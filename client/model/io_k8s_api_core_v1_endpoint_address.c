#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_endpoint_address.h"



io_k8s_api_core_v1_endpoint_address_t *io_k8s_api_core_v1_endpoint_address_create(
    char *hostname,
    char *ip,
    char *node_name,
    io_k8s_api_core_v1_object_reference_t *target_ref
    ) {
    io_k8s_api_core_v1_endpoint_address_t *io_k8s_api_core_v1_endpoint_address_local_var = malloc(sizeof(io_k8s_api_core_v1_endpoint_address_t));
    if (!io_k8s_api_core_v1_endpoint_address_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_endpoint_address_local_var->hostname = hostname;
    io_k8s_api_core_v1_endpoint_address_local_var->ip = ip;
    io_k8s_api_core_v1_endpoint_address_local_var->node_name = node_name;
    io_k8s_api_core_v1_endpoint_address_local_var->target_ref = target_ref;

    return io_k8s_api_core_v1_endpoint_address_local_var;
}


void io_k8s_api_core_v1_endpoint_address_free(io_k8s_api_core_v1_endpoint_address_t *io_k8s_api_core_v1_endpoint_address) {
    if(NULL == io_k8s_api_core_v1_endpoint_address){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_endpoint_address->hostname) {
        free(io_k8s_api_core_v1_endpoint_address->hostname);
        io_k8s_api_core_v1_endpoint_address->hostname = NULL;
    }
    if (io_k8s_api_core_v1_endpoint_address->ip) {
        free(io_k8s_api_core_v1_endpoint_address->ip);
        io_k8s_api_core_v1_endpoint_address->ip = NULL;
    }
    if (io_k8s_api_core_v1_endpoint_address->node_name) {
        free(io_k8s_api_core_v1_endpoint_address->node_name);
        io_k8s_api_core_v1_endpoint_address->node_name = NULL;
    }
    if (io_k8s_api_core_v1_endpoint_address->target_ref) {
        io_k8s_api_core_v1_object_reference_free(io_k8s_api_core_v1_endpoint_address->target_ref);
        io_k8s_api_core_v1_endpoint_address->target_ref = NULL;
    }
    free(io_k8s_api_core_v1_endpoint_address);
}

cJSON *io_k8s_api_core_v1_endpoint_address_convertToJSON(io_k8s_api_core_v1_endpoint_address_t *io_k8s_api_core_v1_endpoint_address) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_endpoint_address->hostname
    if(io_k8s_api_core_v1_endpoint_address->hostname) { 
    if(cJSON_AddStringToObject(item, "hostname", io_k8s_api_core_v1_endpoint_address->hostname) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_endpoint_address->ip
    if (!io_k8s_api_core_v1_endpoint_address->ip) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "ip", io_k8s_api_core_v1_endpoint_address->ip) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_endpoint_address->node_name
    if(io_k8s_api_core_v1_endpoint_address->node_name) { 
    if(cJSON_AddStringToObject(item, "nodeName", io_k8s_api_core_v1_endpoint_address->node_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_endpoint_address->target_ref
    if(io_k8s_api_core_v1_endpoint_address->target_ref) { 
    cJSON *target_ref_local_JSON = io_k8s_api_core_v1_object_reference_convertToJSON(io_k8s_api_core_v1_endpoint_address->target_ref);
    if(target_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "targetRef", target_ref_local_JSON);
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

io_k8s_api_core_v1_endpoint_address_t *io_k8s_api_core_v1_endpoint_address_parseFromJSON(cJSON *io_k8s_api_core_v1_endpoint_addressJSON){

    io_k8s_api_core_v1_endpoint_address_t *io_k8s_api_core_v1_endpoint_address_local_var = NULL;

    // io_k8s_api_core_v1_endpoint_address->hostname
    cJSON *hostname = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_endpoint_addressJSON, "hostname");
    if (hostname) { 
    if(!cJSON_IsString(hostname))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_endpoint_address->ip
    cJSON *ip = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_endpoint_addressJSON, "ip");
    if (!ip) {
        goto end;
    }

    
    if(!cJSON_IsString(ip))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_endpoint_address->node_name
    cJSON *node_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_endpoint_addressJSON, "nodeName");
    if (node_name) { 
    if(!cJSON_IsString(node_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_endpoint_address->target_ref
    cJSON *target_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_endpoint_addressJSON, "targetRef");
    io_k8s_api_core_v1_object_reference_t *target_ref_local_nonprim = NULL;
    if (target_ref) { 
    target_ref_local_nonprim = io_k8s_api_core_v1_object_reference_parseFromJSON(target_ref); //nonprimitive
    }


    io_k8s_api_core_v1_endpoint_address_local_var = io_k8s_api_core_v1_endpoint_address_create (
        hostname ? strdup(hostname->valuestring) : NULL,
        strdup(ip->valuestring),
        node_name ? strdup(node_name->valuestring) : NULL,
        target_ref ? target_ref_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_endpoint_address_local_var;
end:
    if (target_ref_local_nonprim) {
        io_k8s_api_core_v1_object_reference_free(target_ref_local_nonprim);
        target_ref_local_nonprim = NULL;
    }
    return NULL;

}
