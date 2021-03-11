/*
 * io_k8s_api_authorization_v1beta1_non_resource_attributes.h
 *
 * NonResourceAttributes includes the authorization attributes available for non-resource requests to the Authorizer interface
 */

#ifndef _io_k8s_api_authorization_v1beta1_non_resource_attributes_H_
#define _io_k8s_api_authorization_v1beta1_non_resource_attributes_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_authorization_v1beta1_non_resource_attributes_t io_k8s_api_authorization_v1beta1_non_resource_attributes_t;




typedef struct io_k8s_api_authorization_v1beta1_non_resource_attributes_t {
    char *path; // string
    char *verb; // string

} io_k8s_api_authorization_v1beta1_non_resource_attributes_t;

io_k8s_api_authorization_v1beta1_non_resource_attributes_t *io_k8s_api_authorization_v1beta1_non_resource_attributes_create(
    char *path,
    char *verb
);

void io_k8s_api_authorization_v1beta1_non_resource_attributes_free(io_k8s_api_authorization_v1beta1_non_resource_attributes_t *io_k8s_api_authorization_v1beta1_non_resource_attributes);

io_k8s_api_authorization_v1beta1_non_resource_attributes_t *io_k8s_api_authorization_v1beta1_non_resource_attributes_parseFromJSON(cJSON *io_k8s_api_authorization_v1beta1_non_resource_attributesJSON);

cJSON *io_k8s_api_authorization_v1beta1_non_resource_attributes_convertToJSON(io_k8s_api_authorization_v1beta1_non_resource_attributes_t *io_k8s_api_authorization_v1beta1_non_resource_attributes);

#endif /* _io_k8s_api_authorization_v1beta1_non_resource_attributes_H_ */

