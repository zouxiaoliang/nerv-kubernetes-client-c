/*
 * io_k8s_api_core_v1_taint.h
 *
 * The node this Taint is attached to has the \&quot;effect\&quot; on any pod that does not tolerate the Taint.
 */

#ifndef _io_k8s_api_core_v1_taint_H_
#define _io_k8s_api_core_v1_taint_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_taint_t io_k8s_api_core_v1_taint_t;




typedef struct io_k8s_api_core_v1_taint_t {
    char *effect; // string
    char *key; // string
    char *time_added; //date time
    char *value; // string

} io_k8s_api_core_v1_taint_t;

io_k8s_api_core_v1_taint_t *io_k8s_api_core_v1_taint_create(
    char *effect,
    char *key,
    char *time_added,
    char *value
);

void io_k8s_api_core_v1_taint_free(io_k8s_api_core_v1_taint_t *io_k8s_api_core_v1_taint);

io_k8s_api_core_v1_taint_t *io_k8s_api_core_v1_taint_parseFromJSON(cJSON *io_k8s_api_core_v1_taintJSON);

cJSON *io_k8s_api_core_v1_taint_convertToJSON(io_k8s_api_core_v1_taint_t *io_k8s_api_core_v1_taint);

#endif /* _io_k8s_api_core_v1_taint_H_ */

