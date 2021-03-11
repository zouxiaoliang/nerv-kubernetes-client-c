/*
 * io_k8s_api_flowcontrol_v1beta1_flow_schema_status.h
 *
 * FlowSchemaStatus represents the current state of a FlowSchema.
 */

#ifndef _io_k8s_api_flowcontrol_v1beta1_flow_schema_status_H_
#define _io_k8s_api_flowcontrol_v1beta1_flow_schema_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_flowcontrol_v1beta1_flow_schema_status_t io_k8s_api_flowcontrol_v1beta1_flow_schema_status_t;

#include "io_k8s_api_flowcontrol_v1beta1_flow_schema_condition.h"



typedef struct io_k8s_api_flowcontrol_v1beta1_flow_schema_status_t {
    list_t *conditions; //nonprimitive container

} io_k8s_api_flowcontrol_v1beta1_flow_schema_status_t;

io_k8s_api_flowcontrol_v1beta1_flow_schema_status_t *io_k8s_api_flowcontrol_v1beta1_flow_schema_status_create(
    list_t *conditions
);

void io_k8s_api_flowcontrol_v1beta1_flow_schema_status_free(io_k8s_api_flowcontrol_v1beta1_flow_schema_status_t *io_k8s_api_flowcontrol_v1beta1_flow_schema_status);

io_k8s_api_flowcontrol_v1beta1_flow_schema_status_t *io_k8s_api_flowcontrol_v1beta1_flow_schema_status_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_flow_schema_statusJSON);

cJSON *io_k8s_api_flowcontrol_v1beta1_flow_schema_status_convertToJSON(io_k8s_api_flowcontrol_v1beta1_flow_schema_status_t *io_k8s_api_flowcontrol_v1beta1_flow_schema_status);

#endif /* _io_k8s_api_flowcontrol_v1beta1_flow_schema_status_H_ */

