/*
 * io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr.h
 *
 * ServerAddressByClientCIDR helps the client to determine the server address that they should use, depending on the clientCIDR that they match.
 */

#ifndef _io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_H_
#define _io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t;




typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t {
    char *client_cidr; // string
    char *server_address; // string

} io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t;

io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t *io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_create(
    char *client_cidr,
    char *server_address
);

void io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_free(io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t *io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr);

io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t *io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidrJSON);

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t *io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr);

#endif /* _io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_H_ */

