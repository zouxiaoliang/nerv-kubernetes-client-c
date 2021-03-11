#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_policy_v1beta1_pod_security_policy_spec.h"



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
    ) {
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_t *io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var = malloc(sizeof(io_k8s_api_policy_v1beta1_pod_security_policy_spec_t));
    if (!io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var) {
        return NULL;
    }
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->allow_privilege_escalation = allow_privilege_escalation;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->allowed_csi_drivers = allowed_csi_drivers;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->allowed_capabilities = allowed_capabilities;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->allowed_flex_volumes = allowed_flex_volumes;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->allowed_host_paths = allowed_host_paths;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->allowed_proc_mount_types = allowed_proc_mount_types;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->allowed_unsafe_sysctls = allowed_unsafe_sysctls;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->default_add_capabilities = default_add_capabilities;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->default_allow_privilege_escalation = default_allow_privilege_escalation;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->forbidden_sysctls = forbidden_sysctls;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->fs_group = fs_group;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->host_ipc = host_ipc;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->host_network = host_network;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->host_pid = host_pid;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->host_ports = host_ports;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->privileged = privileged;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->read_only_root_filesystem = read_only_root_filesystem;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->required_drop_capabilities = required_drop_capabilities;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->run_as_group = run_as_group;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->run_as_user = run_as_user;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->runtime_class = runtime_class;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->se_linux = se_linux;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->supplemental_groups = supplemental_groups;
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var->volumes = volumes;

    return io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var;
}


void io_k8s_api_policy_v1beta1_pod_security_policy_spec_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec_t *io_k8s_api_policy_v1beta1_pod_security_policy_spec) {
    if(NULL == io_k8s_api_policy_v1beta1_pod_security_policy_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_csi_drivers) {
        list_ForEach(listEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_csi_drivers) {
            io_k8s_api_policy_v1beta1_allowed_csi_driver_free(listEntry->data);
        }
        list_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_csi_drivers);
        io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_csi_drivers = NULL;
    }
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_capabilities) {
        list_ForEach(listEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_capabilities) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_capabilities);
        io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_capabilities = NULL;
    }
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_flex_volumes) {
        list_ForEach(listEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_flex_volumes) {
            io_k8s_api_policy_v1beta1_allowed_flex_volume_free(listEntry->data);
        }
        list_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_flex_volumes);
        io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_flex_volumes = NULL;
    }
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_host_paths) {
        list_ForEach(listEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_host_paths) {
            io_k8s_api_policy_v1beta1_allowed_host_path_free(listEntry->data);
        }
        list_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_host_paths);
        io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_host_paths = NULL;
    }
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_proc_mount_types) {
        list_ForEach(listEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_proc_mount_types) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_proc_mount_types);
        io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_proc_mount_types = NULL;
    }
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_unsafe_sysctls) {
        list_ForEach(listEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_unsafe_sysctls) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_unsafe_sysctls);
        io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_unsafe_sysctls = NULL;
    }
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->default_add_capabilities) {
        list_ForEach(listEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->default_add_capabilities) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec->default_add_capabilities);
        io_k8s_api_policy_v1beta1_pod_security_policy_spec->default_add_capabilities = NULL;
    }
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->forbidden_sysctls) {
        list_ForEach(listEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->forbidden_sysctls) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec->forbidden_sysctls);
        io_k8s_api_policy_v1beta1_pod_security_policy_spec->forbidden_sysctls = NULL;
    }
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->fs_group) {
        io_k8s_api_policy_v1beta1_fs_group_strategy_options_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec->fs_group);
        io_k8s_api_policy_v1beta1_pod_security_policy_spec->fs_group = NULL;
    }
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_ports) {
        list_ForEach(listEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_ports) {
            io_k8s_api_policy_v1beta1_host_port_range_free(listEntry->data);
        }
        list_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_ports);
        io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_ports = NULL;
    }
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->required_drop_capabilities) {
        list_ForEach(listEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->required_drop_capabilities) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec->required_drop_capabilities);
        io_k8s_api_policy_v1beta1_pod_security_policy_spec->required_drop_capabilities = NULL;
    }
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->run_as_group) {
        io_k8s_api_policy_v1beta1_run_as_group_strategy_options_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec->run_as_group);
        io_k8s_api_policy_v1beta1_pod_security_policy_spec->run_as_group = NULL;
    }
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->run_as_user) {
        io_k8s_api_policy_v1beta1_run_as_user_strategy_options_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec->run_as_user);
        io_k8s_api_policy_v1beta1_pod_security_policy_spec->run_as_user = NULL;
    }
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->runtime_class) {
        io_k8s_api_policy_v1beta1_runtime_class_strategy_options_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec->runtime_class);
        io_k8s_api_policy_v1beta1_pod_security_policy_spec->runtime_class = NULL;
    }
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->se_linux) {
        io_k8s_api_policy_v1beta1_se_linux_strategy_options_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec->se_linux);
        io_k8s_api_policy_v1beta1_pod_security_policy_spec->se_linux = NULL;
    }
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->supplemental_groups) {
        io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec->supplemental_groups);
        io_k8s_api_policy_v1beta1_pod_security_policy_spec->supplemental_groups = NULL;
    }
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->volumes) {
        list_ForEach(listEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->volumes) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_policy_v1beta1_pod_security_policy_spec->volumes);
        io_k8s_api_policy_v1beta1_pod_security_policy_spec->volumes = NULL;
    }
    free(io_k8s_api_policy_v1beta1_pod_security_policy_spec);
}

cJSON *io_k8s_api_policy_v1beta1_pod_security_policy_spec_convertToJSON(io_k8s_api_policy_v1beta1_pod_security_policy_spec_t *io_k8s_api_policy_v1beta1_pod_security_policy_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->allow_privilege_escalation
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->allow_privilege_escalation) { 
    if(cJSON_AddBoolToObject(item, "allowPrivilegeEscalation", io_k8s_api_policy_v1beta1_pod_security_policy_spec->allow_privilege_escalation) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_csi_drivers
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_csi_drivers) { 
    cJSON *allowed_csi_drivers = cJSON_AddArrayToObject(item, "allowedCSIDrivers");
    if(allowed_csi_drivers == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *allowed_csi_driversListEntry;
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_csi_drivers) {
    list_ForEach(allowed_csi_driversListEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_csi_drivers) {
    cJSON *itemLocal = io_k8s_api_policy_v1beta1_allowed_csi_driver_convertToJSON(allowed_csi_driversListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(allowed_csi_drivers, itemLocal);
    }
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_capabilities
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_capabilities) { 
    cJSON *allowed_capabilities = cJSON_AddArrayToObject(item, "allowedCapabilities");
    if(allowed_capabilities == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *allowed_capabilitiesListEntry;
    list_ForEach(allowed_capabilitiesListEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_capabilities) {
    if(cJSON_AddStringToObject(allowed_capabilities, "", (char*)allowed_capabilitiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_flex_volumes
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_flex_volumes) { 
    cJSON *allowed_flex_volumes = cJSON_AddArrayToObject(item, "allowedFlexVolumes");
    if(allowed_flex_volumes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *allowed_flex_volumesListEntry;
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_flex_volumes) {
    list_ForEach(allowed_flex_volumesListEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_flex_volumes) {
    cJSON *itemLocal = io_k8s_api_policy_v1beta1_allowed_flex_volume_convertToJSON(allowed_flex_volumesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(allowed_flex_volumes, itemLocal);
    }
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_host_paths
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_host_paths) { 
    cJSON *allowed_host_paths = cJSON_AddArrayToObject(item, "allowedHostPaths");
    if(allowed_host_paths == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *allowed_host_pathsListEntry;
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_host_paths) {
    list_ForEach(allowed_host_pathsListEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_host_paths) {
    cJSON *itemLocal = io_k8s_api_policy_v1beta1_allowed_host_path_convertToJSON(allowed_host_pathsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(allowed_host_paths, itemLocal);
    }
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_proc_mount_types
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_proc_mount_types) { 
    cJSON *allowed_proc_mount_types = cJSON_AddArrayToObject(item, "allowedProcMountTypes");
    if(allowed_proc_mount_types == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *allowed_proc_mount_typesListEntry;
    list_ForEach(allowed_proc_mount_typesListEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_proc_mount_types) {
    if(cJSON_AddStringToObject(allowed_proc_mount_types, "", (char*)allowed_proc_mount_typesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_unsafe_sysctls
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_unsafe_sysctls) { 
    cJSON *allowed_unsafe_sysctls = cJSON_AddArrayToObject(item, "allowedUnsafeSysctls");
    if(allowed_unsafe_sysctls == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *allowed_unsafe_sysctlsListEntry;
    list_ForEach(allowed_unsafe_sysctlsListEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_unsafe_sysctls) {
    if(cJSON_AddStringToObject(allowed_unsafe_sysctls, "", (char*)allowed_unsafe_sysctlsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->default_add_capabilities
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->default_add_capabilities) { 
    cJSON *default_add_capabilities = cJSON_AddArrayToObject(item, "defaultAddCapabilities");
    if(default_add_capabilities == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *default_add_capabilitiesListEntry;
    list_ForEach(default_add_capabilitiesListEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->default_add_capabilities) {
    if(cJSON_AddStringToObject(default_add_capabilities, "", (char*)default_add_capabilitiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->default_allow_privilege_escalation
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->default_allow_privilege_escalation) { 
    if(cJSON_AddBoolToObject(item, "defaultAllowPrivilegeEscalation", io_k8s_api_policy_v1beta1_pod_security_policy_spec->default_allow_privilege_escalation) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->forbidden_sysctls
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->forbidden_sysctls) { 
    cJSON *forbidden_sysctls = cJSON_AddArrayToObject(item, "forbiddenSysctls");
    if(forbidden_sysctls == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *forbidden_sysctlsListEntry;
    list_ForEach(forbidden_sysctlsListEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->forbidden_sysctls) {
    if(cJSON_AddStringToObject(forbidden_sysctls, "", (char*)forbidden_sysctlsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->fs_group
    if (!io_k8s_api_policy_v1beta1_pod_security_policy_spec->fs_group) {
        goto fail;
    }
    
    cJSON *fs_group_local_JSON = io_k8s_api_policy_v1beta1_fs_group_strategy_options_convertToJSON(io_k8s_api_policy_v1beta1_pod_security_policy_spec->fs_group);
    if(fs_group_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "fsGroup", fs_group_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_ipc
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_ipc) { 
    if(cJSON_AddBoolToObject(item, "hostIPC", io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_ipc) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_network
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_network) { 
    if(cJSON_AddBoolToObject(item, "hostNetwork", io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_network) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_pid
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_pid) { 
    if(cJSON_AddBoolToObject(item, "hostPID", io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_pid) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_ports
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_ports) { 
    cJSON *host_ports = cJSON_AddArrayToObject(item, "hostPorts");
    if(host_ports == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *host_portsListEntry;
    if (io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_ports) {
    list_ForEach(host_portsListEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_ports) {
    cJSON *itemLocal = io_k8s_api_policy_v1beta1_host_port_range_convertToJSON(host_portsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(host_ports, itemLocal);
    }
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->privileged
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->privileged) { 
    if(cJSON_AddBoolToObject(item, "privileged", io_k8s_api_policy_v1beta1_pod_security_policy_spec->privileged) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->read_only_root_filesystem
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->read_only_root_filesystem) { 
    if(cJSON_AddBoolToObject(item, "readOnlyRootFilesystem", io_k8s_api_policy_v1beta1_pod_security_policy_spec->read_only_root_filesystem) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->required_drop_capabilities
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->required_drop_capabilities) { 
    cJSON *required_drop_capabilities = cJSON_AddArrayToObject(item, "requiredDropCapabilities");
    if(required_drop_capabilities == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *required_drop_capabilitiesListEntry;
    list_ForEach(required_drop_capabilitiesListEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->required_drop_capabilities) {
    if(cJSON_AddStringToObject(required_drop_capabilities, "", (char*)required_drop_capabilitiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->run_as_group
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->run_as_group) { 
    cJSON *run_as_group_local_JSON = io_k8s_api_policy_v1beta1_run_as_group_strategy_options_convertToJSON(io_k8s_api_policy_v1beta1_pod_security_policy_spec->run_as_group);
    if(run_as_group_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "runAsGroup", run_as_group_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->run_as_user
    if (!io_k8s_api_policy_v1beta1_pod_security_policy_spec->run_as_user) {
        goto fail;
    }
    
    cJSON *run_as_user_local_JSON = io_k8s_api_policy_v1beta1_run_as_user_strategy_options_convertToJSON(io_k8s_api_policy_v1beta1_pod_security_policy_spec->run_as_user);
    if(run_as_user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "runAsUser", run_as_user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->runtime_class
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->runtime_class) { 
    cJSON *runtime_class_local_JSON = io_k8s_api_policy_v1beta1_runtime_class_strategy_options_convertToJSON(io_k8s_api_policy_v1beta1_pod_security_policy_spec->runtime_class);
    if(runtime_class_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "runtimeClass", runtime_class_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->se_linux
    if (!io_k8s_api_policy_v1beta1_pod_security_policy_spec->se_linux) {
        goto fail;
    }
    
    cJSON *se_linux_local_JSON = io_k8s_api_policy_v1beta1_se_linux_strategy_options_convertToJSON(io_k8s_api_policy_v1beta1_pod_security_policy_spec->se_linux);
    if(se_linux_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "seLinux", se_linux_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->supplemental_groups
    if (!io_k8s_api_policy_v1beta1_pod_security_policy_spec->supplemental_groups) {
        goto fail;
    }
    
    cJSON *supplemental_groups_local_JSON = io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_convertToJSON(io_k8s_api_policy_v1beta1_pod_security_policy_spec->supplemental_groups);
    if(supplemental_groups_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "supplementalGroups", supplemental_groups_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->volumes
    if(io_k8s_api_policy_v1beta1_pod_security_policy_spec->volumes) { 
    cJSON *volumes = cJSON_AddArrayToObject(item, "volumes");
    if(volumes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *volumesListEntry;
    list_ForEach(volumesListEntry, io_k8s_api_policy_v1beta1_pod_security_policy_spec->volumes) {
    if(cJSON_AddStringToObject(volumes, "", (char*)volumesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_policy_v1beta1_pod_security_policy_spec_t *io_k8s_api_policy_v1beta1_pod_security_policy_spec_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_pod_security_policy_specJSON){

    io_k8s_api_policy_v1beta1_pod_security_policy_spec_t *io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var = NULL;

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->allow_privilege_escalation
    cJSON *allow_privilege_escalation = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "allowPrivilegeEscalation");
    if (allow_privilege_escalation) { 
    if(!cJSON_IsBool(allow_privilege_escalation))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_csi_drivers
    cJSON *allowed_csi_drivers = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "allowedCSIDrivers");
    list_t *allowed_csi_driversList;
    if (allowed_csi_drivers) { 
    cJSON *allowed_csi_drivers_local_nonprimitive;
    if(!cJSON_IsArray(allowed_csi_drivers)){
        goto end; //nonprimitive container
    }

    allowed_csi_driversList = list_create();

    cJSON_ArrayForEach(allowed_csi_drivers_local_nonprimitive,allowed_csi_drivers )
    {
        if(!cJSON_IsObject(allowed_csi_drivers_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_policy_v1beta1_allowed_csi_driver_t *allowed_csi_driversItem = io_k8s_api_policy_v1beta1_allowed_csi_driver_parseFromJSON(allowed_csi_drivers_local_nonprimitive);

        list_addElement(allowed_csi_driversList, allowed_csi_driversItem);
    }
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_capabilities
    cJSON *allowed_capabilities = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "allowedCapabilities");
    list_t *allowed_capabilitiesList;
    if (allowed_capabilities) { 
    cJSON *allowed_capabilities_local;
    if(!cJSON_IsArray(allowed_capabilities)) {
        goto end;//primitive container
    }
    allowed_capabilitiesList = list_create();

    cJSON_ArrayForEach(allowed_capabilities_local, allowed_capabilities)
    {
        if(!cJSON_IsString(allowed_capabilities_local))
        {
            goto end;
        }
        list_addElement(allowed_capabilitiesList , strdup(allowed_capabilities_local->valuestring));
    }
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_flex_volumes
    cJSON *allowed_flex_volumes = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "allowedFlexVolumes");
    list_t *allowed_flex_volumesList;
    if (allowed_flex_volumes) { 
    cJSON *allowed_flex_volumes_local_nonprimitive;
    if(!cJSON_IsArray(allowed_flex_volumes)){
        goto end; //nonprimitive container
    }

    allowed_flex_volumesList = list_create();

    cJSON_ArrayForEach(allowed_flex_volumes_local_nonprimitive,allowed_flex_volumes )
    {
        if(!cJSON_IsObject(allowed_flex_volumes_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_policy_v1beta1_allowed_flex_volume_t *allowed_flex_volumesItem = io_k8s_api_policy_v1beta1_allowed_flex_volume_parseFromJSON(allowed_flex_volumes_local_nonprimitive);

        list_addElement(allowed_flex_volumesList, allowed_flex_volumesItem);
    }
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_host_paths
    cJSON *allowed_host_paths = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "allowedHostPaths");
    list_t *allowed_host_pathsList;
    if (allowed_host_paths) { 
    cJSON *allowed_host_paths_local_nonprimitive;
    if(!cJSON_IsArray(allowed_host_paths)){
        goto end; //nonprimitive container
    }

    allowed_host_pathsList = list_create();

    cJSON_ArrayForEach(allowed_host_paths_local_nonprimitive,allowed_host_paths )
    {
        if(!cJSON_IsObject(allowed_host_paths_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_policy_v1beta1_allowed_host_path_t *allowed_host_pathsItem = io_k8s_api_policy_v1beta1_allowed_host_path_parseFromJSON(allowed_host_paths_local_nonprimitive);

        list_addElement(allowed_host_pathsList, allowed_host_pathsItem);
    }
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_proc_mount_types
    cJSON *allowed_proc_mount_types = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "allowedProcMountTypes");
    list_t *allowed_proc_mount_typesList;
    if (allowed_proc_mount_types) { 
    cJSON *allowed_proc_mount_types_local;
    if(!cJSON_IsArray(allowed_proc_mount_types)) {
        goto end;//primitive container
    }
    allowed_proc_mount_typesList = list_create();

    cJSON_ArrayForEach(allowed_proc_mount_types_local, allowed_proc_mount_types)
    {
        if(!cJSON_IsString(allowed_proc_mount_types_local))
        {
            goto end;
        }
        list_addElement(allowed_proc_mount_typesList , strdup(allowed_proc_mount_types_local->valuestring));
    }
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->allowed_unsafe_sysctls
    cJSON *allowed_unsafe_sysctls = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "allowedUnsafeSysctls");
    list_t *allowed_unsafe_sysctlsList;
    if (allowed_unsafe_sysctls) { 
    cJSON *allowed_unsafe_sysctls_local;
    if(!cJSON_IsArray(allowed_unsafe_sysctls)) {
        goto end;//primitive container
    }
    allowed_unsafe_sysctlsList = list_create();

    cJSON_ArrayForEach(allowed_unsafe_sysctls_local, allowed_unsafe_sysctls)
    {
        if(!cJSON_IsString(allowed_unsafe_sysctls_local))
        {
            goto end;
        }
        list_addElement(allowed_unsafe_sysctlsList , strdup(allowed_unsafe_sysctls_local->valuestring));
    }
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->default_add_capabilities
    cJSON *default_add_capabilities = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "defaultAddCapabilities");
    list_t *default_add_capabilitiesList;
    if (default_add_capabilities) { 
    cJSON *default_add_capabilities_local;
    if(!cJSON_IsArray(default_add_capabilities)) {
        goto end;//primitive container
    }
    default_add_capabilitiesList = list_create();

    cJSON_ArrayForEach(default_add_capabilities_local, default_add_capabilities)
    {
        if(!cJSON_IsString(default_add_capabilities_local))
        {
            goto end;
        }
        list_addElement(default_add_capabilitiesList , strdup(default_add_capabilities_local->valuestring));
    }
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->default_allow_privilege_escalation
    cJSON *default_allow_privilege_escalation = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "defaultAllowPrivilegeEscalation");
    if (default_allow_privilege_escalation) { 
    if(!cJSON_IsBool(default_allow_privilege_escalation))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->forbidden_sysctls
    cJSON *forbidden_sysctls = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "forbiddenSysctls");
    list_t *forbidden_sysctlsList;
    if (forbidden_sysctls) { 
    cJSON *forbidden_sysctls_local;
    if(!cJSON_IsArray(forbidden_sysctls)) {
        goto end;//primitive container
    }
    forbidden_sysctlsList = list_create();

    cJSON_ArrayForEach(forbidden_sysctls_local, forbidden_sysctls)
    {
        if(!cJSON_IsString(forbidden_sysctls_local))
        {
            goto end;
        }
        list_addElement(forbidden_sysctlsList , strdup(forbidden_sysctls_local->valuestring));
    }
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->fs_group
    cJSON *fs_group = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "fsGroup");
    if (!fs_group) {
        goto end;
    }

    io_k8s_api_policy_v1beta1_fs_group_strategy_options_t *fs_group_local_nonprim = NULL;
    
    fs_group_local_nonprim = io_k8s_api_policy_v1beta1_fs_group_strategy_options_parseFromJSON(fs_group); //nonprimitive

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_ipc
    cJSON *host_ipc = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "hostIPC");
    if (host_ipc) { 
    if(!cJSON_IsBool(host_ipc))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_network
    cJSON *host_network = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "hostNetwork");
    if (host_network) { 
    if(!cJSON_IsBool(host_network))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_pid
    cJSON *host_pid = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "hostPID");
    if (host_pid) { 
    if(!cJSON_IsBool(host_pid))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->host_ports
    cJSON *host_ports = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "hostPorts");
    list_t *host_portsList;
    if (host_ports) { 
    cJSON *host_ports_local_nonprimitive;
    if(!cJSON_IsArray(host_ports)){
        goto end; //nonprimitive container
    }

    host_portsList = list_create();

    cJSON_ArrayForEach(host_ports_local_nonprimitive,host_ports )
    {
        if(!cJSON_IsObject(host_ports_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_policy_v1beta1_host_port_range_t *host_portsItem = io_k8s_api_policy_v1beta1_host_port_range_parseFromJSON(host_ports_local_nonprimitive);

        list_addElement(host_portsList, host_portsItem);
    }
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->privileged
    cJSON *privileged = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "privileged");
    if (privileged) { 
    if(!cJSON_IsBool(privileged))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->read_only_root_filesystem
    cJSON *read_only_root_filesystem = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "readOnlyRootFilesystem");
    if (read_only_root_filesystem) { 
    if(!cJSON_IsBool(read_only_root_filesystem))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->required_drop_capabilities
    cJSON *required_drop_capabilities = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "requiredDropCapabilities");
    list_t *required_drop_capabilitiesList;
    if (required_drop_capabilities) { 
    cJSON *required_drop_capabilities_local;
    if(!cJSON_IsArray(required_drop_capabilities)) {
        goto end;//primitive container
    }
    required_drop_capabilitiesList = list_create();

    cJSON_ArrayForEach(required_drop_capabilities_local, required_drop_capabilities)
    {
        if(!cJSON_IsString(required_drop_capabilities_local))
        {
            goto end;
        }
        list_addElement(required_drop_capabilitiesList , strdup(required_drop_capabilities_local->valuestring));
    }
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->run_as_group
    cJSON *run_as_group = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "runAsGroup");
    io_k8s_api_policy_v1beta1_run_as_group_strategy_options_t *run_as_group_local_nonprim = NULL;
    if (run_as_group) { 
    run_as_group_local_nonprim = io_k8s_api_policy_v1beta1_run_as_group_strategy_options_parseFromJSON(run_as_group); //nonprimitive
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->run_as_user
    cJSON *run_as_user = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "runAsUser");
    if (!run_as_user) {
        goto end;
    }

    io_k8s_api_policy_v1beta1_run_as_user_strategy_options_t *run_as_user_local_nonprim = NULL;
    
    run_as_user_local_nonprim = io_k8s_api_policy_v1beta1_run_as_user_strategy_options_parseFromJSON(run_as_user); //nonprimitive

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->runtime_class
    cJSON *runtime_class = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "runtimeClass");
    io_k8s_api_policy_v1beta1_runtime_class_strategy_options_t *runtime_class_local_nonprim = NULL;
    if (runtime_class) { 
    runtime_class_local_nonprim = io_k8s_api_policy_v1beta1_runtime_class_strategy_options_parseFromJSON(runtime_class); //nonprimitive
    }

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->se_linux
    cJSON *se_linux = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "seLinux");
    if (!se_linux) {
        goto end;
    }

    io_k8s_api_policy_v1beta1_se_linux_strategy_options_t *se_linux_local_nonprim = NULL;
    
    se_linux_local_nonprim = io_k8s_api_policy_v1beta1_se_linux_strategy_options_parseFromJSON(se_linux); //nonprimitive

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->supplemental_groups
    cJSON *supplemental_groups = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "supplementalGroups");
    if (!supplemental_groups) {
        goto end;
    }

    io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_t *supplemental_groups_local_nonprim = NULL;
    
    supplemental_groups_local_nonprim = io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_parseFromJSON(supplemental_groups); //nonprimitive

    // io_k8s_api_policy_v1beta1_pod_security_policy_spec->volumes
    cJSON *volumes = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_security_policy_specJSON, "volumes");
    list_t *volumesList;
    if (volumes) { 
    cJSON *volumes_local;
    if(!cJSON_IsArray(volumes)) {
        goto end;//primitive container
    }
    volumesList = list_create();

    cJSON_ArrayForEach(volumes_local, volumes)
    {
        if(!cJSON_IsString(volumes_local))
        {
            goto end;
        }
        list_addElement(volumesList , strdup(volumes_local->valuestring));
    }
    }


    io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var = io_k8s_api_policy_v1beta1_pod_security_policy_spec_create (
        allow_privilege_escalation ? allow_privilege_escalation->valueint : 0,
        allowed_csi_drivers ? allowed_csi_driversList : NULL,
        allowed_capabilities ? allowed_capabilitiesList : NULL,
        allowed_flex_volumes ? allowed_flex_volumesList : NULL,
        allowed_host_paths ? allowed_host_pathsList : NULL,
        allowed_proc_mount_types ? allowed_proc_mount_typesList : NULL,
        allowed_unsafe_sysctls ? allowed_unsafe_sysctlsList : NULL,
        default_add_capabilities ? default_add_capabilitiesList : NULL,
        default_allow_privilege_escalation ? default_allow_privilege_escalation->valueint : 0,
        forbidden_sysctls ? forbidden_sysctlsList : NULL,
        fs_group_local_nonprim,
        host_ipc ? host_ipc->valueint : 0,
        host_network ? host_network->valueint : 0,
        host_pid ? host_pid->valueint : 0,
        host_ports ? host_portsList : NULL,
        privileged ? privileged->valueint : 0,
        read_only_root_filesystem ? read_only_root_filesystem->valueint : 0,
        required_drop_capabilities ? required_drop_capabilitiesList : NULL,
        run_as_group ? run_as_group_local_nonprim : NULL,
        run_as_user_local_nonprim,
        runtime_class ? runtime_class_local_nonprim : NULL,
        se_linux_local_nonprim,
        supplemental_groups_local_nonprim,
        volumes ? volumesList : NULL
        );

    return io_k8s_api_policy_v1beta1_pod_security_policy_spec_local_var;
end:
    if (fs_group_local_nonprim) {
        io_k8s_api_policy_v1beta1_fs_group_strategy_options_free(fs_group_local_nonprim);
        fs_group_local_nonprim = NULL;
    }
    if (run_as_group_local_nonprim) {
        io_k8s_api_policy_v1beta1_run_as_group_strategy_options_free(run_as_group_local_nonprim);
        run_as_group_local_nonprim = NULL;
    }
    if (run_as_user_local_nonprim) {
        io_k8s_api_policy_v1beta1_run_as_user_strategy_options_free(run_as_user_local_nonprim);
        run_as_user_local_nonprim = NULL;
    }
    if (runtime_class_local_nonprim) {
        io_k8s_api_policy_v1beta1_runtime_class_strategy_options_free(runtime_class_local_nonprim);
        runtime_class_local_nonprim = NULL;
    }
    if (se_linux_local_nonprim) {
        io_k8s_api_policy_v1beta1_se_linux_strategy_options_free(se_linux_local_nonprim);
        se_linux_local_nonprim = NULL;
    }
    if (supplemental_groups_local_nonprim) {
        io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_free(supplemental_groups_local_nonprim);
        supplemental_groups_local_nonprim = NULL;
    }
    return NULL;

}
