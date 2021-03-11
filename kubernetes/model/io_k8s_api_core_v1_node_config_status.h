/*
 * io_k8s_api_core_v1_node_config_status.h
 *
 * NodeConfigStatus describes the status of the config assigned by Node.Spec.ConfigSource.
 */

#ifndef _io_k8s_api_core_v1_node_config_status_H_
#define _io_k8s_api_core_v1_node_config_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_node_config_status_t io_k8s_api_core_v1_node_config_status_t;

#include "io_k8s_api_core_v1_node_config_source.h"



typedef struct io_k8s_api_core_v1_node_config_status_t {
    struct io_k8s_api_core_v1_node_config_source_t *active; //model
    struct io_k8s_api_core_v1_node_config_source_t *assigned; //model
    char *error; // string
    struct io_k8s_api_core_v1_node_config_source_t *last_known_good; //model

} io_k8s_api_core_v1_node_config_status_t;

io_k8s_api_core_v1_node_config_status_t *io_k8s_api_core_v1_node_config_status_create(
    io_k8s_api_core_v1_node_config_source_t *active,
    io_k8s_api_core_v1_node_config_source_t *assigned,
    char *error,
    io_k8s_api_core_v1_node_config_source_t *last_known_good
);

void io_k8s_api_core_v1_node_config_status_free(io_k8s_api_core_v1_node_config_status_t *io_k8s_api_core_v1_node_config_status);

io_k8s_api_core_v1_node_config_status_t *io_k8s_api_core_v1_node_config_status_parseFromJSON(cJSON *io_k8s_api_core_v1_node_config_statusJSON);

cJSON *io_k8s_api_core_v1_node_config_status_convertToJSON(io_k8s_api_core_v1_node_config_status_t *io_k8s_api_core_v1_node_config_status);

#endif /* _io_k8s_api_core_v1_node_config_status_H_ */

