/*
 * io_k8s_api_core_v1_sysctl.h
 *
 * Sysctl defines a kernel parameter to be set
 */

#ifndef _io_k8s_api_core_v1_sysctl_H_
#define _io_k8s_api_core_v1_sysctl_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_sysctl_t io_k8s_api_core_v1_sysctl_t;




typedef struct io_k8s_api_core_v1_sysctl_t {
    char *name; // string
    char *value; // string

} io_k8s_api_core_v1_sysctl_t;

io_k8s_api_core_v1_sysctl_t *io_k8s_api_core_v1_sysctl_create(
    char *name,
    char *value
);

void io_k8s_api_core_v1_sysctl_free(io_k8s_api_core_v1_sysctl_t *io_k8s_api_core_v1_sysctl);

io_k8s_api_core_v1_sysctl_t *io_k8s_api_core_v1_sysctl_parseFromJSON(cJSON *io_k8s_api_core_v1_sysctlJSON);

cJSON *io_k8s_api_core_v1_sysctl_convertToJSON(io_k8s_api_core_v1_sysctl_t *io_k8s_api_core_v1_sysctl);

#endif /* _io_k8s_api_core_v1_sysctl_H_ */

