/*
 * io_k8s_api_core_v1_limit_range_spec.h
 *
 * LimitRangeSpec defines a min/max usage limit for resources that match on kind.
 */

#ifndef _io_k8s_api_core_v1_limit_range_spec_H_
#define _io_k8s_api_core_v1_limit_range_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_limit_range_spec_t io_k8s_api_core_v1_limit_range_spec_t;

#include "io_k8s_api_core_v1_limit_range_item.h"



typedef struct io_k8s_api_core_v1_limit_range_spec_t {
    list_t *limits; //nonprimitive container

} io_k8s_api_core_v1_limit_range_spec_t;

io_k8s_api_core_v1_limit_range_spec_t *io_k8s_api_core_v1_limit_range_spec_create(
    list_t *limits
);

void io_k8s_api_core_v1_limit_range_spec_free(io_k8s_api_core_v1_limit_range_spec_t *io_k8s_api_core_v1_limit_range_spec);

io_k8s_api_core_v1_limit_range_spec_t *io_k8s_api_core_v1_limit_range_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_limit_range_specJSON);

cJSON *io_k8s_api_core_v1_limit_range_spec_convertToJSON(io_k8s_api_core_v1_limit_range_spec_t *io_k8s_api_core_v1_limit_range_spec);

#endif /* _io_k8s_api_core_v1_limit_range_spec_H_ */

