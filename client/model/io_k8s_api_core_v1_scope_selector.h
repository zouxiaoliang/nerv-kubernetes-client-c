/*
 * io_k8s_api_core_v1_scope_selector.h
 *
 * A scope selector represents the AND of the selectors represented by the scoped-resource selector requirements.
 */

#ifndef _io_k8s_api_core_v1_scope_selector_H_
#define _io_k8s_api_core_v1_scope_selector_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_scope_selector_t io_k8s_api_core_v1_scope_selector_t;

#include "io_k8s_api_core_v1_scoped_resource_selector_requirement.h"



typedef struct io_k8s_api_core_v1_scope_selector_t {
    list_t *match_expressions; //nonprimitive container

} io_k8s_api_core_v1_scope_selector_t;

io_k8s_api_core_v1_scope_selector_t *io_k8s_api_core_v1_scope_selector_create(
    list_t *match_expressions
);

void io_k8s_api_core_v1_scope_selector_free(io_k8s_api_core_v1_scope_selector_t *io_k8s_api_core_v1_scope_selector);

io_k8s_api_core_v1_scope_selector_t *io_k8s_api_core_v1_scope_selector_parseFromJSON(cJSON *io_k8s_api_core_v1_scope_selectorJSON);

cJSON *io_k8s_api_core_v1_scope_selector_convertToJSON(io_k8s_api_core_v1_scope_selector_t *io_k8s_api_core_v1_scope_selector);

#endif /* _io_k8s_api_core_v1_scope_selector_H_ */

