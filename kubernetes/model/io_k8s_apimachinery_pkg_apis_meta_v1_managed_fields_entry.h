/*
 * io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry.h
 *
 * ManagedFieldsEntry is a workflow-id, a FieldSet and the group version of the resource that the fieldset applies to.
 */

#ifndef _io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_H_
#define _io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t;

#include "object.h"



typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t {
    char *api_version; // string
    char *fields_type; // string
    object_t *fields_v1; //object
    char *manager; // string
    char *operation; // string
    char *time; //date time

} io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t;

io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t *io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_create(
    char *api_version,
    char *fields_type,
    object_t *fields_v1,
    char *manager,
    char *operation,
    char *time
);

void io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_free(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t *io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry);

io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t *io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entryJSON);

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t *io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry);

#endif /* _io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_H_ */

