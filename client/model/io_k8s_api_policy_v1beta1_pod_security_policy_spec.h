/*
 * io_k8s_api_policy_v1beta1_pod_security_policy_spec.h
 *
 * PodSecurityPolicySpec defines the policy enforced.
 */

#ifndef _io_k8s_api_policy_v1beta1_pod_security_policy_spec_H_
#define _io_k8s_api_policy_v1beta1_pod_security_policy_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_policy_v1beta1_pod_security_policy_spec_t io_k8s_api_policy_v1beta1_pod_security_policy_spec_t;

#include "io_k8s_api_policy_v1beta1_allowed_csi_driver.h"
#include "io_k8s_api_policy_v1beta1_allowed_flex_volume.h"
#include "io_k8s_api_policy_v1beta1_allowed_host_path.h"
#include "io_k8s_api_policy_v1beta1_fs_group_strategy_options.h"
#include "io_k8s_api_policy_v1beta1_host_port_range.h"
#include "io_k8s_api_policy_v1beta1_run_as_group_strategy_options.h"
#include "io_k8s_api_policy_v1beta1_run_as_user_strategy_options.h"
#include "io_k8s_api_policy_v1beta1_runtime_class_strategy_options.h"
#include "io_k8s_api_policy_v1beta1_se_linux_strategy_options.h"
#include "io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options.h"



typedef struct io_k8s_api_policy_v1beta1_pod_security_policy_spec_t {
    int allow_privilege_escalation; //boolean
    list_t *allowed_csi_drivers; //nonprimitive container
    list_t *allowed_capabilities; //primitive container
    list_t *allowed_flex_volumes; //nonprimitive container
    list_t *allowed_host_paths; //nonprimitive container
    list_t *allowed_proc_mount_types; //primitive container
    list_t *allowed_unsafe_sysctls; //primitive container
    list_t *default_add_capabilities; //primitive container
    int default_allow_privilege_escalation; //boolean
    list_t *forbidden_sysctls; //primitive container
    struct io_k8s_api_policy_v1beta1_fs_group_strategy_options_t *fs_group; //model
    int host_ipc; //boolean
    int host_network; //boolean
    int host_pid; //boolean
    list_t *host_ports; //nonprimitive container
    int privileged; //boolean
    int read_only_root_filesystem; //boolean
    list_t *required_drop_capabilities; //primitive container
    struct io_k8s_api_policy_v1beta1_run_as_group_strategy_options_t *run_as_group; //model
    struct io_k8s_api_policy_v1beta1_run_as_user_strategy_options_t *run_as_user; //model
    struct io_k8s_api_policy_v1beta1_runtime_class_strategy_options_t *runtime_class; //model
    struct io_k8s_api_policy_v1beta1_se_linux_strategy_options_t *se_linux; //model
    struct io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_t *supplemental_groups; //model
    list_t *volumes; //primitive container

} io_k8s_api_policy_v1beta1_pod_security_policy_spec_t;

io_k8s_api_policy_v1beta1_pod_security_policy_spec_t *io_k8s_api_policy_v1beta1_pod_security_policy_spec_create(
    int allow_privilege_escalation,
    list_t *allowed_csi_drivers,
    list_t *allowed_capabilities,
    list_t *allowed_flex_volumes,
    list_t *allowed_host_paths,
    list_t *allowed_proc_mount_types,
    list_t *allowed_unsafe_sysctls,
    list_t *default_add_capabilities,
    int default_allow_privilege_escalation,
    list_t *forbidden_sysctls,
    io_k8s_api_policy_v1beta1_fs_group_strategy_options_t *fs_group,
    int host_ipc,
    int host_network,
    int host_pid,
    list_t *host_ports,
    int privileged,
    int read_only_root_filesystem,
    list_t *required_drop_capabilities,
    io_k8s_api_policy_v1beta1_run_as_group_strategy_options_t *run_as_group,
    io_k8s_api_policy_v1beta1_run_as_user_strategy_options_t *run_as_user,
    io_k8s_api_policy_v1beta1_runtime_class_strategy_options_t *runtime_class,
    io_k8s_api_policy_v1beta1_se_linux_strategy_options_t *se_linux,
    io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_t *supplemental_groups,
    list_t *volumes
);

void io_k8s_api_policy_v1beta1_pod_security_policy_spec_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec_t *io_k8s_api_policy_v1beta1_pod_security_policy_spec);

io_k8s_api_policy_v1beta1_pod_security_policy_spec_t *io_k8s_api_policy_v1beta1_pod_security_policy_spec_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_pod_security_policy_specJSON);

cJSON *io_k8s_api_policy_v1beta1_pod_security_policy_spec_convertToJSON(io_k8s_api_policy_v1beta1_pod_security_policy_spec_t *io_k8s_api_policy_v1beta1_pod_security_policy_spec);

#endif /* _io_k8s_api_policy_v1beta1_pod_security_policy_spec_H_ */

