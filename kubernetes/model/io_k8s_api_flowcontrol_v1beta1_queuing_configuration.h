/*
 * io_k8s_api_flowcontrol_v1beta1_queuing_configuration.h
 *
 * QueuingConfiguration holds the configuration parameters for queuing
 */

#ifndef _io_k8s_api_flowcontrol_v1beta1_queuing_configuration_H_
#define _io_k8s_api_flowcontrol_v1beta1_queuing_configuration_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t;




typedef struct io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t {
    int hand_size; //numeric
    int queue_length_limit; //numeric
    int queues; //numeric

} io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t;

io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t *io_k8s_api_flowcontrol_v1beta1_queuing_configuration_create(
    int hand_size,
    int queue_length_limit,
    int queues
);

void io_k8s_api_flowcontrol_v1beta1_queuing_configuration_free(io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t *io_k8s_api_flowcontrol_v1beta1_queuing_configuration);

io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t *io_k8s_api_flowcontrol_v1beta1_queuing_configuration_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_queuing_configurationJSON);

cJSON *io_k8s_api_flowcontrol_v1beta1_queuing_configuration_convertToJSON(io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t *io_k8s_api_flowcontrol_v1beta1_queuing_configuration);

#endif /* _io_k8s_api_flowcontrol_v1beta1_queuing_configuration_H_ */

