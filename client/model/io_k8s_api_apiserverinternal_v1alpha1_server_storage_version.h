/*
 * io_k8s_api_apiserverinternal_v1alpha1_server_storage_version.h
 *
 * An API server instance reports the version it can decode and the version it encodes objects to when persisting objects in the backend.
 */

#ifndef _io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_H_
#define _io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t;




typedef struct io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t {
    char *api_server_id; // string
    list_t *decodable_versions; //primitive container
    char *encoding_version; // string

} io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t;

io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_create(
    char *api_server_id,
    list_t *decodable_versions,
    char *encoding_version
);

void io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_free(io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_server_storage_version);

io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_parseFromJSON(cJSON *io_k8s_api_apiserverinternal_v1alpha1_server_storage_versionJSON);

cJSON *io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_convertToJSON(io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_server_storage_version);

#endif /* _io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_H_ */

