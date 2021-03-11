/*
 * io_k8s_api_networking_v1_ip_block.h
 *
 * IPBlock describes a particular CIDR (Ex. \&quot;192.168.1.1/24\&quot;,\&quot;2001:db9::/64\&quot;) that is allowed to the pods matched by a NetworkPolicySpec&#39;s podSelector. The except entry describes CIDRs that should not be included within this rule.
 */

#ifndef _io_k8s_api_networking_v1_ip_block_H_
#define _io_k8s_api_networking_v1_ip_block_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_networking_v1_ip_block_t io_k8s_api_networking_v1_ip_block_t;




typedef struct io_k8s_api_networking_v1_ip_block_t {
    char *cidr; // string
    list_t *except; //primitive container

} io_k8s_api_networking_v1_ip_block_t;

io_k8s_api_networking_v1_ip_block_t *io_k8s_api_networking_v1_ip_block_create(
    char *cidr,
    list_t *except
);

void io_k8s_api_networking_v1_ip_block_free(io_k8s_api_networking_v1_ip_block_t *io_k8s_api_networking_v1_ip_block);

io_k8s_api_networking_v1_ip_block_t *io_k8s_api_networking_v1_ip_block_parseFromJSON(cJSON *io_k8s_api_networking_v1_ip_blockJSON);

cJSON *io_k8s_api_networking_v1_ip_block_convertToJSON(io_k8s_api_networking_v1_ip_block_t *io_k8s_api_networking_v1_ip_block);

#endif /* _io_k8s_api_networking_v1_ip_block_H_ */

