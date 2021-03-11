/*
 * io_k8s_api_flowcontrol_v1beta1_flow_schema_spec.h
 *
 * FlowSchemaSpec describes how the FlowSchema&#39;s specification looks like.
 */

#ifndef _io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_H_
#define _io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_t io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_t;

#include "io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method.h"
#include "io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects.h"
#include "io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference.h"



typedef struct io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_t {
    struct io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t *distinguisher_method; //model
    int matching_precedence; //numeric
    struct io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t *priority_level_configuration; //model
    list_t *rules; //nonprimitive container

} io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_t;

io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_t *io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_create(
    io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t *distinguisher_method,
    int matching_precedence,
    io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t *priority_level_configuration,
    list_t *rules
);

void io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_free(io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_t *io_k8s_api_flowcontrol_v1beta1_flow_schema_spec);

io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_t *io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_flow_schema_specJSON);

cJSON *io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_convertToJSON(io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_t *io_k8s_api_flowcontrol_v1beta1_flow_schema_spec);

#endif /* _io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_H_ */

