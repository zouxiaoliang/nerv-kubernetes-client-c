#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_node_system_info.h"



io_k8s_api_core_v1_node_system_info_t *io_k8s_api_core_v1_node_system_info_create(
    char *architecture,
    char *boot_id,
    char *container_runtime_version,
    char *kernel_version,
    char *kube_proxy_version,
    char *kubelet_version,
    char *machine_id,
    char *operating_system,
    char *os_image,
    char *system_uuid
    ) {
    io_k8s_api_core_v1_node_system_info_t *io_k8s_api_core_v1_node_system_info_local_var = malloc(sizeof(io_k8s_api_core_v1_node_system_info_t));
    if (!io_k8s_api_core_v1_node_system_info_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_node_system_info_local_var->architecture = architecture;
    io_k8s_api_core_v1_node_system_info_local_var->boot_id = boot_id;
    io_k8s_api_core_v1_node_system_info_local_var->container_runtime_version = container_runtime_version;
    io_k8s_api_core_v1_node_system_info_local_var->kernel_version = kernel_version;
    io_k8s_api_core_v1_node_system_info_local_var->kube_proxy_version = kube_proxy_version;
    io_k8s_api_core_v1_node_system_info_local_var->kubelet_version = kubelet_version;
    io_k8s_api_core_v1_node_system_info_local_var->machine_id = machine_id;
    io_k8s_api_core_v1_node_system_info_local_var->operating_system = operating_system;
    io_k8s_api_core_v1_node_system_info_local_var->os_image = os_image;
    io_k8s_api_core_v1_node_system_info_local_var->system_uuid = system_uuid;

    return io_k8s_api_core_v1_node_system_info_local_var;
}


void io_k8s_api_core_v1_node_system_info_free(io_k8s_api_core_v1_node_system_info_t *io_k8s_api_core_v1_node_system_info) {
    if(NULL == io_k8s_api_core_v1_node_system_info){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_node_system_info->architecture) {
        free(io_k8s_api_core_v1_node_system_info->architecture);
        io_k8s_api_core_v1_node_system_info->architecture = NULL;
    }
    if (io_k8s_api_core_v1_node_system_info->boot_id) {
        free(io_k8s_api_core_v1_node_system_info->boot_id);
        io_k8s_api_core_v1_node_system_info->boot_id = NULL;
    }
    if (io_k8s_api_core_v1_node_system_info->container_runtime_version) {
        free(io_k8s_api_core_v1_node_system_info->container_runtime_version);
        io_k8s_api_core_v1_node_system_info->container_runtime_version = NULL;
    }
    if (io_k8s_api_core_v1_node_system_info->kernel_version) {
        free(io_k8s_api_core_v1_node_system_info->kernel_version);
        io_k8s_api_core_v1_node_system_info->kernel_version = NULL;
    }
    if (io_k8s_api_core_v1_node_system_info->kube_proxy_version) {
        free(io_k8s_api_core_v1_node_system_info->kube_proxy_version);
        io_k8s_api_core_v1_node_system_info->kube_proxy_version = NULL;
    }
    if (io_k8s_api_core_v1_node_system_info->kubelet_version) {
        free(io_k8s_api_core_v1_node_system_info->kubelet_version);
        io_k8s_api_core_v1_node_system_info->kubelet_version = NULL;
    }
    if (io_k8s_api_core_v1_node_system_info->machine_id) {
        free(io_k8s_api_core_v1_node_system_info->machine_id);
        io_k8s_api_core_v1_node_system_info->machine_id = NULL;
    }
    if (io_k8s_api_core_v1_node_system_info->operating_system) {
        free(io_k8s_api_core_v1_node_system_info->operating_system);
        io_k8s_api_core_v1_node_system_info->operating_system = NULL;
    }
    if (io_k8s_api_core_v1_node_system_info->os_image) {
        free(io_k8s_api_core_v1_node_system_info->os_image);
        io_k8s_api_core_v1_node_system_info->os_image = NULL;
    }
    if (io_k8s_api_core_v1_node_system_info->system_uuid) {
        free(io_k8s_api_core_v1_node_system_info->system_uuid);
        io_k8s_api_core_v1_node_system_info->system_uuid = NULL;
    }
    free(io_k8s_api_core_v1_node_system_info);
}

cJSON *io_k8s_api_core_v1_node_system_info_convertToJSON(io_k8s_api_core_v1_node_system_info_t *io_k8s_api_core_v1_node_system_info) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_node_system_info->architecture
    if (!io_k8s_api_core_v1_node_system_info->architecture) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "architecture", io_k8s_api_core_v1_node_system_info->architecture) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_node_system_info->boot_id
    if (!io_k8s_api_core_v1_node_system_info->boot_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "bootID", io_k8s_api_core_v1_node_system_info->boot_id) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_node_system_info->container_runtime_version
    if (!io_k8s_api_core_v1_node_system_info->container_runtime_version) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "containerRuntimeVersion", io_k8s_api_core_v1_node_system_info->container_runtime_version) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_node_system_info->kernel_version
    if (!io_k8s_api_core_v1_node_system_info->kernel_version) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "kernelVersion", io_k8s_api_core_v1_node_system_info->kernel_version) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_node_system_info->kube_proxy_version
    if (!io_k8s_api_core_v1_node_system_info->kube_proxy_version) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "kubeProxyVersion", io_k8s_api_core_v1_node_system_info->kube_proxy_version) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_node_system_info->kubelet_version
    if (!io_k8s_api_core_v1_node_system_info->kubelet_version) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "kubeletVersion", io_k8s_api_core_v1_node_system_info->kubelet_version) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_node_system_info->machine_id
    if (!io_k8s_api_core_v1_node_system_info->machine_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "machineID", io_k8s_api_core_v1_node_system_info->machine_id) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_node_system_info->operating_system
    if (!io_k8s_api_core_v1_node_system_info->operating_system) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "operatingSystem", io_k8s_api_core_v1_node_system_info->operating_system) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_node_system_info->os_image
    if (!io_k8s_api_core_v1_node_system_info->os_image) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "osImage", io_k8s_api_core_v1_node_system_info->os_image) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_node_system_info->system_uuid
    if (!io_k8s_api_core_v1_node_system_info->system_uuid) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "systemUUID", io_k8s_api_core_v1_node_system_info->system_uuid) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_node_system_info_t *io_k8s_api_core_v1_node_system_info_parseFromJSON(cJSON *io_k8s_api_core_v1_node_system_infoJSON){

    io_k8s_api_core_v1_node_system_info_t *io_k8s_api_core_v1_node_system_info_local_var = NULL;

    // io_k8s_api_core_v1_node_system_info->architecture
    cJSON *architecture = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_system_infoJSON, "architecture");
    if (!architecture) {
        goto end;
    }

    
    if(!cJSON_IsString(architecture))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_node_system_info->boot_id
    cJSON *boot_id = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_system_infoJSON, "bootID");
    if (!boot_id) {
        goto end;
    }

    
    if(!cJSON_IsString(boot_id))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_node_system_info->container_runtime_version
    cJSON *container_runtime_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_system_infoJSON, "containerRuntimeVersion");
    if (!container_runtime_version) {
        goto end;
    }

    
    if(!cJSON_IsString(container_runtime_version))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_node_system_info->kernel_version
    cJSON *kernel_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_system_infoJSON, "kernelVersion");
    if (!kernel_version) {
        goto end;
    }

    
    if(!cJSON_IsString(kernel_version))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_node_system_info->kube_proxy_version
    cJSON *kube_proxy_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_system_infoJSON, "kubeProxyVersion");
    if (!kube_proxy_version) {
        goto end;
    }

    
    if(!cJSON_IsString(kube_proxy_version))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_node_system_info->kubelet_version
    cJSON *kubelet_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_system_infoJSON, "kubeletVersion");
    if (!kubelet_version) {
        goto end;
    }

    
    if(!cJSON_IsString(kubelet_version))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_node_system_info->machine_id
    cJSON *machine_id = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_system_infoJSON, "machineID");
    if (!machine_id) {
        goto end;
    }

    
    if(!cJSON_IsString(machine_id))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_node_system_info->operating_system
    cJSON *operating_system = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_system_infoJSON, "operatingSystem");
    if (!operating_system) {
        goto end;
    }

    
    if(!cJSON_IsString(operating_system))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_node_system_info->os_image
    cJSON *os_image = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_system_infoJSON, "osImage");
    if (!os_image) {
        goto end;
    }

    
    if(!cJSON_IsString(os_image))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_node_system_info->system_uuid
    cJSON *system_uuid = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_system_infoJSON, "systemUUID");
    if (!system_uuid) {
        goto end;
    }

    
    if(!cJSON_IsString(system_uuid))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_node_system_info_local_var = io_k8s_api_core_v1_node_system_info_create (
        strdup(architecture->valuestring),
        strdup(boot_id->valuestring),
        strdup(container_runtime_version->valuestring),
        strdup(kernel_version->valuestring),
        strdup(kube_proxy_version->valuestring),
        strdup(kubelet_version->valuestring),
        strdup(machine_id->valuestring),
        strdup(operating_system->valuestring),
        strdup(os_image->valuestring),
        strdup(system_uuid->valuestring)
        );

    return io_k8s_api_core_v1_node_system_info_local_var;
end:
    return NULL;

}
