/*
 * io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference.h
 *
 * PriorityLevelConfigurationReference contains information that points to the \&quot;request-priority\&quot; being used.
 */

#ifndef _io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_H_
#define _io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t;




typedef struct io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t {
    char *name; // string

} io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t;

io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_create(
    char *name
);

void io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_free(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference);

io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_referenceJSON);

cJSON *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_convertToJSON(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference);

#endif /* _io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_H_ */

