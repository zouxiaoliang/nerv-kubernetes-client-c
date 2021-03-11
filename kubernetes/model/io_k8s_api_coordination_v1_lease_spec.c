#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_coordination_v1_lease_spec.h"



io_k8s_api_coordination_v1_lease_spec_t *io_k8s_api_coordination_v1_lease_spec_create(
    char *acquire_time,
    char *holder_identity,
    int lease_duration_seconds,
    int lease_transitions,
    char *renew_time
    ) {
    io_k8s_api_coordination_v1_lease_spec_t *io_k8s_api_coordination_v1_lease_spec_local_var = malloc(sizeof(io_k8s_api_coordination_v1_lease_spec_t));
    if (!io_k8s_api_coordination_v1_lease_spec_local_var) {
        return NULL;
    }
    io_k8s_api_coordination_v1_lease_spec_local_var->acquire_time = acquire_time;
    io_k8s_api_coordination_v1_lease_spec_local_var->holder_identity = holder_identity;
    io_k8s_api_coordination_v1_lease_spec_local_var->lease_duration_seconds = lease_duration_seconds;
    io_k8s_api_coordination_v1_lease_spec_local_var->lease_transitions = lease_transitions;
    io_k8s_api_coordination_v1_lease_spec_local_var->renew_time = renew_time;

    return io_k8s_api_coordination_v1_lease_spec_local_var;
}


void io_k8s_api_coordination_v1_lease_spec_free(io_k8s_api_coordination_v1_lease_spec_t *io_k8s_api_coordination_v1_lease_spec) {
    if(NULL == io_k8s_api_coordination_v1_lease_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_coordination_v1_lease_spec->acquire_time) {
        free(io_k8s_api_coordination_v1_lease_spec->acquire_time);
        io_k8s_api_coordination_v1_lease_spec->acquire_time = NULL;
    }
    if (io_k8s_api_coordination_v1_lease_spec->holder_identity) {
        free(io_k8s_api_coordination_v1_lease_spec->holder_identity);
        io_k8s_api_coordination_v1_lease_spec->holder_identity = NULL;
    }
    if (io_k8s_api_coordination_v1_lease_spec->renew_time) {
        free(io_k8s_api_coordination_v1_lease_spec->renew_time);
        io_k8s_api_coordination_v1_lease_spec->renew_time = NULL;
    }
    free(io_k8s_api_coordination_v1_lease_spec);
}

cJSON *io_k8s_api_coordination_v1_lease_spec_convertToJSON(io_k8s_api_coordination_v1_lease_spec_t *io_k8s_api_coordination_v1_lease_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_coordination_v1_lease_spec->acquire_time
    if(io_k8s_api_coordination_v1_lease_spec->acquire_time) { 
    if(cJSON_AddStringToObject(item, "acquireTime", io_k8s_api_coordination_v1_lease_spec->acquire_time) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // io_k8s_api_coordination_v1_lease_spec->holder_identity
    if(io_k8s_api_coordination_v1_lease_spec->holder_identity) { 
    if(cJSON_AddStringToObject(item, "holderIdentity", io_k8s_api_coordination_v1_lease_spec->holder_identity) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_coordination_v1_lease_spec->lease_duration_seconds
    if(io_k8s_api_coordination_v1_lease_spec->lease_duration_seconds) { 
    if(cJSON_AddNumberToObject(item, "leaseDurationSeconds", io_k8s_api_coordination_v1_lease_spec->lease_duration_seconds) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_coordination_v1_lease_spec->lease_transitions
    if(io_k8s_api_coordination_v1_lease_spec->lease_transitions) { 
    if(cJSON_AddNumberToObject(item, "leaseTransitions", io_k8s_api_coordination_v1_lease_spec->lease_transitions) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_coordination_v1_lease_spec->renew_time
    if(io_k8s_api_coordination_v1_lease_spec->renew_time) { 
    if(cJSON_AddStringToObject(item, "renewTime", io_k8s_api_coordination_v1_lease_spec->renew_time) == NULL) {
    goto fail; //Date-Time
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_coordination_v1_lease_spec_t *io_k8s_api_coordination_v1_lease_spec_parseFromJSON(cJSON *io_k8s_api_coordination_v1_lease_specJSON){

    io_k8s_api_coordination_v1_lease_spec_t *io_k8s_api_coordination_v1_lease_spec_local_var = NULL;

    // io_k8s_api_coordination_v1_lease_spec->acquire_time
    cJSON *acquire_time = cJSON_GetObjectItemCaseSensitive(io_k8s_api_coordination_v1_lease_specJSON, "acquireTime");
    if (acquire_time) { 
    if(!cJSON_IsString(acquire_time))
    {
    goto end; //DateTime
    }
    }

    // io_k8s_api_coordination_v1_lease_spec->holder_identity
    cJSON *holder_identity = cJSON_GetObjectItemCaseSensitive(io_k8s_api_coordination_v1_lease_specJSON, "holderIdentity");
    if (holder_identity) { 
    if(!cJSON_IsString(holder_identity))
    {
    goto end; //String
    }
    }

    // io_k8s_api_coordination_v1_lease_spec->lease_duration_seconds
    cJSON *lease_duration_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_api_coordination_v1_lease_specJSON, "leaseDurationSeconds");
    if (lease_duration_seconds) { 
    if(!cJSON_IsNumber(lease_duration_seconds))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_coordination_v1_lease_spec->lease_transitions
    cJSON *lease_transitions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_coordination_v1_lease_specJSON, "leaseTransitions");
    if (lease_transitions) { 
    if(!cJSON_IsNumber(lease_transitions))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_coordination_v1_lease_spec->renew_time
    cJSON *renew_time = cJSON_GetObjectItemCaseSensitive(io_k8s_api_coordination_v1_lease_specJSON, "renewTime");
    if (renew_time) { 
    if(!cJSON_IsString(renew_time))
    {
    goto end; //DateTime
    }
    }


    io_k8s_api_coordination_v1_lease_spec_local_var = io_k8s_api_coordination_v1_lease_spec_create (
        acquire_time ? strdup(acquire_time->valuestring) : NULL,
        holder_identity ? strdup(holder_identity->valuestring) : NULL,
        lease_duration_seconds ? lease_duration_seconds->valuedouble : 0,
        lease_transitions ? lease_transitions->valuedouble : 0,
        renew_time ? strdup(renew_time->valuestring) : NULL
        );

    return io_k8s_api_coordination_v1_lease_spec_local_var;
end:
    return NULL;

}
