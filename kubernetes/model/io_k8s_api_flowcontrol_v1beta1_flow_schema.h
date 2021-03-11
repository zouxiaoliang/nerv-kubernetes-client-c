/*
 * io_k8s_api_flowcontrol_v1beta1_flow_schema.h
 *
 * FlowSchema defines the schema of a group of flows. Note that a flow is made up of a set of inbound API requests with similar attributes and is identified by a pair of strings: the name of the FlowSchema and a \&quot;flow distinguisher\&quot;.
 */

#ifndef _io_k8s_api_flowcontrol_v1beta1_flow_schema_H_
#define _io_k8s_api_flowcontrol_v1beta1_flow_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_flowcontrol_v1beta1_flow_schema_t io_k8s_api_flowcontrol_v1beta1_flow_schema_t;

#include "io_k8s_api_flowcontrol_v1beta1_flow_schema_spec.h"
#include "io_k8s_api_flowcontrol_v1beta1_flow_schema_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_flowcontrol_v1beta1_flow_schema_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_t *spec; //model
    struct io_k8s_api_flowcontrol_v1beta1_flow_schema_status_t *status; //model

} io_k8s_api_flowcontrol_v1beta1_flow_schema_t;

io_k8s_api_flowcontrol_v1beta1_flow_schema_t *io_k8s_api_flowcontrol_v1beta1_flow_schema_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_t *spec,
    io_k8s_api_flowcontrol_v1beta1_flow_schema_status_t *status
);

void io_k8s_api_flowcontrol_v1beta1_flow_schema_free(io_k8s_api_flowcontrol_v1beta1_flow_schema_t *io_k8s_api_flowcontrol_v1beta1_flow_schema);

io_k8s_api_flowcontrol_v1beta1_flow_schema_t *io_k8s_api_flowcontrol_v1beta1_flow_schema_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_flow_schemaJSON);

cJSON *io_k8s_api_flowcontrol_v1beta1_flow_schema_convertToJSON(io_k8s_api_flowcontrol_v1beta1_flow_schema_t *io_k8s_api_flowcontrol_v1beta1_flow_schema);

#endif /* _io_k8s_api_flowcontrol_v1beta1_flow_schema_H_ */

