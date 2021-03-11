/*
 * io_k8s_api_core_v1_security_context.h
 *
 * SecurityContext holds security configuration that will be applied to a container. Some fields are present in both SecurityContext and PodSecurityContext.  When both are set, the values in SecurityContext take precedence.
 */

#ifndef _io_k8s_api_core_v1_security_context_H_
#define _io_k8s_api_core_v1_security_context_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_security_context_t io_k8s_api_core_v1_security_context_t;

#include "io_k8s_api_core_v1_capabilities.h"
#include "io_k8s_api_core_v1_se_linux_options.h"
#include "io_k8s_api_core_v1_seccomp_profile.h"
#include "io_k8s_api_core_v1_windows_security_context_options.h"



typedef struct io_k8s_api_core_v1_security_context_t {
    int allow_privilege_escalation; //boolean
    struct io_k8s_api_core_v1_capabilities_t *capabilities; //model
    int privileged; //boolean
    char *proc_mount; // string
    int read_only_root_filesystem; //boolean
    long run_as_group; //numeric
    int run_as_non_root; //boolean
    long run_as_user; //numeric
    struct io_k8s_api_core_v1_se_linux_options_t *se_linux_options; //model
    struct io_k8s_api_core_v1_seccomp_profile_t *seccomp_profile; //model
    struct io_k8s_api_core_v1_windows_security_context_options_t *windows_options; //model

} io_k8s_api_core_v1_security_context_t;

io_k8s_api_core_v1_security_context_t *io_k8s_api_core_v1_security_context_create(
    int allow_privilege_escalation,
    io_k8s_api_core_v1_capabilities_t *capabilities,
    int privileged,
    char *proc_mount,
    int read_only_root_filesystem,
    long run_as_group,
    int run_as_non_root,
    long run_as_user,
    io_k8s_api_core_v1_se_linux_options_t *se_linux_options,
    io_k8s_api_core_v1_seccomp_profile_t *seccomp_profile,
    io_k8s_api_core_v1_windows_security_context_options_t *windows_options
);

void io_k8s_api_core_v1_security_context_free(io_k8s_api_core_v1_security_context_t *io_k8s_api_core_v1_security_context);

io_k8s_api_core_v1_security_context_t *io_k8s_api_core_v1_security_context_parseFromJSON(cJSON *io_k8s_api_core_v1_security_contextJSON);

cJSON *io_k8s_api_core_v1_security_context_convertToJSON(io_k8s_api_core_v1_security_context_t *io_k8s_api_core_v1_security_context);

#endif /* _io_k8s_api_core_v1_security_context_H_ */

