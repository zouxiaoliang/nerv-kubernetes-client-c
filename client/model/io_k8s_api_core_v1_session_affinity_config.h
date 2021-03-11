/*
 * io_k8s_api_core_v1_session_affinity_config.h
 *
 * SessionAffinityConfig represents the configurations of session affinity.
 */

#ifndef _io_k8s_api_core_v1_session_affinity_config_H_
#define _io_k8s_api_core_v1_session_affinity_config_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_session_affinity_config_t io_k8s_api_core_v1_session_affinity_config_t;

#include "io_k8s_api_core_v1_client_ip_config.h"



typedef struct io_k8s_api_core_v1_session_affinity_config_t {
    struct io_k8s_api_core_v1_client_ip_config_t *client_ip; //model

} io_k8s_api_core_v1_session_affinity_config_t;

io_k8s_api_core_v1_session_affinity_config_t *io_k8s_api_core_v1_session_affinity_config_create(
    io_k8s_api_core_v1_client_ip_config_t *client_ip
);

void io_k8s_api_core_v1_session_affinity_config_free(io_k8s_api_core_v1_session_affinity_config_t *io_k8s_api_core_v1_session_affinity_config);

io_k8s_api_core_v1_session_affinity_config_t *io_k8s_api_core_v1_session_affinity_config_parseFromJSON(cJSON *io_k8s_api_core_v1_session_affinity_configJSON);

cJSON *io_k8s_api_core_v1_session_affinity_config_convertToJSON(io_k8s_api_core_v1_session_affinity_config_t *io_k8s_api_core_v1_session_affinity_config);

#endif /* _io_k8s_api_core_v1_session_affinity_config_H_ */

