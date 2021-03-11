/*
 * io_k8s_api_rbac_v1alpha1_cluster_role.h
 *
 * ClusterRole is a cluster level, logical grouping of PolicyRules that can be referenced as a unit by a RoleBinding or ClusterRoleBinding. Deprecated in v1.17 in favor of rbac.authorization.k8s.io/v1 ClusterRole, and will no longer be served in v1.22.
 */

#ifndef _io_k8s_api_rbac_v1alpha1_cluster_role_H_
#define _io_k8s_api_rbac_v1alpha1_cluster_role_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_rbac_v1alpha1_cluster_role_t io_k8s_api_rbac_v1alpha1_cluster_role_t;

#include "io_k8s_api_rbac_v1alpha1_aggregation_rule.h"
#include "io_k8s_api_rbac_v1alpha1_policy_rule.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_rbac_v1alpha1_cluster_role_t {
    struct io_k8s_api_rbac_v1alpha1_aggregation_rule_t *aggregation_rule; //model
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    list_t *rules; //nonprimitive container

} io_k8s_api_rbac_v1alpha1_cluster_role_t;

io_k8s_api_rbac_v1alpha1_cluster_role_t *io_k8s_api_rbac_v1alpha1_cluster_role_create(
    io_k8s_api_rbac_v1alpha1_aggregation_rule_t *aggregation_rule,
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    list_t *rules
);

void io_k8s_api_rbac_v1alpha1_cluster_role_free(io_k8s_api_rbac_v1alpha1_cluster_role_t *io_k8s_api_rbac_v1alpha1_cluster_role);

io_k8s_api_rbac_v1alpha1_cluster_role_t *io_k8s_api_rbac_v1alpha1_cluster_role_parseFromJSON(cJSON *io_k8s_api_rbac_v1alpha1_cluster_roleJSON);

cJSON *io_k8s_api_rbac_v1alpha1_cluster_role_convertToJSON(io_k8s_api_rbac_v1alpha1_cluster_role_t *io_k8s_api_rbac_v1alpha1_cluster_role);

#endif /* _io_k8s_api_rbac_v1alpha1_cluster_role_H_ */

