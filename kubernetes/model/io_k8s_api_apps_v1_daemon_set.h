/*
 * io_k8s_api_apps_v1_daemon_set.h
 *
 * DaemonSet represents the configuration of a daemon set.
 */

#ifndef _io_k8s_api_apps_v1_daemon_set_H_
#define _io_k8s_api_apps_v1_daemon_set_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_apps_v1_daemon_set_t io_k8s_api_apps_v1_daemon_set_t;

#include "io_k8s_api_apps_v1_daemon_set_spec.h"
#include "io_k8s_api_apps_v1_daemon_set_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_apps_v1_daemon_set_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_apps_v1_daemon_set_spec_t *spec; //model
    struct io_k8s_api_apps_v1_daemon_set_status_t *status; //model

} io_k8s_api_apps_v1_daemon_set_t;

io_k8s_api_apps_v1_daemon_set_t *io_k8s_api_apps_v1_daemon_set_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_apps_v1_daemon_set_spec_t *spec,
    io_k8s_api_apps_v1_daemon_set_status_t *status
);

void io_k8s_api_apps_v1_daemon_set_free(io_k8s_api_apps_v1_daemon_set_t *io_k8s_api_apps_v1_daemon_set);

io_k8s_api_apps_v1_daemon_set_t *io_k8s_api_apps_v1_daemon_set_parseFromJSON(cJSON *io_k8s_api_apps_v1_daemon_setJSON);

cJSON *io_k8s_api_apps_v1_daemon_set_convertToJSON(io_k8s_api_apps_v1_daemon_set_t *io_k8s_api_apps_v1_daemon_set);

#endif /* _io_k8s_api_apps_v1_daemon_set_H_ */

