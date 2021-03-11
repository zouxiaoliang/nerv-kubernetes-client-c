#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_lifecycle.h"



io_k8s_api_core_v1_lifecycle_t *io_k8s_api_core_v1_lifecycle_create(
    io_k8s_api_core_v1_handler_t *post_start,
    io_k8s_api_core_v1_handler_t *pre_stop
    ) {
    io_k8s_api_core_v1_lifecycle_t *io_k8s_api_core_v1_lifecycle_local_var = malloc(sizeof(io_k8s_api_core_v1_lifecycle_t));
    if (!io_k8s_api_core_v1_lifecycle_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_lifecycle_local_var->post_start = post_start;
    io_k8s_api_core_v1_lifecycle_local_var->pre_stop = pre_stop;

    return io_k8s_api_core_v1_lifecycle_local_var;
}


void io_k8s_api_core_v1_lifecycle_free(io_k8s_api_core_v1_lifecycle_t *io_k8s_api_core_v1_lifecycle) {
    if(NULL == io_k8s_api_core_v1_lifecycle){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_lifecycle->post_start) {
        io_k8s_api_core_v1_handler_free(io_k8s_api_core_v1_lifecycle->post_start);
        io_k8s_api_core_v1_lifecycle->post_start = NULL;
    }
    if (io_k8s_api_core_v1_lifecycle->pre_stop) {
        io_k8s_api_core_v1_handler_free(io_k8s_api_core_v1_lifecycle->pre_stop);
        io_k8s_api_core_v1_lifecycle->pre_stop = NULL;
    }
    free(io_k8s_api_core_v1_lifecycle);
}

cJSON *io_k8s_api_core_v1_lifecycle_convertToJSON(io_k8s_api_core_v1_lifecycle_t *io_k8s_api_core_v1_lifecycle) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_lifecycle->post_start
    if(io_k8s_api_core_v1_lifecycle->post_start) { 
    cJSON *post_start_local_JSON = io_k8s_api_core_v1_handler_convertToJSON(io_k8s_api_core_v1_lifecycle->post_start);
    if(post_start_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "postStart", post_start_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_lifecycle->pre_stop
    if(io_k8s_api_core_v1_lifecycle->pre_stop) { 
    cJSON *pre_stop_local_JSON = io_k8s_api_core_v1_handler_convertToJSON(io_k8s_api_core_v1_lifecycle->pre_stop);
    if(pre_stop_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "preStop", pre_stop_local_JSON);
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

io_k8s_api_core_v1_lifecycle_t *io_k8s_api_core_v1_lifecycle_parseFromJSON(cJSON *io_k8s_api_core_v1_lifecycleJSON){

    io_k8s_api_core_v1_lifecycle_t *io_k8s_api_core_v1_lifecycle_local_var = NULL;

    // io_k8s_api_core_v1_lifecycle->post_start
    cJSON *post_start = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_lifecycleJSON, "postStart");
    io_k8s_api_core_v1_handler_t *post_start_local_nonprim = NULL;
    if (post_start) { 
    post_start_local_nonprim = io_k8s_api_core_v1_handler_parseFromJSON(post_start); //nonprimitive
    }

    // io_k8s_api_core_v1_lifecycle->pre_stop
    cJSON *pre_stop = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_lifecycleJSON, "preStop");
    io_k8s_api_core_v1_handler_t *pre_stop_local_nonprim = NULL;
    if (pre_stop) { 
    pre_stop_local_nonprim = io_k8s_api_core_v1_handler_parseFromJSON(pre_stop); //nonprimitive
    }


    io_k8s_api_core_v1_lifecycle_local_var = io_k8s_api_core_v1_lifecycle_create (
        post_start ? post_start_local_nonprim : NULL,
        pre_stop ? pre_stop_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_lifecycle_local_var;
end:
    if (post_start_local_nonprim) {
        io_k8s_api_core_v1_handler_free(post_start_local_nonprim);
        post_start_local_nonprim = NULL;
    }
    if (pre_stop_local_nonprim) {
        io_k8s_api_core_v1_handler_free(pre_stop_local_nonprim);
        pre_stop_local_nonprim = NULL;
    }
    return NULL;

}
