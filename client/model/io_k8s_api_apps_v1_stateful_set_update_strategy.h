/*
 * io_k8s_api_apps_v1_stateful_set_update_strategy.h
 *
 * StatefulSetUpdateStrategy indicates the strategy that the StatefulSet controller will use to perform updates. It includes any additional parameters necessary to perform the update for the indicated strategy.
 */

#ifndef _io_k8s_api_apps_v1_stateful_set_update_strategy_H_
#define _io_k8s_api_apps_v1_stateful_set_update_strategy_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_apps_v1_stateful_set_update_strategy_t io_k8s_api_apps_v1_stateful_set_update_strategy_t;

#include "io_k8s_api_apps_v1_rolling_update_stateful_set_strategy.h"



typedef struct io_k8s_api_apps_v1_stateful_set_update_strategy_t {
    struct io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t *rolling_update; //model
    char *type; // string

} io_k8s_api_apps_v1_stateful_set_update_strategy_t;

io_k8s_api_apps_v1_stateful_set_update_strategy_t *io_k8s_api_apps_v1_stateful_set_update_strategy_create(
    io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t *rolling_update,
    char *type
);

void io_k8s_api_apps_v1_stateful_set_update_strategy_free(io_k8s_api_apps_v1_stateful_set_update_strategy_t *io_k8s_api_apps_v1_stateful_set_update_strategy);

io_k8s_api_apps_v1_stateful_set_update_strategy_t *io_k8s_api_apps_v1_stateful_set_update_strategy_parseFromJSON(cJSON *io_k8s_api_apps_v1_stateful_set_update_strategyJSON);

cJSON *io_k8s_api_apps_v1_stateful_set_update_strategy_convertToJSON(io_k8s_api_apps_v1_stateful_set_update_strategy_t *io_k8s_api_apps_v1_stateful_set_update_strategy);

#endif /* _io_k8s_api_apps_v1_stateful_set_update_strategy_H_ */

