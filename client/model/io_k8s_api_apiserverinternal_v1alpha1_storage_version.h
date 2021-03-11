/*
 * io_k8s_api_apiserverinternal_v1alpha1_storage_version.h
 *
 *   Storage version of a specific resource.
 */

#ifndef _io_k8s_api_apiserverinternal_v1alpha1_storage_version_H_
#define _io_k8s_api_apiserverinternal_v1alpha1_storage_version_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_apiserverinternal_v1alpha1_storage_version_t io_k8s_api_apiserverinternal_v1alpha1_storage_version_t;

#include "io_k8s_api_apiserverinternal_v1alpha1_storage_version_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"
#include "object.h"



typedef struct io_k8s_api_apiserverinternal_v1alpha1_storage_version_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    object_t *spec; //object
    struct io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t *status; //model

} io_k8s_api_apiserverinternal_v1alpha1_storage_version_t;

io_k8s_api_apiserverinternal_v1alpha1_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    object_t *spec,
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t *status
);

void io_k8s_api_apiserverinternal_v1alpha1_storage_version_free(io_k8s_api_apiserverinternal_v1alpha1_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version);

io_k8s_api_apiserverinternal_v1alpha1_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_parseFromJSON(cJSON *io_k8s_api_apiserverinternal_v1alpha1_storage_versionJSON);

cJSON *io_k8s_api_apiserverinternal_v1alpha1_storage_version_convertToJSON(io_k8s_api_apiserverinternal_v1alpha1_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version);

#endif /* _io_k8s_api_apiserverinternal_v1alpha1_storage_version_H_ */

