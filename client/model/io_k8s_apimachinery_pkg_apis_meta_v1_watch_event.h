/*
 * io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h
 *
 * Event represents a single event to a watched resource.
 */

#ifndef _io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_H_
#define _io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t;

#include "object.h"



typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t {
    object_t *object; //object
    char *type; // string

} io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t;

io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t *io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_create(
    object_t *object,
    char *type
);

void io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_free(io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t *io_k8s_apimachinery_pkg_apis_meta_v1_watch_event);

io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t *io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_watch_eventJSON);

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t *io_k8s_apimachinery_pkg_apis_meta_v1_watch_event);

#endif /* _io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_H_ */

