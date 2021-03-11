/*
 * io_k8s_api_core_v1_service_account.h
 *
 * ServiceAccount binds together: * a name, understood by users, and perhaps by peripheral systems, for an identity * a principal that can be authenticated and authorized * a set of secrets
 */

#ifndef _io_k8s_api_core_v1_service_account_H_
#define _io_k8s_api_core_v1_service_account_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_service_account_t io_k8s_api_core_v1_service_account_t;

#include "io_k8s_api_core_v1_local_object_reference.h"
#include "io_k8s_api_core_v1_object_reference.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_service_account_t {
    char *api_version; // string
    int automount_service_account_token; //boolean
    list_t *image_pull_secrets; //nonprimitive container
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    list_t *secrets; //nonprimitive container

} io_k8s_api_core_v1_service_account_t;

io_k8s_api_core_v1_service_account_t *io_k8s_api_core_v1_service_account_create(
    char *api_version,
    int automount_service_account_token,
    list_t *image_pull_secrets,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    list_t *secrets
);

void io_k8s_api_core_v1_service_account_free(io_k8s_api_core_v1_service_account_t *io_k8s_api_core_v1_service_account);

io_k8s_api_core_v1_service_account_t *io_k8s_api_core_v1_service_account_parseFromJSON(cJSON *io_k8s_api_core_v1_service_accountJSON);

cJSON *io_k8s_api_core_v1_service_account_convertToJSON(io_k8s_api_core_v1_service_account_t *io_k8s_api_core_v1_service_account);

#endif /* _io_k8s_api_core_v1_service_account_H_ */

