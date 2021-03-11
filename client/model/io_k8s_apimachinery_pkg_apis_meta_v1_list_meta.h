/*
 * io_k8s_apimachinery_pkg_apis_meta_v1_list_meta.h
 *
 * ListMeta describes metadata that synthetic resources must have, including lists and various status objects. A resource may have only one of {ObjectMeta, ListMeta}.
 */

#ifndef _io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_H_
#define _io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t;




typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t {
    char *_continue; // string
    long remaining_item_count; //numeric
    char *resource_version; // string
    char *self_link; // string

} io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t;

io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_create(
    char *_continue,
    long remaining_item_count,
    char *resource_version,
    char *self_link
);

void io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_free(io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *io_k8s_apimachinery_pkg_apis_meta_v1_list_meta);

io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_list_metaJSON);

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *io_k8s_apimachinery_pkg_apis_meta_v1_list_meta);

#endif /* _io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_H_ */

