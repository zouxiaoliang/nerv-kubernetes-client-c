/*
 * io_k8s_api_apps_v1_deployment_strategy.h
 *
 * DeploymentStrategy describes how to replace existing pods with new ones.
 */

#ifndef _io_k8s_api_apps_v1_deployment_strategy_H_
#define _io_k8s_api_apps_v1_deployment_strategy_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_apps_v1_deployment_strategy_t io_k8s_api_apps_v1_deployment_strategy_t;

#include "io_k8s_api_apps_v1_rolling_update_deployment.h"



typedef struct io_k8s_api_apps_v1_deployment_strategy_t {
    struct io_k8s_api_apps_v1_rolling_update_deployment_t *rolling_update; //model
    char *type; // string

} io_k8s_api_apps_v1_deployment_strategy_t;

io_k8s_api_apps_v1_deployment_strategy_t *io_k8s_api_apps_v1_deployment_strategy_create(
    io_k8s_api_apps_v1_rolling_update_deployment_t *rolling_update,
    char *type
);

void io_k8s_api_apps_v1_deployment_strategy_free(io_k8s_api_apps_v1_deployment_strategy_t *io_k8s_api_apps_v1_deployment_strategy);

io_k8s_api_apps_v1_deployment_strategy_t *io_k8s_api_apps_v1_deployment_strategy_parseFromJSON(cJSON *io_k8s_api_apps_v1_deployment_strategyJSON);

cJSON *io_k8s_api_apps_v1_deployment_strategy_convertToJSON(io_k8s_api_apps_v1_deployment_strategy_t *io_k8s_api_apps_v1_deployment_strategy);

#endif /* _io_k8s_api_apps_v1_deployment_strategy_H_ */

