/*
 * io_k8s_api_core_v1_se_linux_options.h
 *
 * SELinuxOptions are the labels to be applied to the container
 */

#ifndef _io_k8s_api_core_v1_se_linux_options_H_
#define _io_k8s_api_core_v1_se_linux_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_se_linux_options_t io_k8s_api_core_v1_se_linux_options_t;




typedef struct io_k8s_api_core_v1_se_linux_options_t {
    char *level; // string
    char *role; // string
    char *type; // string
    char *user; // string

} io_k8s_api_core_v1_se_linux_options_t;

io_k8s_api_core_v1_se_linux_options_t *io_k8s_api_core_v1_se_linux_options_create(
    char *level,
    char *role,
    char *type,
    char *user
);

void io_k8s_api_core_v1_se_linux_options_free(io_k8s_api_core_v1_se_linux_options_t *io_k8s_api_core_v1_se_linux_options);

io_k8s_api_core_v1_se_linux_options_t *io_k8s_api_core_v1_se_linux_options_parseFromJSON(cJSON *io_k8s_api_core_v1_se_linux_optionsJSON);

cJSON *io_k8s_api_core_v1_se_linux_options_convertToJSON(io_k8s_api_core_v1_se_linux_options_t *io_k8s_api_core_v1_se_linux_options);

#endif /* _io_k8s_api_core_v1_se_linux_options_H_ */

