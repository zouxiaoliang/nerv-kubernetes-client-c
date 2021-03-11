/*
 * io_k8s_api_rbac_v1beta1_role_ref.h
 *
 * RoleRef contains information that points to the role being used
 */

#ifndef _io_k8s_api_rbac_v1beta1_role_ref_H_
#define _io_k8s_api_rbac_v1beta1_role_ref_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_rbac_v1beta1_role_ref_t io_k8s_api_rbac_v1beta1_role_ref_t;




typedef struct io_k8s_api_rbac_v1beta1_role_ref_t {
    char *api_group; // string
    char *kind; // string
    char *name; // string

} io_k8s_api_rbac_v1beta1_role_ref_t;

io_k8s_api_rbac_v1beta1_role_ref_t *io_k8s_api_rbac_v1beta1_role_ref_create(
    char *api_group,
    char *kind,
    char *name
);

void io_k8s_api_rbac_v1beta1_role_ref_free(io_k8s_api_rbac_v1beta1_role_ref_t *io_k8s_api_rbac_v1beta1_role_ref);

io_k8s_api_rbac_v1beta1_role_ref_t *io_k8s_api_rbac_v1beta1_role_ref_parseFromJSON(cJSON *io_k8s_api_rbac_v1beta1_role_refJSON);

cJSON *io_k8s_api_rbac_v1beta1_role_ref_convertToJSON(io_k8s_api_rbac_v1beta1_role_ref_t *io_k8s_api_rbac_v1beta1_role_ref);

#endif /* _io_k8s_api_rbac_v1beta1_role_ref_H_ */

