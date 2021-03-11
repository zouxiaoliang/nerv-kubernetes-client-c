/*
 * io_k8s_api_extensions_v1beta1_http_ingress_rule_value.h
 *
 * HTTPIngressRuleValue is a list of http selectors pointing to backends. In the example: http://&lt;host&gt;/&lt;path&gt;?&lt;searchpart&gt; -&gt; backend where where parts of the url correspond to RFC 3986, this resource will be used to match against everything after the last &#39;/&#39; and before the first &#39;?&#39; or &#39;#&#39;.
 */

#ifndef _io_k8s_api_extensions_v1beta1_http_ingress_rule_value_H_
#define _io_k8s_api_extensions_v1beta1_http_ingress_rule_value_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_extensions_v1beta1_http_ingress_rule_value_t io_k8s_api_extensions_v1beta1_http_ingress_rule_value_t;

#include "io_k8s_api_extensions_v1beta1_http_ingress_path.h"



typedef struct io_k8s_api_extensions_v1beta1_http_ingress_rule_value_t {
    list_t *paths; //nonprimitive container

} io_k8s_api_extensions_v1beta1_http_ingress_rule_value_t;

io_k8s_api_extensions_v1beta1_http_ingress_rule_value_t *io_k8s_api_extensions_v1beta1_http_ingress_rule_value_create(
    list_t *paths
);

void io_k8s_api_extensions_v1beta1_http_ingress_rule_value_free(io_k8s_api_extensions_v1beta1_http_ingress_rule_value_t *io_k8s_api_extensions_v1beta1_http_ingress_rule_value);

io_k8s_api_extensions_v1beta1_http_ingress_rule_value_t *io_k8s_api_extensions_v1beta1_http_ingress_rule_value_parseFromJSON(cJSON *io_k8s_api_extensions_v1beta1_http_ingress_rule_valueJSON);

cJSON *io_k8s_api_extensions_v1beta1_http_ingress_rule_value_convertToJSON(io_k8s_api_extensions_v1beta1_http_ingress_rule_value_t *io_k8s_api_extensions_v1beta1_http_ingress_rule_value);

#endif /* _io_k8s_api_extensions_v1beta1_http_ingress_rule_value_H_ */

