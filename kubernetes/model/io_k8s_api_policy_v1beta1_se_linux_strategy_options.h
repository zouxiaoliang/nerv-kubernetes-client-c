/*
 * io_k8s_api_policy_v1beta1_se_linux_strategy_options.h
 *
 * SELinuxStrategyOptions defines the strategy type and any options used to create the strategy.
 */

#ifndef _io_k8s_api_policy_v1beta1_se_linux_strategy_options_H_
#define _io_k8s_api_policy_v1beta1_se_linux_strategy_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_policy_v1beta1_se_linux_strategy_options_t io_k8s_api_policy_v1beta1_se_linux_strategy_options_t;

#include "io_k8s_api_core_v1_se_linux_options.h"



typedef struct io_k8s_api_policy_v1beta1_se_linux_strategy_options_t {
    char *rule; // string
    struct io_k8s_api_core_v1_se_linux_options_t *se_linux_options; //model

} io_k8s_api_policy_v1beta1_se_linux_strategy_options_t;

io_k8s_api_policy_v1beta1_se_linux_strategy_options_t *io_k8s_api_policy_v1beta1_se_linux_strategy_options_create(
    char *rule,
    io_k8s_api_core_v1_se_linux_options_t *se_linux_options
);

void io_k8s_api_policy_v1beta1_se_linux_strategy_options_free(io_k8s_api_policy_v1beta1_se_linux_strategy_options_t *io_k8s_api_policy_v1beta1_se_linux_strategy_options);

io_k8s_api_policy_v1beta1_se_linux_strategy_options_t *io_k8s_api_policy_v1beta1_se_linux_strategy_options_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_se_linux_strategy_optionsJSON);

cJSON *io_k8s_api_policy_v1beta1_se_linux_strategy_options_convertToJSON(io_k8s_api_policy_v1beta1_se_linux_strategy_options_t *io_k8s_api_policy_v1beta1_se_linux_strategy_options);

#endif /* _io_k8s_api_policy_v1beta1_se_linux_strategy_options_H_ */

