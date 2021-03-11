/*
 * io_k8s_api_core_v1_toleration.h
 *
 * The pod this Toleration is attached to tolerates any taint that matches the triple &lt;key,value,effect&gt; using the matching operator &lt;operator&gt;.
 */

#ifndef _io_k8s_api_core_v1_toleration_H_
#define _io_k8s_api_core_v1_toleration_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_toleration_t io_k8s_api_core_v1_toleration_t;




typedef struct io_k8s_api_core_v1_toleration_t {
    char *effect; // string
    char *key; // string
    char *_operator; // string
    long toleration_seconds; //numeric
    char *value; // string

} io_k8s_api_core_v1_toleration_t;

io_k8s_api_core_v1_toleration_t *io_k8s_api_core_v1_toleration_create(
    char *effect,
    char *key,
    char *_operator,
    long toleration_seconds,
    char *value
);

void io_k8s_api_core_v1_toleration_free(io_k8s_api_core_v1_toleration_t *io_k8s_api_core_v1_toleration);

io_k8s_api_core_v1_toleration_t *io_k8s_api_core_v1_toleration_parseFromJSON(cJSON *io_k8s_api_core_v1_tolerationJSON);

cJSON *io_k8s_api_core_v1_toleration_convertToJSON(io_k8s_api_core_v1_toleration_t *io_k8s_api_core_v1_toleration);

#endif /* _io_k8s_api_core_v1_toleration_H_ */

