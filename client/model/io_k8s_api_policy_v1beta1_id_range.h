/*
 * io_k8s_api_policy_v1beta1_id_range.h
 *
 * IDRange provides a min/max of an allowed range of IDs.
 */

#ifndef _io_k8s_api_policy_v1beta1_id_range_H_
#define _io_k8s_api_policy_v1beta1_id_range_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_policy_v1beta1_id_range_t io_k8s_api_policy_v1beta1_id_range_t;




typedef struct io_k8s_api_policy_v1beta1_id_range_t {
    long max; //numeric
    long min; //numeric

} io_k8s_api_policy_v1beta1_id_range_t;

io_k8s_api_policy_v1beta1_id_range_t *io_k8s_api_policy_v1beta1_id_range_create(
    long max,
    long min
);

void io_k8s_api_policy_v1beta1_id_range_free(io_k8s_api_policy_v1beta1_id_range_t *io_k8s_api_policy_v1beta1_id_range);

io_k8s_api_policy_v1beta1_id_range_t *io_k8s_api_policy_v1beta1_id_range_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_id_rangeJSON);

cJSON *io_k8s_api_policy_v1beta1_id_range_convertToJSON(io_k8s_api_policy_v1beta1_id_range_t *io_k8s_api_policy_v1beta1_id_range);

#endif /* _io_k8s_api_policy_v1beta1_id_range_H_ */

