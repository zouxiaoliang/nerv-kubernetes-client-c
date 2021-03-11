/*
 * io_k8s_api_apps_v1_rolling_update_stateful_set_strategy.h
 *
 * RollingUpdateStatefulSetStrategy is used to communicate parameter for RollingUpdateStatefulSetStrategyType.
 */

#ifndef _io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_H_
#define _io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t;




typedef struct io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t {
    int partition; //numeric

} io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t;

io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t *io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_create(
    int partition
);

void io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_free(io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t *io_k8s_api_apps_v1_rolling_update_stateful_set_strategy);

io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t *io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_parseFromJSON(cJSON *io_k8s_api_apps_v1_rolling_update_stateful_set_strategyJSON);

cJSON *io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_convertToJSON(io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t *io_k8s_api_apps_v1_rolling_update_stateful_set_strategy);

#endif /* _io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_H_ */

