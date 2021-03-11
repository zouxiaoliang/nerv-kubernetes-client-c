/*
 * io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method.h
 *
 * FlowDistinguisherMethod specifies the method of a flow distinguisher.
 */

#ifndef _io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_H_
#define _io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t;




typedef struct io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t {
    char *type; // string

} io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t;

io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t *io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_create(
    char *type
);

void io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_free(io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t *io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method);

io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t *io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_methodJSON);

cJSON *io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_convertToJSON(io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t *io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method);

#endif /* _io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_H_ */

