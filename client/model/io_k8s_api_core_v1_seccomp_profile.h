/*
 * io_k8s_api_core_v1_seccomp_profile.h
 *
 * SeccompProfile defines a pod/container&#39;s seccomp profile settings. Only one profile source may be set.
 */

#ifndef _io_k8s_api_core_v1_seccomp_profile_H_
#define _io_k8s_api_core_v1_seccomp_profile_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_seccomp_profile_t io_k8s_api_core_v1_seccomp_profile_t;




typedef struct io_k8s_api_core_v1_seccomp_profile_t {
    char *localhost_profile; // string
    char *type; // string

} io_k8s_api_core_v1_seccomp_profile_t;

io_k8s_api_core_v1_seccomp_profile_t *io_k8s_api_core_v1_seccomp_profile_create(
    char *localhost_profile,
    char *type
);

void io_k8s_api_core_v1_seccomp_profile_free(io_k8s_api_core_v1_seccomp_profile_t *io_k8s_api_core_v1_seccomp_profile);

io_k8s_api_core_v1_seccomp_profile_t *io_k8s_api_core_v1_seccomp_profile_parseFromJSON(cJSON *io_k8s_api_core_v1_seccomp_profileJSON);

cJSON *io_k8s_api_core_v1_seccomp_profile_convertToJSON(io_k8s_api_core_v1_seccomp_profile_t *io_k8s_api_core_v1_seccomp_profile);

#endif /* _io_k8s_api_core_v1_seccomp_profile_H_ */

