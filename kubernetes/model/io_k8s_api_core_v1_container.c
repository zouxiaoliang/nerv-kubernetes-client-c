#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_container.h"



io_k8s_api_core_v1_container_t *io_k8s_api_core_v1_container_create(
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
    char *termination_message_path,
    char *termination_message_policy,
    int tty,
    list_t *volume_devices,
    list_t *volume_mounts,
    char *working_dir
    ) {
    io_k8s_api_core_v1_container_t *io_k8s_api_core_v1_container_local_var = malloc(sizeof(io_k8s_api_core_v1_container_t));
    if (!io_k8s_api_core_v1_container_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_container_local_var->args = args;
    io_k8s_api_core_v1_container_local_var->command = command;
    io_k8s_api_core_v1_container_local_var->env = env;
    io_k8s_api_core_v1_container_local_var->env_from = env_from;
    io_k8s_api_core_v1_container_local_var->image = image;
    io_k8s_api_core_v1_container_local_var->image_pull_policy = image_pull_policy;
    io_k8s_api_core_v1_container_local_var->lifecycle = lifecycle;
    io_k8s_api_core_v1_container_local_var->liveness_probe = liveness_probe;
    io_k8s_api_core_v1_container_local_var->name = name;
    io_k8s_api_core_v1_container_local_var->ports = ports;
    io_k8s_api_core_v1_container_local_var->readiness_probe = readiness_probe;
    io_k8s_api_core_v1_container_local_var->resources = resources;
    io_k8s_api_core_v1_container_local_var->security_context = security_context;
    io_k8s_api_core_v1_container_local_var->startup_probe = startup_probe;
    io_k8s_api_core_v1_container_local_var->stdin = stdin;
    io_k8s_api_core_v1_container_local_var->stdin_once = stdin_once;
    io_k8s_api_core_v1_container_local_var->termination_message_path = termination_message_path;
    io_k8s_api_core_v1_container_local_var->termination_message_policy = termination_message_policy;
    io_k8s_api_core_v1_container_local_var->tty = tty;
    io_k8s_api_core_v1_container_local_var->volume_devices = volume_devices;
    io_k8s_api_core_v1_container_local_var->volume_mounts = volume_mounts;
    io_k8s_api_core_v1_container_local_var->working_dir = working_dir;

    return io_k8s_api_core_v1_container_local_var;
}


void io_k8s_api_core_v1_container_free(io_k8s_api_core_v1_container_t *io_k8s_api_core_v1_container) {
    if(NULL == io_k8s_api_core_v1_container){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_container->args) {
        list_ForEach(listEntry, io_k8s_api_core_v1_container->args) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_container->args);
        io_k8s_api_core_v1_container->args = NULL;
    }
    if (io_k8s_api_core_v1_container->command) {
        list_ForEach(listEntry, io_k8s_api_core_v1_container->command) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_container->command);
        io_k8s_api_core_v1_container->command = NULL;
    }
    if (io_k8s_api_core_v1_container->env) {
        list_ForEach(listEntry, io_k8s_api_core_v1_container->env) {
            io_k8s_api_core_v1_env_var_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_container->env);
        io_k8s_api_core_v1_container->env = NULL;
    }
    if (io_k8s_api_core_v1_container->env_from) {
        list_ForEach(listEntry, io_k8s_api_core_v1_container->env_from) {
            io_k8s_api_core_v1_env_from_source_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_container->env_from);
        io_k8s_api_core_v1_container->env_from = NULL;
    }
    if (io_k8s_api_core_v1_container->image) {
        free(io_k8s_api_core_v1_container->image);
        io_k8s_api_core_v1_container->image = NULL;
    }
    if (io_k8s_api_core_v1_container->image_pull_policy) {
        free(io_k8s_api_core_v1_container->image_pull_policy);
        io_k8s_api_core_v1_container->image_pull_policy = NULL;
    }
    if (io_k8s_api_core_v1_container->lifecycle) {
        io_k8s_api_core_v1_lifecycle_free(io_k8s_api_core_v1_container->lifecycle);
        io_k8s_api_core_v1_container->lifecycle = NULL;
    }
    if (io_k8s_api_core_v1_container->liveness_probe) {
        io_k8s_api_core_v1_probe_free(io_k8s_api_core_v1_container->liveness_probe);
        io_k8s_api_core_v1_container->liveness_probe = NULL;
    }
    if (io_k8s_api_core_v1_container->name) {
        free(io_k8s_api_core_v1_container->name);
        io_k8s_api_core_v1_container->name = NULL;
    }
    if (io_k8s_api_core_v1_container->ports) {
        list_ForEach(listEntry, io_k8s_api_core_v1_container->ports) {
            io_k8s_api_core_v1_container_port_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_container->ports);
        io_k8s_api_core_v1_container->ports = NULL;
    }
    if (io_k8s_api_core_v1_container->readiness_probe) {
        io_k8s_api_core_v1_probe_free(io_k8s_api_core_v1_container->readiness_probe);
        io_k8s_api_core_v1_container->readiness_probe = NULL;
    }
    if (io_k8s_api_core_v1_container->resources) {
        io_k8s_api_core_v1_resource_requirements_free(io_k8s_api_core_v1_container->resources);
        io_k8s_api_core_v1_container->resources = NULL;
    }
    if (io_k8s_api_core_v1_container->security_context) {
        io_k8s_api_core_v1_security_context_free(io_k8s_api_core_v1_container->security_context);
        io_k8s_api_core_v1_container->security_context = NULL;
    }
    if (io_k8s_api_core_v1_container->startup_probe) {
        io_k8s_api_core_v1_probe_free(io_k8s_api_core_v1_container->startup_probe);
        io_k8s_api_core_v1_container->startup_probe = NULL;
    }
    if (io_k8s_api_core_v1_container->termination_message_path) {
        free(io_k8s_api_core_v1_container->termination_message_path);
        io_k8s_api_core_v1_container->termination_message_path = NULL;
    }
    if (io_k8s_api_core_v1_container->termination_message_policy) {
        free(io_k8s_api_core_v1_container->termination_message_policy);
        io_k8s_api_core_v1_container->termination_message_policy = NULL;
    }
    if (io_k8s_api_core_v1_container->volume_devices) {
        list_ForEach(listEntry, io_k8s_api_core_v1_container->volume_devices) {
            io_k8s_api_core_v1_volume_device_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_container->volume_devices);
        io_k8s_api_core_v1_container->volume_devices = NULL;
    }
    if (io_k8s_api_core_v1_container->volume_mounts) {
        list_ForEach(listEntry, io_k8s_api_core_v1_container->volume_mounts) {
            io_k8s_api_core_v1_volume_mount_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_container->volume_mounts);
        io_k8s_api_core_v1_container->volume_mounts = NULL;
    }
    if (io_k8s_api_core_v1_container->working_dir) {
        free(io_k8s_api_core_v1_container->working_dir);
        io_k8s_api_core_v1_container->working_dir = NULL;
    }
    free(io_k8s_api_core_v1_container);
}

cJSON *io_k8s_api_core_v1_container_convertToJSON(io_k8s_api_core_v1_container_t *io_k8s_api_core_v1_container) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_container->args
    if(io_k8s_api_core_v1_container->args) { 
    cJSON *args = cJSON_AddArrayToObject(item, "args");
    if(args == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *argsListEntry;
    list_ForEach(argsListEntry, io_k8s_api_core_v1_container->args) {
    if(cJSON_AddStringToObject(args, "", (char*)argsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_container->command
    if(io_k8s_api_core_v1_container->command) { 
    cJSON *command = cJSON_AddArrayToObject(item, "command");
    if(command == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *commandListEntry;
    list_ForEach(commandListEntry, io_k8s_api_core_v1_container->command) {
    if(cJSON_AddStringToObject(command, "", (char*)commandListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_container->env
    if(io_k8s_api_core_v1_container->env) { 
    cJSON *env = cJSON_AddArrayToObject(item, "env");
    if(env == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *envListEntry;
    if (io_k8s_api_core_v1_container->env) {
    list_ForEach(envListEntry, io_k8s_api_core_v1_container->env) {
    cJSON *itemLocal = io_k8s_api_core_v1_env_var_convertToJSON(envListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(env, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_container->env_from
    if(io_k8s_api_core_v1_container->env_from) { 
    cJSON *env_from = cJSON_AddArrayToObject(item, "envFrom");
    if(env_from == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *env_fromListEntry;
    if (io_k8s_api_core_v1_container->env_from) {
    list_ForEach(env_fromListEntry, io_k8s_api_core_v1_container->env_from) {
    cJSON *itemLocal = io_k8s_api_core_v1_env_from_source_convertToJSON(env_fromListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(env_from, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_container->image
    if(io_k8s_api_core_v1_container->image) { 
    if(cJSON_AddStringToObject(item, "image", io_k8s_api_core_v1_container->image) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_container->image_pull_policy
    if(io_k8s_api_core_v1_container->image_pull_policy) { 
    if(cJSON_AddStringToObject(item, "imagePullPolicy", io_k8s_api_core_v1_container->image_pull_policy) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_container->lifecycle
    if(io_k8s_api_core_v1_container->lifecycle) { 
    cJSON *lifecycle_local_JSON = io_k8s_api_core_v1_lifecycle_convertToJSON(io_k8s_api_core_v1_container->lifecycle);
    if(lifecycle_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "lifecycle", lifecycle_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_container->liveness_probe
    if(io_k8s_api_core_v1_container->liveness_probe) { 
    cJSON *liveness_probe_local_JSON = io_k8s_api_core_v1_probe_convertToJSON(io_k8s_api_core_v1_container->liveness_probe);
    if(liveness_probe_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "livenessProbe", liveness_probe_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_container->name
    if (!io_k8s_api_core_v1_container->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_core_v1_container->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_container->ports
    if(io_k8s_api_core_v1_container->ports) { 
    cJSON *ports = cJSON_AddArrayToObject(item, "ports");
    if(ports == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *portsListEntry;
    if (io_k8s_api_core_v1_container->ports) {
    list_ForEach(portsListEntry, io_k8s_api_core_v1_container->ports) {
    cJSON *itemLocal = io_k8s_api_core_v1_container_port_convertToJSON(portsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(ports, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_container->readiness_probe
    if(io_k8s_api_core_v1_container->readiness_probe) { 
    cJSON *readiness_probe_local_JSON = io_k8s_api_core_v1_probe_convertToJSON(io_k8s_api_core_v1_container->readiness_probe);
    if(readiness_probe_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "readinessProbe", readiness_probe_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_container->resources
    if(io_k8s_api_core_v1_container->resources) { 
    cJSON *resources_local_JSON = io_k8s_api_core_v1_resource_requirements_convertToJSON(io_k8s_api_core_v1_container->resources);
    if(resources_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resources", resources_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_container->security_context
    if(io_k8s_api_core_v1_container->security_context) { 
    cJSON *security_context_local_JSON = io_k8s_api_core_v1_security_context_convertToJSON(io_k8s_api_core_v1_container->security_context);
    if(security_context_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "securityContext", security_context_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_container->startup_probe
    if(io_k8s_api_core_v1_container->startup_probe) { 
    cJSON *startup_probe_local_JSON = io_k8s_api_core_v1_probe_convertToJSON(io_k8s_api_core_v1_container->startup_probe);
    if(startup_probe_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "startupProbe", startup_probe_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_container->stdin
    if(io_k8s_api_core_v1_container->stdin) { 
    if(cJSON_AddBoolToObject(item, "stdin", io_k8s_api_core_v1_container->stdin) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_container->stdin_once
    if(io_k8s_api_core_v1_container->stdin_once) { 
    if(cJSON_AddBoolToObject(item, "stdinOnce", io_k8s_api_core_v1_container->stdin_once) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_container->termination_message_path
    if(io_k8s_api_core_v1_container->termination_message_path) { 
    if(cJSON_AddStringToObject(item, "terminationMessagePath", io_k8s_api_core_v1_container->termination_message_path) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_container->termination_message_policy
    if(io_k8s_api_core_v1_container->termination_message_policy) { 
    if(cJSON_AddStringToObject(item, "terminationMessagePolicy", io_k8s_api_core_v1_container->termination_message_policy) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_container->tty
    if(io_k8s_api_core_v1_container->tty) { 
    if(cJSON_AddBoolToObject(item, "tty", io_k8s_api_core_v1_container->tty) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_container->volume_devices
    if(io_k8s_api_core_v1_container->volume_devices) { 
    cJSON *volume_devices = cJSON_AddArrayToObject(item, "volumeDevices");
    if(volume_devices == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *volume_devicesListEntry;
    if (io_k8s_api_core_v1_container->volume_devices) {
    list_ForEach(volume_devicesListEntry, io_k8s_api_core_v1_container->volume_devices) {
    cJSON *itemLocal = io_k8s_api_core_v1_volume_device_convertToJSON(volume_devicesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(volume_devices, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_container->volume_mounts
    if(io_k8s_api_core_v1_container->volume_mounts) { 
    cJSON *volume_mounts = cJSON_AddArrayToObject(item, "volumeMounts");
    if(volume_mounts == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *volume_mountsListEntry;
    if (io_k8s_api_core_v1_container->volume_mounts) {
    list_ForEach(volume_mountsListEntry, io_k8s_api_core_v1_container->volume_mounts) {
    cJSON *itemLocal = io_k8s_api_core_v1_volume_mount_convertToJSON(volume_mountsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(volume_mounts, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_container->working_dir
    if(io_k8s_api_core_v1_container->working_dir) { 
    if(cJSON_AddStringToObject(item, "workingDir", io_k8s_api_core_v1_container->working_dir) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_container_t *io_k8s_api_core_v1_container_parseFromJSON(cJSON *io_k8s_api_core_v1_containerJSON){

    io_k8s_api_core_v1_container_t *io_k8s_api_core_v1_container_local_var = NULL;

    // io_k8s_api_core_v1_container->args
    cJSON *args = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "args");
    list_t *argsList;
    if (args) { 
    cJSON *args_local;
    if(!cJSON_IsArray(args)) {
        goto end;//primitive container
    }
    argsList = list_create();

    cJSON_ArrayForEach(args_local, args)
    {
        if(!cJSON_IsString(args_local))
        {
            goto end;
        }
        list_addElement(argsList , strdup(args_local->valuestring));
    }
    }

    // io_k8s_api_core_v1_container->command
    cJSON *command = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "command");
    list_t *commandList;
    if (command) { 
    cJSON *command_local;
    if(!cJSON_IsArray(command)) {
        goto end;//primitive container
    }
    commandList = list_create();

    cJSON_ArrayForEach(command_local, command)
    {
        if(!cJSON_IsString(command_local))
        {
            goto end;
        }
        list_addElement(commandList , strdup(command_local->valuestring));
    }
    }

    // io_k8s_api_core_v1_container->env
    cJSON *env = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "env");
    list_t *envList;
    if (env) { 
    cJSON *env_local_nonprimitive;
    if(!cJSON_IsArray(env)){
        goto end; //nonprimitive container
    }

    envList = list_create();

    cJSON_ArrayForEach(env_local_nonprimitive,env )
    {
        if(!cJSON_IsObject(env_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_env_var_t *envItem = io_k8s_api_core_v1_env_var_parseFromJSON(env_local_nonprimitive);

        list_addElement(envList, envItem);
    }
    }

    // io_k8s_api_core_v1_container->env_from
    cJSON *env_from = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "envFrom");
    list_t *env_fromList;
    if (env_from) { 
    cJSON *env_from_local_nonprimitive;
    if(!cJSON_IsArray(env_from)){
        goto end; //nonprimitive container
    }

    env_fromList = list_create();

    cJSON_ArrayForEach(env_from_local_nonprimitive,env_from )
    {
        if(!cJSON_IsObject(env_from_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_env_from_source_t *env_fromItem = io_k8s_api_core_v1_env_from_source_parseFromJSON(env_from_local_nonprimitive);

        list_addElement(env_fromList, env_fromItem);
    }
    }

    // io_k8s_api_core_v1_container->image
    cJSON *image = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "image");
    if (image) { 
    if(!cJSON_IsString(image))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_container->image_pull_policy
    cJSON *image_pull_policy = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "imagePullPolicy");
    if (image_pull_policy) { 
    if(!cJSON_IsString(image_pull_policy))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_container->lifecycle
    cJSON *lifecycle = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "lifecycle");
    io_k8s_api_core_v1_lifecycle_t *lifecycle_local_nonprim = NULL;
    if (lifecycle) { 
    lifecycle_local_nonprim = io_k8s_api_core_v1_lifecycle_parseFromJSON(lifecycle); //nonprimitive
    }

    // io_k8s_api_core_v1_container->liveness_probe
    cJSON *liveness_probe = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "livenessProbe");
    io_k8s_api_core_v1_probe_t *liveness_probe_local_nonprim = NULL;
    if (liveness_probe) { 
    liveness_probe_local_nonprim = io_k8s_api_core_v1_probe_parseFromJSON(liveness_probe); //nonprimitive
    }

    // io_k8s_api_core_v1_container->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_container->ports
    cJSON *ports = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "ports");
    list_t *portsList;
    if (ports) { 
    cJSON *ports_local_nonprimitive;
    if(!cJSON_IsArray(ports)){
        goto end; //nonprimitive container
    }

    portsList = list_create();

    cJSON_ArrayForEach(ports_local_nonprimitive,ports )
    {
        if(!cJSON_IsObject(ports_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_container_port_t *portsItem = io_k8s_api_core_v1_container_port_parseFromJSON(ports_local_nonprimitive);

        list_addElement(portsList, portsItem);
    }
    }

    // io_k8s_api_core_v1_container->readiness_probe
    cJSON *readiness_probe = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "readinessProbe");
    io_k8s_api_core_v1_probe_t *readiness_probe_local_nonprim = NULL;
    if (readiness_probe) { 
    readiness_probe_local_nonprim = io_k8s_api_core_v1_probe_parseFromJSON(readiness_probe); //nonprimitive
    }

    // io_k8s_api_core_v1_container->resources
    cJSON *resources = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "resources");
    io_k8s_api_core_v1_resource_requirements_t *resources_local_nonprim = NULL;
    if (resources) { 
    resources_local_nonprim = io_k8s_api_core_v1_resource_requirements_parseFromJSON(resources); //nonprimitive
    }

    // io_k8s_api_core_v1_container->security_context
    cJSON *security_context = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "securityContext");
    io_k8s_api_core_v1_security_context_t *security_context_local_nonprim = NULL;
    if (security_context) { 
    security_context_local_nonprim = io_k8s_api_core_v1_security_context_parseFromJSON(security_context); //nonprimitive
    }

    // io_k8s_api_core_v1_container->startup_probe
    cJSON *startup_probe = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "startupProbe");
    io_k8s_api_core_v1_probe_t *startup_probe_local_nonprim = NULL;
    if (startup_probe) { 
    startup_probe_local_nonprim = io_k8s_api_core_v1_probe_parseFromJSON(startup_probe); //nonprimitive
    }

    // io_k8s_api_core_v1_container->stdin
    cJSON *stdin = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "stdin");
    if (stdin) { 
    if(!cJSON_IsBool(stdin))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_container->stdin_once
    cJSON *stdin_once = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "stdinOnce");
    if (stdin_once) { 
    if(!cJSON_IsBool(stdin_once))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_container->termination_message_path
    cJSON *termination_message_path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "terminationMessagePath");
    if (termination_message_path) { 
    if(!cJSON_IsString(termination_message_path))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_container->termination_message_policy
    cJSON *termination_message_policy = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "terminationMessagePolicy");
    if (termination_message_policy) { 
    if(!cJSON_IsString(termination_message_policy))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_container->tty
    cJSON *tty = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "tty");
    if (tty) { 
    if(!cJSON_IsBool(tty))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_container->volume_devices
    cJSON *volume_devices = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "volumeDevices");
    list_t *volume_devicesList;
    if (volume_devices) { 
    cJSON *volume_devices_local_nonprimitive;
    if(!cJSON_IsArray(volume_devices)){
        goto end; //nonprimitive container
    }

    volume_devicesList = list_create();

    cJSON_ArrayForEach(volume_devices_local_nonprimitive,volume_devices )
    {
        if(!cJSON_IsObject(volume_devices_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_volume_device_t *volume_devicesItem = io_k8s_api_core_v1_volume_device_parseFromJSON(volume_devices_local_nonprimitive);

        list_addElement(volume_devicesList, volume_devicesItem);
    }
    }

    // io_k8s_api_core_v1_container->volume_mounts
    cJSON *volume_mounts = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "volumeMounts");
    list_t *volume_mountsList;
    if (volume_mounts) { 
    cJSON *volume_mounts_local_nonprimitive;
    if(!cJSON_IsArray(volume_mounts)){
        goto end; //nonprimitive container
    }

    volume_mountsList = list_create();

    cJSON_ArrayForEach(volume_mounts_local_nonprimitive,volume_mounts )
    {
        if(!cJSON_IsObject(volume_mounts_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_volume_mount_t *volume_mountsItem = io_k8s_api_core_v1_volume_mount_parseFromJSON(volume_mounts_local_nonprimitive);

        list_addElement(volume_mountsList, volume_mountsItem);
    }
    }

    // io_k8s_api_core_v1_container->working_dir
    cJSON *working_dir = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_containerJSON, "workingDir");
    if (working_dir) { 
    if(!cJSON_IsString(working_dir))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_container_local_var = io_k8s_api_core_v1_container_create (
        args ? argsList : NULL,
        command ? commandList : NULL,
        env ? envList : NULL,
        env_from ? env_fromList : NULL,
        image ? strdup(image->valuestring) : NULL,
        image_pull_policy ? strdup(image_pull_policy->valuestring) : NULL,
        lifecycle ? lifecycle_local_nonprim : NULL,
        liveness_probe ? liveness_probe_local_nonprim : NULL,
        strdup(name->valuestring),
        ports ? portsList : NULL,
        readiness_probe ? readiness_probe_local_nonprim : NULL,
        resources ? resources_local_nonprim : NULL,
        security_context ? security_context_local_nonprim : NULL,
        startup_probe ? startup_probe_local_nonprim : NULL,
        stdin ? stdin->valueint : 0,
        stdin_once ? stdin_once->valueint : 0,
        termination_message_path ? strdup(termination_message_path->valuestring) : NULL,
        termination_message_policy ? strdup(termination_message_policy->valuestring) : NULL,
        tty ? tty->valueint : 0,
        volume_devices ? volume_devicesList : NULL,
        volume_mounts ? volume_mountsList : NULL,
        working_dir ? strdup(working_dir->valuestring) : NULL
        );

    return io_k8s_api_core_v1_container_local_var;
end:
    if (lifecycle_local_nonprim) {
        io_k8s_api_core_v1_lifecycle_free(lifecycle_local_nonprim);
        lifecycle_local_nonprim = NULL;
    }
    if (liveness_probe_local_nonprim) {
        io_k8s_api_core_v1_probe_free(liveness_probe_local_nonprim);
        liveness_probe_local_nonprim = NULL;
    }
    if (readiness_probe_local_nonprim) {
        io_k8s_api_core_v1_probe_free(readiness_probe_local_nonprim);
        readiness_probe_local_nonprim = NULL;
    }
    if (resources_local_nonprim) {
        io_k8s_api_core_v1_resource_requirements_free(resources_local_nonprim);
        resources_local_nonprim = NULL;
    }
    if (security_context_local_nonprim) {
        io_k8s_api_core_v1_security_context_free(security_context_local_nonprim);
        security_context_local_nonprim = NULL;
    }
    if (startup_probe_local_nonprim) {
        io_k8s_api_core_v1_probe_free(startup_probe_local_nonprim);
        startup_probe_local_nonprim = NULL;
    }
    return NULL;

}
