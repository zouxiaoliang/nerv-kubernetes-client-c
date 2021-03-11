/*
 * io_k8s_api_apps_v1_deployment.h
 *
 * Deployment enables declarative updates for Pods and ReplicaSets.
 */

#ifndef _io_k8s_api_apps_v1_deployment_H_
#define _io_k8s_api_apps_v1_deployment_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_apps_v1_deployment_t io_k8s_api_apps_v1_deployment_t;

#include "io_k8s_api_apps_v1_deployment_spec.h"
#include "io_k8s_api_apps_v1_deployment_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_apps_v1_deployment_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_apps_v1_deployment_spec_t *spec; //model
    struct io_k8s_api_apps_v1_deployment_status_t *status; //model

} io_k8s_api_apps_v1_deployment_t;

io_k8s_api_apps_v1_deployment_t *io_k8s_api_apps_v1_deployment_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_apps_v1_deployment_spec_t *spec,
    io_k8s_api_apps_v1_deployment_status_t *status
);

void io_k8s_api_apps_v1_deployment_free(io_k8s_api_apps_v1_deployment_t *io_k8s_api_apps_v1_deployment);

io_k8s_api_apps_v1_deployment_t *io_k8s_api_apps_v1_deployment_parseFromJSON(cJSON *io_k8s_api_apps_v1_deploymentJSON);

cJSON *io_k8s_api_apps_v1_deployment_convertToJSON(io_k8s_api_apps_v1_deployment_t *io_k8s_api_apps_v1_deployment);

#endif /* _io_k8s_api_apps_v1_deployment_H_ */

