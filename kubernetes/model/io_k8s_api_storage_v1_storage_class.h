/*
 * io_k8s_api_storage_v1_storage_class.h
 *
 * StorageClass describes the parameters for a class of storage for which PersistentVolumes can be dynamically provisioned.  StorageClasses are non-namespaced; the name of the storage class according to etcd is in ObjectMeta.Name.
 */

#ifndef _io_k8s_api_storage_v1_storage_class_H_
#define _io_k8s_api_storage_v1_storage_class_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_storage_v1_storage_class_t io_k8s_api_storage_v1_storage_class_t;

#include "io_k8s_api_core_v1_topology_selector_term.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_storage_v1_storage_class_t {
    int allow_volume_expansion; //boolean
    list_t *allowed_topologies; //nonprimitive container
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    list_t *mount_options; //primitive container
    list_t* parameters; //map
    char *provisioner; // string
    char *reclaim_policy; // string
    char *volume_binding_mode; // string

} io_k8s_api_storage_v1_storage_class_t;

io_k8s_api_storage_v1_storage_class_t *io_k8s_api_storage_v1_storage_class_create(
    int allow_volume_expansion,
    list_t *allowed_topologies,
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    list_t *mount_options,
    list_t* parameters,
    char *provisioner,
    char *reclaim_policy,
    char *volume_binding_mode
);

void io_k8s_api_storage_v1_storage_class_free(io_k8s_api_storage_v1_storage_class_t *io_k8s_api_storage_v1_storage_class);

io_k8s_api_storage_v1_storage_class_t *io_k8s_api_storage_v1_storage_class_parseFromJSON(cJSON *io_k8s_api_storage_v1_storage_classJSON);

cJSON *io_k8s_api_storage_v1_storage_class_convertToJSON(io_k8s_api_storage_v1_storage_class_t *io_k8s_api_storage_v1_storage_class);

#endif /* _io_k8s_api_storage_v1_storage_class_H_ */

