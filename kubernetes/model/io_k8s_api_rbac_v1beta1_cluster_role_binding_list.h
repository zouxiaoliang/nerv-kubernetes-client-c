/*
 * io_k8s_api_rbac_v1beta1_cluster_role_binding_list.h
 *
 * ClusterRoleBindingList is a collection of ClusterRoleBindings. Deprecated in v1.17 in favor of rbac.authorization.k8s.io/v1 ClusterRoleBindingList, and will no longer be served in v1.22.
 */

#ifndef _io_k8s_api_rbac_v1beta1_cluster_role_binding_list_H_
#define _io_k8s_api_rbac_v1beta1_cluster_role_binding_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_rbac_v1beta1_cluster_role_binding_list_t io_k8s_api_rbac_v1beta1_cluster_role_binding_list_t;

#include "io_k8s_api_rbac_v1beta1_cluster_role_binding.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_list_meta.h"



typedef struct io_k8s_api_rbac_v1beta1_cluster_role_binding_list_t {
    char *api_version; // string
    list_t *items; //nonprimitive container
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *metadata; //model

} io_k8s_api_rbac_v1beta1_cluster_role_binding_list_t;

io_k8s_api_rbac_v1beta1_cluster_role_binding_list_t *io_k8s_api_rbac_v1beta1_cluster_role_binding_list_create(
    char *api_version,
    list_t *items,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *metadata
);

void io_k8s_api_rbac_v1beta1_cluster_role_binding_list_free(io_k8s_api_rbac_v1beta1_cluster_role_binding_list_t *io_k8s_api_rbac_v1beta1_cluster_role_binding_list);

io_k8s_api_rbac_v1beta1_cluster_role_binding_list_t *io_k8s_api_rbac_v1beta1_cluster_role_binding_list_parseFromJSON(cJSON *io_k8s_api_rbac_v1beta1_cluster_role_binding_listJSON);

cJSON *io_k8s_api_rbac_v1beta1_cluster_role_binding_list_convertToJSON(io_k8s_api_rbac_v1beta1_cluster_role_binding_list_t *io_k8s_api_rbac_v1beta1_cluster_role_binding_list);

#endif /* _io_k8s_api_rbac_v1beta1_cluster_role_binding_list_H_ */

