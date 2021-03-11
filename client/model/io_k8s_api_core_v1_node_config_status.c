#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_node_config_status.h"



io_k8s_api_core_v1_node_config_status_t *io_k8s_api_core_v1_node_config_status_create(
    io_k8s_api_core_v1_node_config_source_t *active,
    io_k8s_api_core_v1_node_config_source_t *assigned,
    char *error,
    io_k8s_api_core_v1_node_config_source_t *last_known_good
    ) {
    io_k8s_api_core_v1_node_config_status_t *io_k8s_api_core_v1_node_config_status_local_var = malloc(sizeof(io_k8s_api_core_v1_node_config_status_t));
    if (!io_k8s_api_core_v1_node_config_status_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_node_config_status_local_var->active = active;
    io_k8s_api_core_v1_node_config_status_local_var->assigned = assigned;
    io_k8s_api_core_v1_node_config_status_local_var->error = error;
    io_k8s_api_core_v1_node_config_status_local_var->last_known_good = last_known_good;

    return io_k8s_api_core_v1_node_config_status_local_var;
}


void io_k8s_api_core_v1_node_config_status_free(io_k8s_api_core_v1_node_config_status_t *io_k8s_api_core_v1_node_config_status) {
    if(NULL == io_k8s_api_core_v1_node_config_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_node_config_status->active) {
        io_k8s_api_core_v1_node_config_source_free(io_k8s_api_core_v1_node_config_status->active);
        io_k8s_api_core_v1_node_config_status->active = NULL;
    }
    if (io_k8s_api_core_v1_node_config_status->assigned) {
        io_k8s_api_core_v1_node_config_source_free(io_k8s_api_core_v1_node_config_status->assigned);
        io_k8s_api_core_v1_node_config_status->assigned = NULL;
    }
    if (io_k8s_api_core_v1_node_config_status->error) {
        free(io_k8s_api_core_v1_node_config_status->error);
        io_k8s_api_core_v1_node_config_status->error = NULL;
    }
    if (io_k8s_api_core_v1_node_config_status->last_known_good) {
        io_k8s_api_core_v1_node_config_source_free(io_k8s_api_core_v1_node_config_status->last_known_good);
        io_k8s_api_core_v1_node_config_status->last_known_good = NULL;
    }
    free(io_k8s_api_core_v1_node_config_status);
}

cJSON *io_k8s_api_core_v1_node_config_status_convertToJSON(io_k8s_api_core_v1_node_config_status_t *io_k8s_api_core_v1_node_config_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_node_config_status->active
    if(io_k8s_api_core_v1_node_config_status->active) { 
    cJSON *active_local_JSON = io_k8s_api_core_v1_node_config_source_convertToJSON(io_k8s_api_core_v1_node_config_status->active);
    if(active_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "active", active_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_node_config_status->assigned
    if(io_k8s_api_core_v1_node_config_status->assigned) { 
    cJSON *assigned_local_JSON = io_k8s_api_core_v1_node_config_source_convertToJSON(io_k8s_api_core_v1_node_config_status->assigned);
    if(assigned_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "assigned", assigned_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_node_config_status->error
    if(io_k8s_api_core_v1_node_config_status->error) { 
    if(cJSON_AddStringToObject(item, "error", io_k8s_api_core_v1_node_config_status->error) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_node_config_status->last_known_good
    if(io_k8s_api_core_v1_node_config_status->last_known_good) { 
    cJSON *last_known_good_local_JSON = io_k8s_api_core_v1_node_config_source_convertToJSON(io_k8s_api_core_v1_node_config_status->last_known_good);
    if(last_known_good_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "lastKnownGood", last_known_good_local_JSON);
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

io_k8s_api_core_v1_node_config_status_t *io_k8s_api_core_v1_node_config_status_parseFromJSON(cJSON *io_k8s_api_core_v1_node_config_statusJSON){

    io_k8s_api_core_v1_node_config_status_t *io_k8s_api_core_v1_node_config_status_local_var = NULL;

    // io_k8s_api_core_v1_node_config_status->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_config_statusJSON, "active");
    io_k8s_api_core_v1_node_config_source_t *active_local_nonprim = NULL;
    if (active) { 
    active_local_nonprim = io_k8s_api_core_v1_node_config_source_parseFromJSON(active); //nonprimitive
    }

    // io_k8s_api_core_v1_node_config_status->assigned
    cJSON *assigned = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_config_statusJSON, "assigned");
    io_k8s_api_core_v1_node_config_source_t *assigned_local_nonprim = NULL;
    if (assigned) { 
    assigned_local_nonprim = io_k8s_api_core_v1_node_config_source_parseFromJSON(assigned); //nonprimitive
    }

    // io_k8s_api_core_v1_node_config_status->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_config_statusJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_node_config_status->last_known_good
    cJSON *last_known_good = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_config_statusJSON, "lastKnownGood");
    io_k8s_api_core_v1_node_config_source_t *last_known_good_local_nonprim = NULL;
    if (last_known_good) { 
    last_known_good_local_nonprim = io_k8s_api_core_v1_node_config_source_parseFromJSON(last_known_good); //nonprimitive
    }


    io_k8s_api_core_v1_node_config_status_local_var = io_k8s_api_core_v1_node_config_status_create (
        active ? active_local_nonprim : NULL,
        assigned ? assigned_local_nonprim : NULL,
        error ? strdup(error->valuestring) : NULL,
        last_known_good ? last_known_good_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_node_config_status_local_var;
end:
    if (active_local_nonprim) {
        io_k8s_api_core_v1_node_config_source_free(active_local_nonprim);
        active_local_nonprim = NULL;
    }
    if (assigned_local_nonprim) {
        io_k8s_api_core_v1_node_config_source_free(assigned_local_nonprim);
        assigned_local_nonprim = NULL;
    }
    if (last_known_good_local_nonprim) {
        io_k8s_api_core_v1_node_config_source_free(last_known_good_local_nonprim);
        last_known_good_local_nonprim = NULL;
    }
    return NULL;

}
