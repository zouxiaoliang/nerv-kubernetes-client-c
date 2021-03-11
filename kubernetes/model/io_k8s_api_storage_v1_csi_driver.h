/*
 * io_k8s_api_storage_v1_csi_driver.h
 *
 * CSIDriver captures information about a Container Storage Interface (CSI) volume driver deployed on the cluster. Kubernetes attach detach controller uses this object to determine whether attach is required. Kubelet uses this object to determine whether pod information needs to be passed on mount. CSIDriver objects are non-namespaced.
 */

#ifndef _io_k8s_api_storage_v1_csi_driver_H_
#define _io_k8s_api_storage_v1_csi_driver_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_storage_v1_csi_driver_t io_k8s_api_storage_v1_csi_driver_t;

#include "io_k8s_api_storage_v1_csi_driver_spec.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_storage_v1_csi_driver_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_storage_v1_csi_driver_spec_t *spec; //model

} io_k8s_api_storage_v1_csi_driver_t;

io_k8s_api_storage_v1_csi_driver_t *io_k8s_api_storage_v1_csi_driver_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_storage_v1_csi_driver_spec_t *spec
);

void io_k8s_api_storage_v1_csi_driver_free(io_k8s_api_storage_v1_csi_driver_t *io_k8s_api_storage_v1_csi_driver);

io_k8s_api_storage_v1_csi_driver_t *io_k8s_api_storage_v1_csi_driver_parseFromJSON(cJSON *io_k8s_api_storage_v1_csi_driverJSON);

cJSON *io_k8s_api_storage_v1_csi_driver_convertToJSON(io_k8s_api_storage_v1_csi_driver_t *io_k8s_api_storage_v1_csi_driver);

#endif /* _io_k8s_api_storage_v1_csi_driver_H_ */

