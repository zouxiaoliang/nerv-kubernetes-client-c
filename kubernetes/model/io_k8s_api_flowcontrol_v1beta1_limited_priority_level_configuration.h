/*
 * io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration.h
 *
 * LimitedPriorityLevelConfiguration specifies how to handle requests that are subject to limits. It addresses two issues:  * How are requests for this priority level limited?  * What should be done with requests that exceed the limit?
 */

#ifndef _io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_H_
#define _io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_t io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_t;

#include "io_k8s_api_flowcontrol_v1beta1_limit_response.h"



typedef struct io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_t {
    int assured_concurrency_shares; //numeric
    struct io_k8s_api_flowcontrol_v1beta1_limit_response_t *limit_response; //model

} io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_t;

io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_t *io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_create(
    int assured_concurrency_shares,
    io_k8s_api_flowcontrol_v1beta1_limit_response_t *limit_response
);

void io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_free(io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_t *io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration);

io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_t *io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configurationJSON);

cJSON *io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_convertToJSON(io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_t *io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration);

#endif /* _io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_H_ */

