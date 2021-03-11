/*
 * io_k8s_api_flowcontrol_v1beta1_limit_response.h
 *
 * LimitResponse defines how to handle requests that can not be executed right now.
 */

#ifndef _io_k8s_api_flowcontrol_v1beta1_limit_response_H_
#define _io_k8s_api_flowcontrol_v1beta1_limit_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_flowcontrol_v1beta1_limit_response_t io_k8s_api_flowcontrol_v1beta1_limit_response_t;

#include "io_k8s_api_flowcontrol_v1beta1_queuing_configuration.h"



typedef struct io_k8s_api_flowcontrol_v1beta1_limit_response_t {
    struct io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t *queuing; //model
    char *type; // string

} io_k8s_api_flowcontrol_v1beta1_limit_response_t;

io_k8s_api_flowcontrol_v1beta1_limit_response_t *io_k8s_api_flowcontrol_v1beta1_limit_response_create(
    io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t *queuing,
    char *type
);

void io_k8s_api_flowcontrol_v1beta1_limit_response_free(io_k8s_api_flowcontrol_v1beta1_limit_response_t *io_k8s_api_flowcontrol_v1beta1_limit_response);

io_k8s_api_flowcontrol_v1beta1_limit_response_t *io_k8s_api_flowcontrol_v1beta1_limit_response_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_limit_responseJSON);

cJSON *io_k8s_api_flowcontrol_v1beta1_limit_response_convertToJSON(io_k8s_api_flowcontrol_v1beta1_limit_response_t *io_k8s_api_flowcontrol_v1beta1_limit_response);

#endif /* _io_k8s_api_flowcontrol_v1beta1_limit_response_H_ */

