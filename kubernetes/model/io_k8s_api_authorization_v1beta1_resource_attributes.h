/*
 * io_k8s_api_authorization_v1beta1_resource_attributes.h
 *
 * ResourceAttributes includes the authorization attributes available for resource requests to the Authorizer interface
 */

#ifndef _io_k8s_api_authorization_v1beta1_resource_attributes_H_
#define _io_k8s_api_authorization_v1beta1_resource_attributes_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_authorization_v1beta1_resource_attributes_t io_k8s_api_authorization_v1beta1_resource_attributes_t;




typedef struct io_k8s_api_authorization_v1beta1_resource_attributes_t {
    char *group; // string
    char *name; // string
    char *_namespace; // string
    char *resource; // string
    char *subresource; // string
    char *verb; // string
    char *version; // string

} io_k8s_api_authorization_v1beta1_resource_attributes_t;

io_k8s_api_authorization_v1beta1_resource_attributes_t *io_k8s_api_authorization_v1beta1_resource_attributes_create(
    char *group,
    char *name,
    char *_namespace,
    char *resource,
    char *subresource,
    char *verb,
    char *version
);

void io_k8s_api_authorization_v1beta1_resource_attributes_free(io_k8s_api_authorization_v1beta1_resource_attributes_t *io_k8s_api_authorization_v1beta1_resource_attributes);

io_k8s_api_authorization_v1beta1_resource_attributes_t *io_k8s_api_authorization_v1beta1_resource_attributes_parseFromJSON(cJSON *io_k8s_api_authorization_v1beta1_resource_attributesJSON);

cJSON *io_k8s_api_authorization_v1beta1_resource_attributes_convertToJSON(io_k8s_api_authorization_v1beta1_resource_attributes_t *io_k8s_api_authorization_v1beta1_resource_attributes);

#endif /* _io_k8s_api_authorization_v1beta1_resource_attributes_H_ */

