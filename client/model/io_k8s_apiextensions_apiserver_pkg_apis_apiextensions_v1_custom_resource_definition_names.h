/*
 * io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names.h
 *
 * CustomResourceDefinitionNames indicates the names to serve this CustomResourceDefinition
 */

#ifndef _io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_H_
#define _io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_t io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_t;




typedef struct io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_t {
    list_t *categories; //primitive container
    char *kind; // string
    char *list_kind; // string
    char *plural; // string
    list_t *short_names; //primitive container
    char *singular; // string

} io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_t;

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_create(
    list_t *categories,
    char *kind,
    char *list_kind,
    char *plural,
    list_t *short_names,
    char *singular
);

void io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names);

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_parseFromJSON(cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_namesJSON);

cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names);

#endif /* _io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_H_ */

