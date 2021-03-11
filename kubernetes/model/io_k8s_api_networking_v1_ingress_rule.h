/*
 * io_k8s_api_networking_v1_ingress_rule.h
 *
 * IngressRule represents the rules mapping the paths under a specified host to the related backend services. Incoming requests are first evaluated for a host match, then routed to the backend associated with the matching IngressRuleValue.
 */

#ifndef _io_k8s_api_networking_v1_ingress_rule_H_
#define _io_k8s_api_networking_v1_ingress_rule_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_networking_v1_ingress_rule_t io_k8s_api_networking_v1_ingress_rule_t;

#include "io_k8s_api_networking_v1_http_ingress_rule_value.h"



typedef struct io_k8s_api_networking_v1_ingress_rule_t {
    char *host; // string
    struct io_k8s_api_networking_v1_http_ingress_rule_value_t *http; //model

} io_k8s_api_networking_v1_ingress_rule_t;

io_k8s_api_networking_v1_ingress_rule_t *io_k8s_api_networking_v1_ingress_rule_create(
    char *host,
    io_k8s_api_networking_v1_http_ingress_rule_value_t *http
);

void io_k8s_api_networking_v1_ingress_rule_free(io_k8s_api_networking_v1_ingress_rule_t *io_k8s_api_networking_v1_ingress_rule);

io_k8s_api_networking_v1_ingress_rule_t *io_k8s_api_networking_v1_ingress_rule_parseFromJSON(cJSON *io_k8s_api_networking_v1_ingress_ruleJSON);

cJSON *io_k8s_api_networking_v1_ingress_rule_convertToJSON(io_k8s_api_networking_v1_ingress_rule_t *io_k8s_api_networking_v1_ingress_rule);

#endif /* _io_k8s_api_networking_v1_ingress_rule_H_ */

