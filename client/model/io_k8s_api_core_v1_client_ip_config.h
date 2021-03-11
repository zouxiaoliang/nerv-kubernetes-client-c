/*
 * io_k8s_api_core_v1_client_ip_config.h
 *
 * ClientIPConfig represents the configurations of Client IP based session affinity.
 */

#ifndef _io_k8s_api_core_v1_client_ip_config_H_
#define _io_k8s_api_core_v1_client_ip_config_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_client_ip_config_t io_k8s_api_core_v1_client_ip_config_t;




typedef struct io_k8s_api_core_v1_client_ip_config_t {
    int timeout_seconds; //numeric

} io_k8s_api_core_v1_client_ip_config_t;

io_k8s_api_core_v1_client_ip_config_t *io_k8s_api_core_v1_client_ip_config_create(
    int timeout_seconds
);

void io_k8s_api_core_v1_client_ip_config_free(io_k8s_api_core_v1_client_ip_config_t *io_k8s_api_core_v1_client_ip_config);

io_k8s_api_core_v1_client_ip_config_t *io_k8s_api_core_v1_client_ip_config_parseFromJSON(cJSON *io_k8s_api_core_v1_client_ip_configJSON);

cJSON *io_k8s_api_core_v1_client_ip_config_convertToJSON(io_k8s_api_core_v1_client_ip_config_t *io_k8s_api_core_v1_client_ip_config);

#endif /* _io_k8s_api_core_v1_client_ip_config_H_ */

