/*
 * io_k8s_api_rbac_v1_cluster_role_binding.h
 *
 * ClusterRoleBinding references a ClusterRole, but not contain it.  It can reference a ClusterRole in the global namespace, and adds who information via Subject.
 */

#ifndef _io_k8s_api_rbac_v1_cluster_role_binding_H_
#define _io_k8s_api_rbac_v1_cluster_role_binding_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_rbac_v1_cluster_role_binding_t io_k8s_api_rbac_v1_cluster_role_binding_t;

#include "io_k8s_api_rbac_v1_role_ref.h"
#include "io_k8s_api_rbac_v1_subject.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_rbac_v1_cluster_role_binding_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_rbac_v1_role_ref_t *role_ref; //model
    list_t *subjects; //nonprimitive container

} io_k8s_api_rbac_v1_cluster_role_binding_t;

io_k8s_api_rbac_v1_cluster_role_binding_t *io_k8s_api_rbac_v1_cluster_role_binding_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_rbac_v1_role_ref_t *role_ref,
    list_t *subjects
);

void io_k8s_api_rbac_v1_cluster_role_binding_free(io_k8s_api_rbac_v1_cluster_role_binding_t *io_k8s_api_rbac_v1_cluster_role_binding);

io_k8s_api_rbac_v1_cluster_role_binding_t *io_k8s_api_rbac_v1_cluster_role_binding_parseFromJSON(cJSON *io_k8s_api_rbac_v1_cluster_role_bindingJSON);

cJSON *io_k8s_api_rbac_v1_cluster_role_binding_convertToJSON(io_k8s_api_rbac_v1_cluster_role_binding_t *io_k8s_api_rbac_v1_cluster_role_binding);

#endif /* _io_k8s_api_rbac_v1_cluster_role_binding_H_ */

