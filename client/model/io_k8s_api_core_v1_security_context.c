#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_security_context.h"



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
    ) {
    io_k8s_api_core_v1_security_context_t *io_k8s_api_core_v1_security_context_local_var = malloc(sizeof(io_k8s_api_core_v1_security_context_t));
    if (!io_k8s_api_core_v1_security_context_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_security_context_local_var->allow_privilege_escalation = allow_privilege_escalation;
    io_k8s_api_core_v1_security_context_local_var->capabilities = capabilities;
    io_k8s_api_core_v1_security_context_local_var->privileged = privileged;
    io_k8s_api_core_v1_security_context_local_var->proc_mount = proc_mount;
    io_k8s_api_core_v1_security_context_local_var->read_only_root_filesystem = read_only_root_filesystem;
    io_k8s_api_core_v1_security_context_local_var->run_as_group = run_as_group;
    io_k8s_api_core_v1_security_context_local_var->run_as_non_root = run_as_non_root;
    io_k8s_api_core_v1_security_context_local_var->run_as_user = run_as_user;
    io_k8s_api_core_v1_security_context_local_var->se_linux_options = se_linux_options;
    io_k8s_api_core_v1_security_context_local_var->seccomp_profile = seccomp_profile;
    io_k8s_api_core_v1_security_context_local_var->windows_options = windows_options;

    return io_k8s_api_core_v1_security_context_local_var;
}


void io_k8s_api_core_v1_security_context_free(io_k8s_api_core_v1_security_context_t *io_k8s_api_core_v1_security_context) {
    if(NULL == io_k8s_api_core_v1_security_context){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_security_context->capabilities) {
        io_k8s_api_core_v1_capabilities_free(io_k8s_api_core_v1_security_context->capabilities);
        io_k8s_api_core_v1_security_context->capabilities = NULL;
    }
    if (io_k8s_api_core_v1_security_context->proc_mount) {
        free(io_k8s_api_core_v1_security_context->proc_mount);
        io_k8s_api_core_v1_security_context->proc_mount = NULL;
    }
    if (io_k8s_api_core_v1_security_context->se_linux_options) {
        io_k8s_api_core_v1_se_linux_options_free(io_k8s_api_core_v1_security_context->se_linux_options);
        io_k8s_api_core_v1_security_context->se_linux_options = NULL;
    }
    if (io_k8s_api_core_v1_security_context->seccomp_profile) {
        io_k8s_api_core_v1_seccomp_profile_free(io_k8s_api_core_v1_security_context->seccomp_profile);
        io_k8s_api_core_v1_security_context->seccomp_profile = NULL;
    }
    if (io_k8s_api_core_v1_security_context->windows_options) {
        io_k8s_api_core_v1_windows_security_context_options_free(io_k8s_api_core_v1_security_context->windows_options);
        io_k8s_api_core_v1_security_context->windows_options = NULL;
    }
    free(io_k8s_api_core_v1_security_context);
}

cJSON *io_k8s_api_core_v1_security_context_convertToJSON(io_k8s_api_core_v1_security_context_t *io_k8s_api_core_v1_security_context) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_security_context->allow_privilege_escalation
    if(io_k8s_api_core_v1_security_context->allow_privilege_escalation) { 
    if(cJSON_AddBoolToObject(item, "allowPrivilegeEscalation", io_k8s_api_core_v1_security_context->allow_privilege_escalation) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_security_context->capabilities
    if(io_k8s_api_core_v1_security_context->capabilities) { 
    cJSON *capabilities_local_JSON = io_k8s_api_core_v1_capabilities_convertToJSON(io_k8s_api_core_v1_security_context->capabilities);
    if(capabilities_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "capabilities", capabilities_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_security_context->privileged
    if(io_k8s_api_core_v1_security_context->privileged) { 
    if(cJSON_AddBoolToObject(item, "privileged", io_k8s_api_core_v1_security_context->privileged) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_security_context->proc_mount
    if(io_k8s_api_core_v1_security_context->proc_mount) { 
    if(cJSON_AddStringToObject(item, "procMount", io_k8s_api_core_v1_security_context->proc_mount) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_security_context->read_only_root_filesystem
    if(io_k8s_api_core_v1_security_context->read_only_root_filesystem) { 
    if(cJSON_AddBoolToObject(item, "readOnlyRootFilesystem", io_k8s_api_core_v1_security_context->read_only_root_filesystem) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_security_context->run_as_group
    if(io_k8s_api_core_v1_security_context->run_as_group) { 
    if(cJSON_AddNumberToObject(item, "runAsGroup", io_k8s_api_core_v1_security_context->run_as_group) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_security_context->run_as_non_root
    if(io_k8s_api_core_v1_security_context->run_as_non_root) { 
    if(cJSON_AddBoolToObject(item, "runAsNonRoot", io_k8s_api_core_v1_security_context->run_as_non_root) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_security_context->run_as_user
    if(io_k8s_api_core_v1_security_context->run_as_user) { 
    if(cJSON_AddNumberToObject(item, "runAsUser", io_k8s_api_core_v1_security_context->run_as_user) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_security_context->se_linux_options
    if(io_k8s_api_core_v1_security_context->se_linux_options) { 
    cJSON *se_linux_options_local_JSON = io_k8s_api_core_v1_se_linux_options_convertToJSON(io_k8s_api_core_v1_security_context->se_linux_options);
    if(se_linux_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "seLinuxOptions", se_linux_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_security_context->seccomp_profile
    if(io_k8s_api_core_v1_security_context->seccomp_profile) { 
    cJSON *seccomp_profile_local_JSON = io_k8s_api_core_v1_seccomp_profile_convertToJSON(io_k8s_api_core_v1_security_context->seccomp_profile);
    if(seccomp_profile_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "seccompProfile", seccomp_profile_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_security_context->windows_options
    if(io_k8s_api_core_v1_security_context->windows_options) { 
    cJSON *windows_options_local_JSON = io_k8s_api_core_v1_windows_security_context_options_convertToJSON(io_k8s_api_core_v1_security_context->windows_options);
    if(windows_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "windowsOptions", windows_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_security_context_t *io_k8s_api_core_v1_security_context_parseFromJSON(cJSON *io_k8s_api_core_v1_security_contextJSON){

    io_k8s_api_core_v1_security_context_t *io_k8s_api_core_v1_security_context_local_var = NULL;

    // io_k8s_api_core_v1_security_context->allow_privilege_escalation
    cJSON *allow_privilege_escalation = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_security_contextJSON, "allowPrivilegeEscalation");
    if (allow_privilege_escalation) { 
    if(!cJSON_IsBool(allow_privilege_escalation))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_security_context->capabilities
    cJSON *capabilities = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_security_contextJSON, "capabilities");
    io_k8s_api_core_v1_capabilities_t *capabilities_local_nonprim = NULL;
    if (capabilities) { 
    capabilities_local_nonprim = io_k8s_api_core_v1_capabilities_parseFromJSON(capabilities); //nonprimitive
    }

    // io_k8s_api_core_v1_security_context->privileged
    cJSON *privileged = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_security_contextJSON, "privileged");
    if (privileged) { 
    if(!cJSON_IsBool(privileged))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_security_context->proc_mount
    cJSON *proc_mount = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_security_contextJSON, "procMount");
    if (proc_mount) { 
    if(!cJSON_IsString(proc_mount))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_security_context->read_only_root_filesystem
    cJSON *read_only_root_filesystem = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_security_contextJSON, "readOnlyRootFilesystem");
    if (read_only_root_filesystem) { 
    if(!cJSON_IsBool(read_only_root_filesystem))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_security_context->run_as_group
    cJSON *run_as_group = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_security_contextJSON, "runAsGroup");
    if (run_as_group) { 
    if(!cJSON_IsNumber(run_as_group))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_security_context->run_as_non_root
    cJSON *run_as_non_root = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_security_contextJSON, "runAsNonRoot");
    if (run_as_non_root) { 
    if(!cJSON_IsBool(run_as_non_root))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_security_context->run_as_user
    cJSON *run_as_user = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_security_contextJSON, "runAsUser");
    if (run_as_user) { 
    if(!cJSON_IsNumber(run_as_user))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_security_context->se_linux_options
    cJSON *se_linux_options = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_security_contextJSON, "seLinuxOptions");
    io_k8s_api_core_v1_se_linux_options_t *se_linux_options_local_nonprim = NULL;
    if (se_linux_options) { 
    se_linux_options_local_nonprim = io_k8s_api_core_v1_se_linux_options_parseFromJSON(se_linux_options); //nonprimitive
    }

    // io_k8s_api_core_v1_security_context->seccomp_profile
    cJSON *seccomp_profile = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_security_contextJSON, "seccompProfile");
    io_k8s_api_core_v1_seccomp_profile_t *seccomp_profile_local_nonprim = NULL;
    if (seccomp_profile) { 
    seccomp_profile_local_nonprim = io_k8s_api_core_v1_seccomp_profile_parseFromJSON(seccomp_profile); //nonprimitive
    }

    // io_k8s_api_core_v1_security_context->windows_options
    cJSON *windows_options = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_security_contextJSON, "windowsOptions");
    io_k8s_api_core_v1_windows_security_context_options_t *windows_options_local_nonprim = NULL;
    if (windows_options) { 
    windows_options_local_nonprim = io_k8s_api_core_v1_windows_security_context_options_parseFromJSON(windows_options); //nonprimitive
    }


    io_k8s_api_core_v1_security_context_local_var = io_k8s_api_core_v1_security_context_create (
        allow_privilege_escalation ? allow_privilege_escalation->valueint : 0,
        capabilities ? capabilities_local_nonprim : NULL,
        privileged ? privileged->valueint : 0,
        proc_mount ? strdup(proc_mount->valuestring) : NULL,
        read_only_root_filesystem ? read_only_root_filesystem->valueint : 0,
        run_as_group ? run_as_group->valuedouble : 0,
        run_as_non_root ? run_as_non_root->valueint : 0,
        run_as_user ? run_as_user->valuedouble : 0,
        se_linux_options ? se_linux_options_local_nonprim : NULL,
        seccomp_profile ? seccomp_profile_local_nonprim : NULL,
        windows_options ? windows_options_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_security_context_local_var;
end:
    if (capabilities_local_nonprim) {
        io_k8s_api_core_v1_capabilities_free(capabilities_local_nonprim);
        capabilities_local_nonprim = NULL;
    }
    if (se_linux_options_local_nonprim) {
        io_k8s_api_core_v1_se_linux_options_free(se_linux_options_local_nonprim);
        se_linux_options_local_nonprim = NULL;
    }
    if (seccomp_profile_local_nonprim) {
        io_k8s_api_core_v1_seccomp_profile_free(seccomp_profile_local_nonprim);
        seccomp_profile_local_nonprim = NULL;
    }
    if (windows_options_local_nonprim) {
        io_k8s_api_core_v1_windows_security_context_options_free(windows_options_local_nonprim);
        windows_options_local_nonprim = NULL;
    }
    return NULL;

}
