/*
 * io_k8s_api_coordination_v1_lease_spec.h
 *
 * LeaseSpec is a specification of a Lease.
 */

#ifndef _io_k8s_api_coordination_v1_lease_spec_H_
#define _io_k8s_api_coordination_v1_lease_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_coordination_v1_lease_spec_t io_k8s_api_coordination_v1_lease_spec_t;




typedef struct io_k8s_api_coordination_v1_lease_spec_t {
    char *acquire_time; //date time
    char *holder_identity; // string
    int lease_duration_seconds; //numeric
    int lease_transitions; //numeric
    char *renew_time; //date time

} io_k8s_api_coordination_v1_lease_spec_t;

io_k8s_api_coordination_v1_lease_spec_t *io_k8s_api_coordination_v1_lease_spec_create(
    char *acquire_time,
    char *holder_identity,
    int lease_duration_seconds,
    int lease_transitions,
    char *renew_time
);

void io_k8s_api_coordination_v1_lease_spec_free(io_k8s_api_coordination_v1_lease_spec_t *io_k8s_api_coordination_v1_lease_spec);

io_k8s_api_coordination_v1_lease_spec_t *io_k8s_api_coordination_v1_lease_spec_parseFromJSON(cJSON *io_k8s_api_coordination_v1_lease_specJSON);

cJSON *io_k8s_api_coordination_v1_lease_spec_convertToJSON(io_k8s_api_coordination_v1_lease_spec_t *io_k8s_api_coordination_v1_lease_spec);

#endif /* _io_k8s_api_coordination_v1_lease_spec_H_ */

