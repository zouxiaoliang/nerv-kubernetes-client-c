/*
 * io_k8s_api_core_v1_port_status.h
 *
 * 
 */

#ifndef _io_k8s_api_core_v1_port_status_H_
#define _io_k8s_api_core_v1_port_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_port_status_t io_k8s_api_core_v1_port_status_t;




typedef struct io_k8s_api_core_v1_port_status_t {
    char *error; // string
    int port; //numeric
    char *protocol; // string

} io_k8s_api_core_v1_port_status_t;

io_k8s_api_core_v1_port_status_t *io_k8s_api_core_v1_port_status_create(
    char *error,
    int port,
    char *protocol
);

void io_k8s_api_core_v1_port_status_free(io_k8s_api_core_v1_port_status_t *io_k8s_api_core_v1_port_status);

io_k8s_api_core_v1_port_status_t *io_k8s_api_core_v1_port_status_parseFromJSON(cJSON *io_k8s_api_core_v1_port_statusJSON);

cJSON *io_k8s_api_core_v1_port_status_convertToJSON(io_k8s_api_core_v1_port_status_t *io_k8s_api_core_v1_port_status);

#endif /* _io_k8s_api_core_v1_port_status_H_ */

