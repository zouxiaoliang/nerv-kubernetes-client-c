/*
 * io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition.h
 *
 * CustomResourceColumnDefinition specifies a column for server side printing.
 */

#ifndef _io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_H_
#define _io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_t io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_t;




typedef struct io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_t {
    char *description; // string
    char *format; // string
    char *json_path; // string
    char *name; // string
    int priority; //numeric
    char *type; // string

} io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_t;

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_create(
    char *description,
    char *format,
    char *json_path,
    char *name,
    int priority,
    char *type
);

void io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition);

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_parseFromJSON(cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definitionJSON);

cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition);

#endif /* _io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_H_ */

