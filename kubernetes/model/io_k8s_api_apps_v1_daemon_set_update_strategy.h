/*
 * io_k8s_api_apps_v1_daemon_set_update_strategy.h
 *
 * DaemonSetUpdateStrategy is a struct used to control the update strategy for a DaemonSet.
 */

#ifndef _io_k8s_api_apps_v1_daemon_set_update_strategy_H_
#define _io_k8s_api_apps_v1_daemon_set_update_strategy_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_apps_v1_daemon_set_update_strategy_t io_k8s_api_apps_v1_daemon_set_update_strategy_t;

#include "io_k8s_api_apps_v1_rolling_update_daemon_set.h"



typedef struct io_k8s_api_apps_v1_daemon_set_update_strategy_t {
    struct io_k8s_api_apps_v1_rolling_update_daemon_set_t *rolling_update; //model
    char *type; // string

} io_k8s_api_apps_v1_daemon_set_update_strategy_t;

io_k8s_api_apps_v1_daemon_set_update_strategy_t *io_k8s_api_apps_v1_daemon_set_update_strategy_create(
    io_k8s_api_apps_v1_rolling_update_daemon_set_t *rolling_update,
    char *type
);

void io_k8s_api_apps_v1_daemon_set_update_strategy_free(io_k8s_api_apps_v1_daemon_set_update_strategy_t *io_k8s_api_apps_v1_daemon_set_update_strategy);

io_k8s_api_apps_v1_daemon_set_update_strategy_t *io_k8s_api_apps_v1_daemon_set_update_strategy_parseFromJSON(cJSON *io_k8s_api_apps_v1_daemon_set_update_strategyJSON);

cJSON *io_k8s_api_apps_v1_daemon_set_update_strategy_convertToJSON(io_k8s_api_apps_v1_daemon_set_update_strategy_t *io_k8s_api_apps_v1_daemon_set_update_strategy);

#endif /* _io_k8s_api_apps_v1_daemon_set_update_strategy_H_ */

