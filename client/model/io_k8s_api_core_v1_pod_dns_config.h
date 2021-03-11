/*
 * io_k8s_api_core_v1_pod_dns_config.h
 *
 * PodDNSConfig defines the DNS parameters of a pod in addition to those generated from DNSPolicy.
 */

#ifndef _io_k8s_api_core_v1_pod_dns_config_H_
#define _io_k8s_api_core_v1_pod_dns_config_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_pod_dns_config_t io_k8s_api_core_v1_pod_dns_config_t;

#include "io_k8s_api_core_v1_pod_dns_config_option.h"



typedef struct io_k8s_api_core_v1_pod_dns_config_t {
    list_t *nameservers; //primitive container
    list_t *options; //nonprimitive container
    list_t *searches; //primitive container

} io_k8s_api_core_v1_pod_dns_config_t;

io_k8s_api_core_v1_pod_dns_config_t *io_k8s_api_core_v1_pod_dns_config_create(
    list_t *nameservers,
    list_t *options,
    list_t *searches
);

void io_k8s_api_core_v1_pod_dns_config_free(io_k8s_api_core_v1_pod_dns_config_t *io_k8s_api_core_v1_pod_dns_config);

io_k8s_api_core_v1_pod_dns_config_t *io_k8s_api_core_v1_pod_dns_config_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_dns_configJSON);

cJSON *io_k8s_api_core_v1_pod_dns_config_convertToJSON(io_k8s_api_core_v1_pod_dns_config_t *io_k8s_api_core_v1_pod_dns_config);

#endif /* _io_k8s_api_core_v1_pod_dns_config_H_ */

