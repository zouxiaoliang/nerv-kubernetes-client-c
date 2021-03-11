/*
 * io_k8s_api_apps_v1_rolling_update_deployment.h
 *
 * Spec to control the desired behavior of rolling update.
 */

#ifndef _io_k8s_api_apps_v1_rolling_update_deployment_H_
#define _io_k8s_api_apps_v1_rolling_update_deployment_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_apps_v1_rolling_update_deployment_t io_k8s_api_apps_v1_rolling_update_deployment_t;




typedef struct io_k8s_api_apps_v1_rolling_update_deployment_t {
    char *max_surge; // string
    char *max_unavailable; // string

} io_k8s_api_apps_v1_rolling_update_deployment_t;

io_k8s_api_apps_v1_rolling_update_deployment_t *io_k8s_api_apps_v1_rolling_update_deployment_create(
    char *max_surge,
    char *max_unavailable
);

void io_k8s_api_apps_v1_rolling_update_deployment_free(io_k8s_api_apps_v1_rolling_update_deployment_t *io_k8s_api_apps_v1_rolling_update_deployment);

io_k8s_api_apps_v1_rolling_update_deployment_t *io_k8s_api_apps_v1_rolling_update_deployment_parseFromJSON(cJSON *io_k8s_api_apps_v1_rolling_update_deploymentJSON);

cJSON *io_k8s_api_apps_v1_rolling_update_deployment_convertToJSON(io_k8s_api_apps_v1_rolling_update_deployment_t *io_k8s_api_apps_v1_rolling_update_deployment);

#endif /* _io_k8s_api_apps_v1_rolling_update_deployment_H_ */

