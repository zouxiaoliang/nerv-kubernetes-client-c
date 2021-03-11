/*
 * io_k8s_api_core_v1_limit_range_item.h
 *
 * LimitRangeItem defines a min/max usage limit for any resource that matches on kind.
 */

#ifndef _io_k8s_api_core_v1_limit_range_item_H_
#define _io_k8s_api_core_v1_limit_range_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_limit_range_item_t io_k8s_api_core_v1_limit_range_item_t;




typedef struct io_k8s_api_core_v1_limit_range_item_t {
    list_t* _default; //map
    list_t* default_request; //map
    list_t* max; //map
    list_t* max_limit_request_ratio; //map
    list_t* min; //map
    char *type; // string

} io_k8s_api_core_v1_limit_range_item_t;

io_k8s_api_core_v1_limit_range_item_t *io_k8s_api_core_v1_limit_range_item_create(
    list_t* _default,
    list_t* default_request,
    list_t* max,
    list_t* max_limit_request_ratio,
    list_t* min,
    char *type
);

void io_k8s_api_core_v1_limit_range_item_free(io_k8s_api_core_v1_limit_range_item_t *io_k8s_api_core_v1_limit_range_item);

io_k8s_api_core_v1_limit_range_item_t *io_k8s_api_core_v1_limit_range_item_parseFromJSON(cJSON *io_k8s_api_core_v1_limit_range_itemJSON);

cJSON *io_k8s_api_core_v1_limit_range_item_convertToJSON(io_k8s_api_core_v1_limit_range_item_t *io_k8s_api_core_v1_limit_range_item);

#endif /* _io_k8s_api_core_v1_limit_range_item_H_ */

