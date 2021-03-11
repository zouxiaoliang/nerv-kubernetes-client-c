/*
 * io_k8s_api_policy_v1beta1_allowed_host_path.h
 *
 * AllowedHostPath defines the host volume conditions that will be enabled by a policy for pods to use. It requires the path prefix to be defined.
 */

#ifndef _io_k8s_api_policy_v1beta1_allowed_host_path_H_
#define _io_k8s_api_policy_v1beta1_allowed_host_path_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_policy_v1beta1_allowed_host_path_t io_k8s_api_policy_v1beta1_allowed_host_path_t;




typedef struct io_k8s_api_policy_v1beta1_allowed_host_path_t {
    char *path_prefix; // string
    int read_only; //boolean

} io_k8s_api_policy_v1beta1_allowed_host_path_t;

io_k8s_api_policy_v1beta1_allowed_host_path_t *io_k8s_api_policy_v1beta1_allowed_host_path_create(
    char *path_prefix,
    int read_only
);

void io_k8s_api_policy_v1beta1_allowed_host_path_free(io_k8s_api_policy_v1beta1_allowed_host_path_t *io_k8s_api_policy_v1beta1_allowed_host_path);

io_k8s_api_policy_v1beta1_allowed_host_path_t *io_k8s_api_policy_v1beta1_allowed_host_path_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_allowed_host_pathJSON);

cJSON *io_k8s_api_policy_v1beta1_allowed_host_path_convertToJSON(io_k8s_api_policy_v1beta1_allowed_host_path_t *io_k8s_api_policy_v1beta1_allowed_host_path);

#endif /* _io_k8s_api_policy_v1beta1_allowed_host_path_H_ */

