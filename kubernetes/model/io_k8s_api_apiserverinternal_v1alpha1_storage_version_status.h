/*
 * io_k8s_api_apiserverinternal_v1alpha1_storage_version_status.h
 *
 * API server instances report the versions they can decode and the version they encode objects to when persisting objects in the backend.
 */

#ifndef _io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_H_
#define _io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t;

#include "io_k8s_api_apiserverinternal_v1alpha1_server_storage_version.h"
#include "io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition.h"



typedef struct io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t {
    char *common_encoding_version; // string
    list_t *conditions; //nonprimitive container
    list_t *storage_versions; //nonprimitive container

} io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t;

io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_create(
    char *common_encoding_version,
    list_t *conditions,
    list_t *storage_versions
);

void io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_free(io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_status);

io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_parseFromJSON(cJSON *io_k8s_api_apiserverinternal_v1alpha1_storage_version_statusJSON);

cJSON *io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_convertToJSON(io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_status);

#endif /* _io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_H_ */

