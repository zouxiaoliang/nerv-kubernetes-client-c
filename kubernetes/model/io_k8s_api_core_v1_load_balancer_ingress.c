#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_load_balancer_ingress.h"



io_k8s_api_core_v1_load_balancer_ingress_t *io_k8s_api_core_v1_load_balancer_ingress_create(
    char *hostname,
    char *ip,
    list_t *ports
    ) {
    io_k8s_api_core_v1_load_balancer_ingress_t *io_k8s_api_core_v1_load_balancer_ingress_local_var = malloc(sizeof(io_k8s_api_core_v1_load_balancer_ingress_t));
    if (!io_k8s_api_core_v1_load_balancer_ingress_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_load_balancer_ingress_local_var->hostname = hostname;
    io_k8s_api_core_v1_load_balancer_ingress_local_var->ip = ip;
    io_k8s_api_core_v1_load_balancer_ingress_local_var->ports = ports;

    return io_k8s_api_core_v1_load_balancer_ingress_local_var;
}


void io_k8s_api_core_v1_load_balancer_ingress_free(io_k8s_api_core_v1_load_balancer_ingress_t *io_k8s_api_core_v1_load_balancer_ingress) {
    if(NULL == io_k8s_api_core_v1_load_balancer_ingress){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_load_balancer_ingress->hostname) {
        free(io_k8s_api_core_v1_load_balancer_ingress->hostname);
        io_k8s_api_core_v1_load_balancer_ingress->hostname = NULL;
    }
    if (io_k8s_api_core_v1_load_balancer_ingress->ip) {
        free(io_k8s_api_core_v1_load_balancer_ingress->ip);
        io_k8s_api_core_v1_load_balancer_ingress->ip = NULL;
    }
    if (io_k8s_api_core_v1_load_balancer_ingress->ports) {
        list_ForEach(listEntry, io_k8s_api_core_v1_load_balancer_ingress->ports) {
            io_k8s_api_core_v1_port_status_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_load_balancer_ingress->ports);
        io_k8s_api_core_v1_load_balancer_ingress->ports = NULL;
    }
    free(io_k8s_api_core_v1_load_balancer_ingress);
}

cJSON *io_k8s_api_core_v1_load_balancer_ingress_convertToJSON(io_k8s_api_core_v1_load_balancer_ingress_t *io_k8s_api_core_v1_load_balancer_ingress) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_load_balancer_ingress->hostname
    if(io_k8s_api_core_v1_load_balancer_ingress->hostname) { 
    if(cJSON_AddStringToObject(item, "hostname", io_k8s_api_core_v1_load_balancer_ingress->hostname) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_load_balancer_ingress->ip
    if(io_k8s_api_core_v1_load_balancer_ingress->ip) { 
    if(cJSON_AddStringToObject(item, "ip", io_k8s_api_core_v1_load_balancer_ingress->ip) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_load_balancer_ingress->ports
    if(io_k8s_api_core_v1_load_balancer_ingress->ports) { 
    cJSON *ports = cJSON_AddArrayToObject(item, "ports");
    if(ports == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *portsListEntry;
    if (io_k8s_api_core_v1_load_balancer_ingress->ports) {
    list_ForEach(portsListEntry, io_k8s_api_core_v1_load_balancer_ingress->ports) {
    cJSON *itemLocal = io_k8s_api_core_v1_port_status_convertToJSON(portsListEntry->data);
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

io_k8s_api_core_v1_load_balancer_ingress_t *io_k8s_api_core_v1_load_balancer_ingress_parseFromJSON(cJSON *io_k8s_api_core_v1_load_balancer_ingressJSON){

    io_k8s_api_core_v1_load_balancer_ingress_t *io_k8s_api_core_v1_load_balancer_ingress_local_var = NULL;

    // io_k8s_api_core_v1_load_balancer_ingress->hostname
    cJSON *hostname = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_load_balancer_ingressJSON, "hostname");
    if (hostname) { 
    if(!cJSON_IsString(hostname))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_load_balancer_ingress->ip
    cJSON *ip = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_load_balancer_ingressJSON, "ip");
    if (ip) { 
    if(!cJSON_IsString(ip))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_load_balancer_ingress->ports
    cJSON *ports = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_load_balancer_ingressJSON, "ports");
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
        io_k8s_api_core_v1_port_status_t *portsItem = io_k8s_api_core_v1_port_status_parseFromJSON(ports_local_nonprimitive);

        list_addElement(portsList, portsItem);
    }
    }


    io_k8s_api_core_v1_load_balancer_ingress_local_var = io_k8s_api_core_v1_load_balancer_ingress_create (
        hostname ? strdup(hostname->valuestring) : NULL,
        ip ? strdup(ip->valuestring) : NULL,
        ports ? portsList : NULL
        );

    return io_k8s_api_core_v1_load_balancer_ingress_local_var;
end:
    return NULL;

}
