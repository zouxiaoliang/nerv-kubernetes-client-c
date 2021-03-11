/*
 * io_k8s_api_core_v1_event_source.h
 *
 * EventSource contains information for an event.
 */

#ifndef _io_k8s_api_core_v1_event_source_H_
#define _io_k8s_api_core_v1_event_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_event_source_t io_k8s_api_core_v1_event_source_t;




typedef struct io_k8s_api_core_v1_event_source_t {
    char *component; // string
    char *host; // string

} io_k8s_api_core_v1_event_source_t;

io_k8s_api_core_v1_event_source_t *io_k8s_api_core_v1_event_source_create(
    char *component,
    char *host
);

void io_k8s_api_core_v1_event_source_free(io_k8s_api_core_v1_event_source_t *io_k8s_api_core_v1_event_source);

io_k8s_api_core_v1_event_source_t *io_k8s_api_core_v1_event_source_parseFromJSON(cJSON *io_k8s_api_core_v1_event_sourceJSON);

cJSON *io_k8s_api_core_v1_event_source_convertToJSON(io_k8s_api_core_v1_event_source_t *io_k8s_api_core_v1_event_source);

#endif /* _io_k8s_api_core_v1_event_source_H_ */

