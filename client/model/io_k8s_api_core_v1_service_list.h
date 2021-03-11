/*
 * io_k8s_api_core_v1_service_list.h
 *
 * ServiceList holds a list of services.
 */

#ifndef _io_k8s_api_core_v1_service_list_H_
#define _io_k8s_api_core_v1_service_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_service_list_t io_k8s_api_core_v1_service_list_t;

#include "io_k8s_api_core_v1_service.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_list_meta.h"



typedef struct io_k8s_api_core_v1_service_list_t {
    char *api_version; // string
    list_t *items; //nonprimitive container
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *metadata; //model

} io_k8s_api_core_v1_service_list_t;

io_k8s_api_core_v1_service_list_t *io_k8s_api_core_v1_service_list_create(
    char *api_version,
    list_t *items,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *metadata
);

void io_k8s_api_core_v1_service_list_free(io_k8s_api_core_v1_service_list_t *io_k8s_api_core_v1_service_list);

io_k8s_api_core_v1_service_list_t *io_k8s_api_core_v1_service_list_parseFromJSON(cJSON *io_k8s_api_core_v1_service_listJSON);

cJSON *io_k8s_api_core_v1_service_list_convertToJSON(io_k8s_api_core_v1_service_list_t *io_k8s_api_core_v1_service_list);

#endif /* _io_k8s_api_core_v1_service_list_H_ */

