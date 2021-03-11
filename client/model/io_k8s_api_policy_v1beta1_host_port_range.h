/*
 * io_k8s_api_policy_v1beta1_host_port_range.h
 *
 * HostPortRange defines a range of host ports that will be enabled by a policy for pods to use.  It requires both the start and end to be defined.
 */

#ifndef _io_k8s_api_policy_v1beta1_host_port_range_H_
#define _io_k8s_api_policy_v1beta1_host_port_range_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_policy_v1beta1_host_port_range_t io_k8s_api_policy_v1beta1_host_port_range_t;




typedef struct io_k8s_api_policy_v1beta1_host_port_range_t {
    int max; //numeric
    int min; //numeric

} io_k8s_api_policy_v1beta1_host_port_range_t;

io_k8s_api_policy_v1beta1_host_port_range_t *io_k8s_api_policy_v1beta1_host_port_range_create(
    int max,
    int min
);

void io_k8s_api_policy_v1beta1_host_port_range_free(io_k8s_api_policy_v1beta1_host_port_range_t *io_k8s_api_policy_v1beta1_host_port_range);

io_k8s_api_policy_v1beta1_host_port_range_t *io_k8s_api_policy_v1beta1_host_port_range_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_host_port_rangeJSON);

cJSON *io_k8s_api_policy_v1beta1_host_port_range_convertToJSON(io_k8s_api_policy_v1beta1_host_port_range_t *io_k8s_api_policy_v1beta1_host_port_range);

#endif /* _io_k8s_api_policy_v1beta1_host_port_range_H_ */

