/*
 * io_k8s_api_node_v1alpha1_runtime_class.h
 *
 * RuntimeClass defines a class of container runtime supported in the cluster. The RuntimeClass is used to determine which container runtime is used to run all containers in a pod. RuntimeClasses are (currently) manually defined by a user or cluster provisioner, and referenced in the PodSpec. The Kubelet is responsible for resolving the RuntimeClassName reference before running the pod.  For more details, see https://git.k8s.io/enhancements/keps/sig-node/runtime-class.md
 */

#ifndef _io_k8s_api_node_v1alpha1_runtime_class_H_
#define _io_k8s_api_node_v1alpha1_runtime_class_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_node_v1alpha1_runtime_class_t io_k8s_api_node_v1alpha1_runtime_class_t;

#include "io_k8s_api_node_v1alpha1_runtime_class_spec.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_node_v1alpha1_runtime_class_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_node_v1alpha1_runtime_class_spec_t *spec; //model

} io_k8s_api_node_v1alpha1_runtime_class_t;

io_k8s_api_node_v1alpha1_runtime_class_t *io_k8s_api_node_v1alpha1_runtime_class_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_node_v1alpha1_runtime_class_spec_t *spec
);

void io_k8s_api_node_v1alpha1_runtime_class_free(io_k8s_api_node_v1alpha1_runtime_class_t *io_k8s_api_node_v1alpha1_runtime_class);

io_k8s_api_node_v1alpha1_runtime_class_t *io_k8s_api_node_v1alpha1_runtime_class_parseFromJSON(cJSON *io_k8s_api_node_v1alpha1_runtime_classJSON);

cJSON *io_k8s_api_node_v1alpha1_runtime_class_convertToJSON(io_k8s_api_node_v1alpha1_runtime_class_t *io_k8s_api_node_v1alpha1_runtime_class);

#endif /* _io_k8s_api_node_v1alpha1_runtime_class_H_ */

