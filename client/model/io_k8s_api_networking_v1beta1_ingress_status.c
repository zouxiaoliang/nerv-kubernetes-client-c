#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_networking_v1beta1_ingress_status.h"



io_k8s_api_networking_v1beta1_ingress_status_t *io_k8s_api_networking_v1beta1_ingress_status_create(
    io_k8s_api_core_v1_load_balancer_status_t *load_balancer
    ) {
    io_k8s_api_networking_v1beta1_ingress_status_t *io_k8s_api_networking_v1beta1_ingress_status_local_var = malloc(sizeof(io_k8s_api_networking_v1beta1_ingress_status_t));
    if (!io_k8s_api_networking_v1beta1_ingress_status_local_var) {
        return NULL;
    }
    io_k8s_api_networking_v1beta1_ingress_status_local_var->load_balancer = load_balancer;

    return io_k8s_api_networking_v1beta1_ingress_status_local_var;
}


void io_k8s_api_networking_v1beta1_ingress_status_free(io_k8s_api_networking_v1beta1_ingress_status_t *io_k8s_api_networking_v1beta1_ingress_status) {
    if(NULL == io_k8s_api_networking_v1beta1_ingress_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_networking_v1beta1_ingress_status->load_balancer) {
        io_k8s_api_core_v1_load_balancer_status_free(io_k8s_api_networking_v1beta1_ingress_status->load_balancer);
        io_k8s_api_networking_v1beta1_ingress_status->load_balancer = NULL;
    }
    free(io_k8s_api_networking_v1beta1_ingress_status);
}

cJSON *io_k8s_api_networking_v1beta1_ingress_status_convertToJSON(io_k8s_api_networking_v1beta1_ingress_status_t *io_k8s_api_networking_v1beta1_ingress_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_networking_v1beta1_ingress_status->load_balancer
    if(io_k8s_api_networking_v1beta1_ingress_status->load_balancer) { 
    cJSON *load_balancer_local_JSON = io_k8s_api_core_v1_load_balancer_status_convertToJSON(io_k8s_api_networking_v1beta1_ingress_status->load_balancer);
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

io_k8s_api_networking_v1beta1_ingress_status_t *io_k8s_api_networking_v1beta1_ingress_status_parseFromJSON(cJSON *io_k8s_api_networking_v1beta1_ingress_statusJSON){

    io_k8s_api_networking_v1beta1_ingress_status_t *io_k8s_api_networking_v1beta1_ingress_status_local_var = NULL;

    // io_k8s_api_networking_v1beta1_ingress_status->load_balancer
    cJSON *load_balancer = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1beta1_ingress_statusJSON, "loadBalancer");
    io_k8s_api_core_v1_load_balancer_status_t *load_balancer_local_nonprim = NULL;
    if (load_balancer) { 
    load_balancer_local_nonprim = io_k8s_api_core_v1_load_balancer_status_parseFromJSON(load_balancer); //nonprimitive
    }


    io_k8s_api_networking_v1beta1_ingress_status_local_var = io_k8s_api_networking_v1beta1_ingress_status_create (
        load_balancer ? load_balancer_local_nonprim : NULL
        );

    return io_k8s_api_networking_v1beta1_ingress_status_local_var;
end:
    if (load_balancer_local_nonprim) {
        io_k8s_api_core_v1_load_balancer_status_free(load_balancer_local_nonprim);
        load_balancer_local_nonprim = NULL;
    }
    return NULL;

}
