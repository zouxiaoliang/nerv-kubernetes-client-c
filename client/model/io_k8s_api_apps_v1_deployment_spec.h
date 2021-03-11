/*
 * io_k8s_api_apps_v1_deployment_spec.h
 *
 * DeploymentSpec is the specification of the desired behavior of the Deployment.
 */

#ifndef _io_k8s_api_apps_v1_deployment_spec_H_
#define _io_k8s_api_apps_v1_deployment_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_apps_v1_deployment_spec_t io_k8s_api_apps_v1_deployment_spec_t;

#include "io_k8s_api_apps_v1_deployment_strategy.h"
#include "io_k8s_api_core_v1_pod_template_spec.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.h"



typedef struct io_k8s_api_apps_v1_deployment_spec_t {
    int min_ready_seconds; //numeric
    int paused; //boolean
    int progress_deadline_seconds; //numeric
    int replicas; //numeric
    int revision_history_limit; //numeric
    struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector; //model
    struct io_k8s_api_apps_v1_deployment_strategy_t *strategy; //model
    struct io_k8s_api_core_v1_pod_template_spec_t *_template; //model

} io_k8s_api_apps_v1_deployment_spec_t;

io_k8s_api_apps_v1_deployment_spec_t *io_k8s_api_apps_v1_deployment_spec_create(
    int min_ready_seconds,
    int paused,
    int progress_deadline_seconds,
    int replicas,
    int revision_history_limit,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector,
    io_k8s_api_apps_v1_deployment_strategy_t *strategy,
    io_k8s_api_core_v1_pod_template_spec_t *_template
);

void io_k8s_api_apps_v1_deployment_spec_free(io_k8s_api_apps_v1_deployment_spec_t *io_k8s_api_apps_v1_deployment_spec);

io_k8s_api_apps_v1_deployment_spec_t *io_k8s_api_apps_v1_deployment_spec_parseFromJSON(cJSON *io_k8s_api_apps_v1_deployment_specJSON);

cJSON *io_k8s_api_apps_v1_deployment_spec_convertToJSON(io_k8s_api_apps_v1_deployment_spec_t *io_k8s_api_apps_v1_deployment_spec);

#endif /* _io_k8s_api_apps_v1_deployment_spec_H_ */

