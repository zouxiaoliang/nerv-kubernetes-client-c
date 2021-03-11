/*
 * io_k8s_api_core_v1_host_alias.h
 *
 * HostAlias holds the mapping between IP and hostnames that will be injected as an entry in the pod&#39;s hosts file.
 */

#ifndef _io_k8s_api_core_v1_host_alias_H_
#define _io_k8s_api_core_v1_host_alias_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_host_alias_t io_k8s_api_core_v1_host_alias_t;




typedef struct io_k8s_api_core_v1_host_alias_t {
    list_t *hostnames; //primitive container
    char *ip; // string

} io_k8s_api_core_v1_host_alias_t;

io_k8s_api_core_v1_host_alias_t *io_k8s_api_core_v1_host_alias_create(
    list_t *hostnames,
    char *ip
);

void io_k8s_api_core_v1_host_alias_free(io_k8s_api_core_v1_host_alias_t *io_k8s_api_core_v1_host_alias);

io_k8s_api_core_v1_host_alias_t *io_k8s_api_core_v1_host_alias_parseFromJSON(cJSON *io_k8s_api_core_v1_host_aliasJSON);

cJSON *io_k8s_api_core_v1_host_alias_convertToJSON(io_k8s_api_core_v1_host_alias_t *io_k8s_api_core_v1_host_alias);

#endif /* _io_k8s_api_core_v1_host_alias_H_ */

