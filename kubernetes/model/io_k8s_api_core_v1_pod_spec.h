/*
 * io_k8s_api_core_v1_pod_spec.h
 *
 * PodSpec is a description of a pod.
 */

#ifndef _io_k8s_api_core_v1_pod_spec_H_
#define _io_k8s_api_core_v1_pod_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_pod_spec_t io_k8s_api_core_v1_pod_spec_t;

#include "io_k8s_api_core_v1_affinity.h"
#include "io_k8s_api_core_v1_container.h"
#include "io_k8s_api_core_v1_ephemeral_container.h"
#include "io_k8s_api_core_v1_host_alias.h"
#include "io_k8s_api_core_v1_local_object_reference.h"
#include "io_k8s_api_core_v1_pod_dns_config.h"
#include "io_k8s_api_core_v1_pod_readiness_gate.h"
#include "io_k8s_api_core_v1_pod_security_context.h"
#include "io_k8s_api_core_v1_toleration.h"
#include "io_k8s_api_core_v1_topology_spread_constraint.h"
#include "io_k8s_api_core_v1_volume.h"



typedef struct io_k8s_api_core_v1_pod_spec_t {
    long active_deadline_seconds; //numeric
    struct io_k8s_api_core_v1_affinity_t *affinity; //model
    int automount_service_account_token; //boolean
    list_t *containers; //nonprimitive container
    struct io_k8s_api_core_v1_pod_dns_config_t *dns_config; //model
    char *dns_policy; // string
    int enable_service_links; //boolean
    list_t *ephemeral_containers; //nonprimitive container
    list_t *host_aliases; //nonprimitive container
    int host_ipc; //boolean
    int host_network; //boolean
    int host_pid; //boolean
    char *hostname; // string
    list_t *image_pull_secrets; //nonprimitive container
    list_t *init_containers; //nonprimitive container
    char *node_name; // string
    list_t* node_selector; //map
    list_t* overhead; //map
    char *preemption_policy; // string
    int priority; //numeric
    char *priority_class_name; // string
    list_t *readiness_gates; //nonprimitive container
    char *restart_policy; // string
    char *runtime_class_name; // string
    char *scheduler_name; // string
    struct io_k8s_api_core_v1_pod_security_context_t *security_context; //model
    char *service_account; // string
    char *service_account_name; // string
    int set_hostname_as_fqdn; //boolean
    int share_process_namespace; //boolean
    char *subdomain; // string
    long termination_grace_period_seconds; //numeric
    list_t *tolerations; //nonprimitive container
    list_t *topology_spread_constraints; //nonprimitive container
    list_t *volumes; //nonprimitive container

} io_k8s_api_core_v1_pod_spec_t;

io_k8s_api_core_v1_pod_spec_t *io_k8s_api_core_v1_pod_spec_create(
    long active_deadline_seconds,
    io_k8s_api_core_v1_affinity_t *affinity,
    int automount_service_account_token,
    list_t *containers,
    io_k8s_api_core_v1_pod_dns_config_t *dns_config,
    char *dns_policy,
    int enable_service_links,
    list_t *ephemeral_containers,
    list_t *host_aliases,
    int host_ipc,
    int host_network,
    int host_pid,
    char *hostname,
    list_t *image_pull_secrets,
    list_t *init_containers,
    char *node_name,
    list_t* node_selector,
    list_t* overhead,
    char *preemption_policy,
    int priority,
    char *priority_class_name,
    list_t *readiness_gates,
    char *restart_policy,
    char *runtime_class_name,
    char *scheduler_name,
    io_k8s_api_core_v1_pod_security_context_t *security_context,
    char *service_account,
    char *service_account_name,
    int set_hostname_as_fqdn,
    int share_process_namespace,
    char *subdomain,
    long termination_grace_period_seconds,
    list_t *tolerations,
    list_t *topology_spread_constraints,
    list_t *volumes
);

void io_k8s_api_core_v1_pod_spec_free(io_k8s_api_core_v1_pod_spec_t *io_k8s_api_core_v1_pod_spec);

io_k8s_api_core_v1_pod_spec_t *io_k8s_api_core_v1_pod_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_specJSON);

cJSON *io_k8s_api_core_v1_pod_spec_convertToJSON(io_k8s_api_core_v1_pod_spec_t *io_k8s_api_core_v1_pod_spec);

#endif /* _io_k8s_api_core_v1_pod_spec_H_ */

