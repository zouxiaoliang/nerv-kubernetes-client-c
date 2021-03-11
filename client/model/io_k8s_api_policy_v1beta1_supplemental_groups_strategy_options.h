/*
 * io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options.h
 *
 * SupplementalGroupsStrategyOptions defines the strategy type and options used to create the strategy.
 */

#ifndef _io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_H_
#define _io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_t io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_t;

#include "io_k8s_api_policy_v1beta1_id_range.h"



typedef struct io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_t {
    list_t *ranges; //nonprimitive container
    char *rule; // string

} io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_t;

io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_t *io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_create(
    list_t *ranges,
    char *rule
);

void io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_free(io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_t *io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options);

io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_t *io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_supplemental_groups_strategy_optionsJSON);

cJSON *io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_convertToJSON(io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_t *io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options);

#endif /* _io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_H_ */

