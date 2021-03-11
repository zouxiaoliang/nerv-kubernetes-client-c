/*
 * io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status.h
 *
 * PriorityLevelConfigurationStatus represents the current state of a \&quot;request-priority\&quot;.
 */

#ifndef _io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_H_
#define _io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_t io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_t;

#include "io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_condition.h"



typedef struct io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_t {
    list_t *conditions; //nonprimitive container

} io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_t;

io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_create(
    list_t *conditions
);

void io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_free(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status);

io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_statusJSON);

cJSON *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_convertToJSON(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status);

#endif /* _io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_H_ */
