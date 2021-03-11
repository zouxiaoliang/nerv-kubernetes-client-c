/*
 * io_k8s_api_core_v1_pod_dns_config_option.h
 *
 * PodDNSConfigOption defines DNS resolver options of a pod.
 */

#ifndef _io_k8s_api_core_v1_pod_dns_config_option_H_
#define _io_k8s_api_core_v1_pod_dns_config_option_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_pod_dns_config_option_t io_k8s_api_core_v1_pod_dns_config_option_t;




typedef struct io_k8s_api_core_v1_pod_dns_config_option_t {
    char *name; // string
    char *value; // string

} io_k8s_api_core_v1_pod_dns_config_option_t;

io_k8s_api_core_v1_pod_dns_config_option_t *io_k8s_api_core_v1_pod_dns_config_option_create(
    char *name,
    char *value
);

void io_k8s_api_core_v1_pod_dns_config_option_free(io_k8s_api_core_v1_pod_dns_config_option_t *io_k8s_api_core_v1_pod_dns_config_option);

io_k8s_api_core_v1_pod_dns_config_option_t *io_k8s_api_core_v1_pod_dns_config_option_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_dns_config_optionJSON);

cJSON *io_k8s_api_core_v1_pod_dns_config_option_convertToJSON(io_k8s_api_core_v1_pod_dns_config_option_t *io_k8s_api_core_v1_pod_dns_config_option);

#endif /* _io_k8s_api_core_v1_pod_dns_config_option_H_ */

