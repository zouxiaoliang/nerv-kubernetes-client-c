/*
 * io_k8s_api_core_v1_ephemeral_container.h
 *
 * An EphemeralContainer is a container that may be added temporarily to an existing pod for user-initiated activities such as debugging. Ephemeral containers have no resource or scheduling guarantees, and they will not be restarted when they exit or when a pod is removed or restarted. If an ephemeral container causes a pod to exceed its resource allocation, the pod may be evicted. Ephemeral containers may not be added by directly updating the pod spec. They must be added via the pod&#39;s ephemeralcontainers subresource, and they will appear in the pod spec once added. This is an alpha feature enabled by the EphemeralContainers feature flag.
 */

#ifndef _io_k8s_api_core_v1_ephemeral_container_H_
#define _io_k8s_api_core_v1_ephemeral_container_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_ephemeral_container_t io_k8s_api_core_v1_ephemeral_container_t;

#include "io_k8s_api_core_v1_container_port.h"
#include "io_k8s_api_core_v1_env_from_source.h"
#include "io_k8s_api_core_v1_env_var.h"
#include "io_k8s_api_core_v1_lifecycle.h"
#include "io_k8s_api_core_v1_probe.h"
#include "io_k8s_api_core_v1_resource_requirements.h"
#include "io_k8s_api_core_v1_security_context.h"
#include "io_k8s_api_core_v1_volume_device.h"
#include "io_k8s_api_core_v1_volume_mount.h"



typedef struct io_k8s_api_core_v1_ephemeral_container_t {
    list_t *args; //primitive container
    list_t *command; //primitive container
    list_t *env; //nonprimitive container
    list_t *env_from; //nonprimitive container
    char *image; // string
    char *image_pull_policy; // string
    struct io_k8s_api_core_v1_lifecycle_t *lifecycle; //model
    struct io_k8s_api_core_v1_probe_t *liveness_probe; //model
    char *name; // string
    list_t *ports; //nonprimitive container
    struct io_k8s_api_core_v1_probe_t *readiness_probe; //model
    struct io_k8s_api_core_v1_resource_requirements_t *resources; //model
    struct io_k8s_api_core_v1_security_context_t *security_context; //model
    struct io_k8s_api_core_v1_probe_t *startup_probe; //model
    int stdin; //boolean
    int stdin_once; //boolean
    char *target_container_name; // string
    char *termination_message_path; // string
    char *termination_message_policy; // string
    int tty; //boolean
    list_t *volume_devices; //nonprimitive container
    list_t *volume_mounts; //nonprimitive container
    char *working_dir; // string

} io_k8s_api_core_v1_ephemeral_container_t;

io_k8s_api_core_v1_ephemeral_container_t *io_k8s_api_core_v1_ephemeral_container_create(
    list_t *args,
    list_t *command,
    list_t *env,
    list_t *env_from,
    char *image,
    char *image_pull_policy,
    io_k8s_api_core_v1_lifecycle_t *lifecycle,
    io_k8s_api_core_v1_probe_t *liveness_probe,
    char *name,
    list_t *ports,
    io_k8s_api_core_v1_probe_t *readiness_probe,
    io_k8s_api_core_v1_resource_requirements_t *resources,
    io_k8s_api_core_v1_security_context_t *security_context,
    io_k8s_api_core_v1_probe_t *startup_probe,
    int stdin,
    int stdin_once,
    char *target_container_name,
    char *termination_message_path,
    char *termination_message_policy,
    int tty,
    list_t *volume_devices,
    list_t *volume_mounts,
    char *working_dir
);

void io_k8s_api_core_v1_ephemeral_container_free(io_k8s_api_core_v1_ephemeral_container_t *io_k8s_api_core_v1_ephemeral_container);

io_k8s_api_core_v1_ephemeral_container_t *io_k8s_api_core_v1_ephemeral_container_parseFromJSON(cJSON *io_k8s_api_core_v1_ephemeral_containerJSON);

cJSON *io_k8s_api_core_v1_ephemeral_container_convertToJSON(io_k8s_api_core_v1_ephemeral_container_t *io_k8s_api_core_v1_ephemeral_container);

#endif /* _io_k8s_api_core_v1_ephemeral_container_H_ */

