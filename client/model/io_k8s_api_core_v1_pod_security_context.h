/*
 * io_k8s_api_core_v1_pod_security_context.h
 *
 * PodSecurityContext holds pod-level security attributes and common container settings. Some fields are also present in container.securityContext.  Field values of container.securityContext take precedence over field values of PodSecurityContext.
 */

#ifndef _io_k8s_api_core_v1_pod_security_context_H_
#define _io_k8s_api_core_v1_pod_security_context_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_pod_security_context_t io_k8s_api_core_v1_pod_security_context_t;

#include "io_k8s_api_core_v1_se_linux_options.h"
#include "io_k8s_api_core_v1_seccomp_profile.h"
#include "io_k8s_api_core_v1_sysctl.h"
#include "io_k8s_api_core_v1_windows_security_context_options.h"



typedef struct io_k8s_api_core_v1_pod_security_context_t {
    long fs_group; //numeric
    char *fs_group_change_policy; // string
    long run_as_group; //numeric
    int run_as_non_root; //boolean
    long run_as_user; //numeric
    struct io_k8s_api_core_v1_se_linux_options_t *se_linux_options; //model
    struct io_k8s_api_core_v1_seccomp_profile_t *seccomp_profile; //model
    list_t *supplemental_groups; //primitive container
    list_t *sysctls; //nonprimitive container
    struct io_k8s_api_core_v1_windows_security_context_options_t *windows_options; //model

} io_k8s_api_core_v1_pod_security_context_t;

io_k8s_api_core_v1_pod_security_context_t *io_k8s_api_core_v1_pod_security_context_create(
    long fs_group,
    char *fs_group_change_policy,
    long run_as_group,
    int run_as_non_root,
    long run_as_user,
    io_k8s_api_core_v1_se_linux_options_t *se_linux_options,
    io_k8s_api_core_v1_seccomp_profile_t *seccomp_profile,
    list_t *supplemental_groups,
    list_t *sysctls,
    io_k8s_api_core_v1_windows_security_context_options_t *windows_options
);

void io_k8s_api_core_v1_pod_security_context_free(io_k8s_api_core_v1_pod_security_context_t *io_k8s_api_core_v1_pod_security_context);

io_k8s_api_core_v1_pod_security_context_t *io_k8s_api_core_v1_pod_security_context_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_security_contextJSON);

cJSON *io_k8s_api_core_v1_pod_security_context_convertToJSON(io_k8s_api_core_v1_pod_security_context_t *io_k8s_api_core_v1_pod_security_context);

#endif /* _io_k8s_api_core_v1_pod_security_context_H_ */

