#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_flowcontrol_v1beta1_queuing_configuration.h"



io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t *io_k8s_api_flowcontrol_v1beta1_queuing_configuration_create(
    int hand_size,
    int queue_length_limit,
    int queues
    ) {
    io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t *io_k8s_api_flowcontrol_v1beta1_queuing_configuration_local_var = malloc(sizeof(io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t));
    if (!io_k8s_api_flowcontrol_v1beta1_queuing_configuration_local_var) {
        return NULL;
    }
    io_k8s_api_flowcontrol_v1beta1_queuing_configuration_local_var->hand_size = hand_size;
    io_k8s_api_flowcontrol_v1beta1_queuing_configuration_local_var->queue_length_limit = queue_length_limit;
    io_k8s_api_flowcontrol_v1beta1_queuing_configuration_local_var->queues = queues;

    return io_k8s_api_flowcontrol_v1beta1_queuing_configuration_local_var;
}


void io_k8s_api_flowcontrol_v1beta1_queuing_configuration_free(io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t *io_k8s_api_flowcontrol_v1beta1_queuing_configuration) {
    if(NULL == io_k8s_api_flowcontrol_v1beta1_queuing_configuration){
        return ;
    }
    listEntry_t *listEntry;
    free(io_k8s_api_flowcontrol_v1beta1_queuing_configuration);
}

cJSON *io_k8s_api_flowcontrol_v1beta1_queuing_configuration_convertToJSON(io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t *io_k8s_api_flowcontrol_v1beta1_queuing_configuration) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_flowcontrol_v1beta1_queuing_configuration->hand_size
    if(io_k8s_api_flowcontrol_v1beta1_queuing_configuration->hand_size) { 
    if(cJSON_AddNumberToObject(item, "handSize", io_k8s_api_flowcontrol_v1beta1_queuing_configuration->hand_size) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_flowcontrol_v1beta1_queuing_configuration->queue_length_limit
    if(io_k8s_api_flowcontrol_v1beta1_queuing_configuration->queue_length_limit) { 
    if(cJSON_AddNumberToObject(item, "queueLengthLimit", io_k8s_api_flowcontrol_v1beta1_queuing_configuration->queue_length_limit) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_flowcontrol_v1beta1_queuing_configuration->queues
    if(io_k8s_api_flowcontrol_v1beta1_queuing_configuration->queues) { 
    if(cJSON_AddNumberToObject(item, "queues", io_k8s_api_flowcontrol_v1beta1_queuing_configuration->queues) == NULL) {
    goto fail; //Numeric
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t *io_k8s_api_flowcontrol_v1beta1_queuing_configuration_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_queuing_configurationJSON){

    io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t *io_k8s_api_flowcontrol_v1beta1_queuing_configuration_local_var = NULL;

    // io_k8s_api_flowcontrol_v1beta1_queuing_configuration->hand_size
    cJSON *hand_size = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_queuing_configurationJSON, "handSize");
    if (hand_size) { 
    if(!cJSON_IsNumber(hand_size))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_flowcontrol_v1beta1_queuing_configuration->queue_length_limit
    cJSON *queue_length_limit = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_queuing_configurationJSON, "queueLengthLimit");
    if (queue_length_limit) { 
    if(!cJSON_IsNumber(queue_length_limit))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_flowcontrol_v1beta1_queuing_configuration->queues
    cJSON *queues = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_queuing_configurationJSON, "queues");
    if (queues) { 
    if(!cJSON_IsNumber(queues))
    {
    goto end; //Numeric
    }
    }


    io_k8s_api_flowcontrol_v1beta1_queuing_configuration_local_var = io_k8s_api_flowcontrol_v1beta1_queuing_configuration_create (
        hand_size ? hand_size->valuedouble : 0,
        queue_length_limit ? queue_length_limit->valuedouble : 0,
        queues ? queues->valuedouble : 0
        );

    return io_k8s_api_flowcontrol_v1beta1_queuing_configuration_local_var;
end:
    return NULL;

}
