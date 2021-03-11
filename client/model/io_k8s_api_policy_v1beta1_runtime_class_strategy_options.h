/*
 * io_k8s_api_policy_v1beta1_runtime_class_strategy_options.h
 *
 * RuntimeClassStrategyOptions define the strategy that will dictate the allowable RuntimeClasses for a pod.
 */

#ifndef _io_k8s_api_policy_v1beta1_runtime_class_strategy_options_H_
#define _io_k8s_api_policy_v1beta1_runtime_class_strategy_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_policy_v1beta1_runtime_class_strategy_options_t io_k8s_api_policy_v1beta1_runtime_class_strategy_options_t;




typedef struct io_k8s_api_policy_v1beta1_runtime_class_strategy_options_t {
    list_t *allowed_runtime_class_names; //primitive container
    char *default_runtime_class_name; // string

} io_k8s_api_policy_v1beta1_runtime_class_strategy_options_t;

io_k8s_api_policy_v1beta1_runtime_class_strategy_options_t *io_k8s_api_policy_v1beta1_runtime_class_strategy_options_create(
    list_t *allowed_runtime_class_names,
    char *default_runtime_class_name
);

void io_k8s_api_policy_v1beta1_runtime_class_strategy_options_free(io_k8s_api_policy_v1beta1_runtime_class_strategy_options_t *io_k8s_api_policy_v1beta1_runtime_class_strategy_options);

io_k8s_api_policy_v1beta1_runtime_class_strategy_options_t *io_k8s_api_policy_v1beta1_runtime_class_strategy_options_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_runtime_class_strategy_optionsJSON);

cJSON *io_k8s_api_policy_v1beta1_runtime_class_strategy_options_convertToJSON(io_k8s_api_policy_v1beta1_runtime_class_strategy_options_t *io_k8s_api_policy_v1beta1_runtime_class_strategy_options);

#endif /* _io_k8s_api_policy_v1beta1_runtime_class_strategy_options_H_ */

