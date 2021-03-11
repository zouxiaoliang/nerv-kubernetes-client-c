#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_pod_security_context.h"



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
    ) {
    io_k8s_api_core_v1_pod_security_context_t *io_k8s_api_core_v1_pod_security_context_local_var = malloc(sizeof(io_k8s_api_core_v1_pod_security_context_t));
    if (!io_k8s_api_core_v1_pod_security_context_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_pod_security_context_local_var->fs_group = fs_group;
    io_k8s_api_core_v1_pod_security_context_local_var->fs_group_change_policy = fs_group_change_policy;
    io_k8s_api_core_v1_pod_security_context_local_var->run_as_group = run_as_group;
    io_k8s_api_core_v1_pod_security_context_local_var->run_as_non_root = run_as_non_root;
    io_k8s_api_core_v1_pod_security_context_local_var->run_as_user = run_as_user;
    io_k8s_api_core_v1_pod_security_context_local_var->se_linux_options = se_linux_options;
    io_k8s_api_core_v1_pod_security_context_local_var->seccomp_profile = seccomp_profile;
    io_k8s_api_core_v1_pod_security_context_local_var->supplemental_groups = supplemental_groups;
    io_k8s_api_core_v1_pod_security_context_local_var->sysctls = sysctls;
    io_k8s_api_core_v1_pod_security_context_local_var->windows_options = windows_options;

    return io_k8s_api_core_v1_pod_security_context_local_var;
}


void io_k8s_api_core_v1_pod_security_context_free(io_k8s_api_core_v1_pod_security_context_t *io_k8s_api_core_v1_pod_security_context) {
    if(NULL == io_k8s_api_core_v1_pod_security_context){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_pod_security_context->fs_group_change_policy) {
        free(io_k8s_api_core_v1_pod_security_context->fs_group_change_policy);
        io_k8s_api_core_v1_pod_security_context->fs_group_change_policy = NULL;
    }
    if (io_k8s_api_core_v1_pod_security_context->se_linux_options) {
        io_k8s_api_core_v1_se_linux_options_free(io_k8s_api_core_v1_pod_security_context->se_linux_options);
        io_k8s_api_core_v1_pod_security_context->se_linux_options = NULL;
    }
    if (io_k8s_api_core_v1_pod_security_context->seccomp_profile) {
        io_k8s_api_core_v1_seccomp_profile_free(io_k8s_api_core_v1_pod_security_context->seccomp_profile);
        io_k8s_api_core_v1_pod_security_context->seccomp_profile = NULL;
    }
    if (io_k8s_api_core_v1_pod_security_context->supplemental_groups) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_security_context->supplemental_groups) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_security_context->supplemental_groups);
        io_k8s_api_core_v1_pod_security_context->supplemental_groups = NULL;
    }
    if (io_k8s_api_core_v1_pod_security_context->sysctls) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_security_context->sysctls) {
            io_k8s_api_core_v1_sysctl_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_security_context->sysctls);
        io_k8s_api_core_v1_pod_security_context->sysctls = NULL;
    }
    if (io_k8s_api_core_v1_pod_security_context->windows_options) {
        io_k8s_api_core_v1_windows_security_context_options_free(io_k8s_api_core_v1_pod_security_context->windows_options);
        io_k8s_api_core_v1_pod_security_context->windows_options = NULL;
    }
    free(io_k8s_api_core_v1_pod_security_context);
}

cJSON *io_k8s_api_core_v1_pod_security_context_convertToJSON(io_k8s_api_core_v1_pod_security_context_t *io_k8s_api_core_v1_pod_security_context) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_pod_security_context->fs_group
    if(io_k8s_api_core_v1_pod_security_context->fs_group) { 
    if(cJSON_AddNumberToObject(item, "fsGroup", io_k8s_api_core_v1_pod_security_context->fs_group) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_pod_security_context->fs_group_change_policy
    if(io_k8s_api_core_v1_pod_security_context->fs_group_change_policy) { 
    if(cJSON_AddStringToObject(item, "fsGroupChangePolicy", io_k8s_api_core_v1_pod_security_context->fs_group_change_policy) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_security_context->run_as_group
    if(io_k8s_api_core_v1_pod_security_context->run_as_group) { 
    if(cJSON_AddNumberToObject(item, "runAsGroup", io_k8s_api_core_v1_pod_security_context->run_as_group) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_pod_security_context->run_as_non_root
    if(io_k8s_api_core_v1_pod_security_context->run_as_non_root) { 
    if(cJSON_AddBoolToObject(item, "runAsNonRoot", io_k8s_api_core_v1_pod_security_context->run_as_non_root) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_pod_security_context->run_as_user
    if(io_k8s_api_core_v1_pod_security_context->run_as_user) { 
    if(cJSON_AddNumberToObject(item, "runAsUser", io_k8s_api_core_v1_pod_security_context->run_as_user) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_pod_security_context->se_linux_options
    if(io_k8s_api_core_v1_pod_security_context->se_linux_options) { 
    cJSON *se_linux_options_local_JSON = io_k8s_api_core_v1_se_linux_options_convertToJSON(io_k8s_api_core_v1_pod_security_context->se_linux_options);
    if(se_linux_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "seLinuxOptions", se_linux_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_pod_security_context->seccomp_profile
    if(io_k8s_api_core_v1_pod_security_context->seccomp_profile) { 
    cJSON *seccomp_profile_local_JSON = io_k8s_api_core_v1_seccomp_profile_convertToJSON(io_k8s_api_core_v1_pod_security_context->seccomp_profile);
    if(seccomp_profile_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "seccompProfile", seccomp_profile_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_pod_security_context->supplemental_groups
    if(io_k8s_api_core_v1_pod_security_context->supplemental_groups) { 
    cJSON *supplemental_groups = cJSON_AddArrayToObject(item, "supplementalGroups");
    if(supplemental_groups == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *supplemental_groupsListEntry;
    list_ForEach(supplemental_groupsListEntry, io_k8s_api_core_v1_pod_security_context->supplemental_groups) {
    if(cJSON_AddNumberToObject(supplemental_groups, "", *(double *)supplemental_groupsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_pod_security_context->sysctls
    if(io_k8s_api_core_v1_pod_security_context->sysctls) { 
    cJSON *sysctls = cJSON_AddArrayToObject(item, "sysctls");
    if(sysctls == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *sysctlsListEntry;
    if (io_k8s_api_core_v1_pod_security_context->sysctls) {
    list_ForEach(sysctlsListEntry, io_k8s_api_core_v1_pod_security_context->sysctls) {
    cJSON *itemLocal = io_k8s_api_core_v1_sysctl_convertToJSON(sysctlsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(sysctls, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_pod_security_context->windows_options
    if(io_k8s_api_core_v1_pod_security_context->windows_options) { 
    cJSON *windows_options_local_JSON = io_k8s_api_core_v1_windows_security_context_options_convertToJSON(io_k8s_api_core_v1_pod_security_context->windows_options);
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

io_k8s_api_core_v1_pod_security_context_t *io_k8s_api_core_v1_pod_security_context_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_security_contextJSON){

    io_k8s_api_core_v1_pod_security_context_t *io_k8s_api_core_v1_pod_security_context_local_var = NULL;

    // io_k8s_api_core_v1_pod_security_context->fs_group
    cJSON *fs_group = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_security_contextJSON, "fsGroup");
    if (fs_group) { 
    if(!cJSON_IsNumber(fs_group))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_pod_security_context->fs_group_change_policy
    cJSON *fs_group_change_policy = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_security_contextJSON, "fsGroupChangePolicy");
    if (fs_group_change_policy) { 
    if(!cJSON_IsString(fs_group_change_policy))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_security_context->run_as_group
    cJSON *run_as_group = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_security_contextJSON, "runAsGroup");
    if (run_as_group) { 
    if(!cJSON_IsNumber(run_as_group))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_pod_security_context->run_as_non_root
    cJSON *run_as_non_root = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_security_contextJSON, "runAsNonRoot");
    if (run_as_non_root) { 
    if(!cJSON_IsBool(run_as_non_root))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_pod_security_context->run_as_user
    cJSON *run_as_user = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_security_contextJSON, "runAsUser");
    if (run_as_user) { 
    if(!cJSON_IsNumber(run_as_user))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_pod_security_context->se_linux_options
    cJSON *se_linux_options = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_security_contextJSON, "seLinuxOptions");
    io_k8s_api_core_v1_se_linux_options_t *se_linux_options_local_nonprim = NULL;
    if (se_linux_options) { 
    se_linux_options_local_nonprim = io_k8s_api_core_v1_se_linux_options_parseFromJSON(se_linux_options); //nonprimitive
    }

    // io_k8s_api_core_v1_pod_security_context->seccomp_profile
    cJSON *seccomp_profile = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_security_contextJSON, "seccompProfile");
    io_k8s_api_core_v1_seccomp_profile_t *seccomp_profile_local_nonprim = NULL;
    if (seccomp_profile) { 
    seccomp_profile_local_nonprim = io_k8s_api_core_v1_seccomp_profile_parseFromJSON(seccomp_profile); //nonprimitive
    }

    // io_k8s_api_core_v1_pod_security_context->supplemental_groups
    cJSON *supplemental_groups = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_security_contextJSON, "supplementalGroups");
    list_t *supplemental_groupsList;
    if (supplemental_groups) { 
    cJSON *supplemental_groups_local;
    if(!cJSON_IsArray(supplemental_groups)) {
        goto end;//primitive container
    }
    supplemental_groupsList = list_create();

    cJSON_ArrayForEach(supplemental_groups_local, supplemental_groups)
    {
        if(!cJSON_IsNumber(supplemental_groups_local))
        {
            goto end;
        }
        list_addElement(supplemental_groupsList , &supplemental_groups_local->valuedouble);
    }
    }

    // io_k8s_api_core_v1_pod_security_context->sysctls
    cJSON *sysctls = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_security_contextJSON, "sysctls");
    list_t *sysctlsList;
    if (sysctls) { 
    cJSON *sysctls_local_nonprimitive;
    if(!cJSON_IsArray(sysctls)){
        goto end; //nonprimitive container
    }

    sysctlsList = list_create();

    cJSON_ArrayForEach(sysctls_local_nonprimitive,sysctls )
    {
        if(!cJSON_IsObject(sysctls_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_sysctl_t *sysctlsItem = io_k8s_api_core_v1_sysctl_parseFromJSON(sysctls_local_nonprimitive);

        list_addElement(sysctlsList, sysctlsItem);
    }
    }

    // io_k8s_api_core_v1_pod_security_context->windows_options
    cJSON *windows_options = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_security_contextJSON, "windowsOptions");
    io_k8s_api_core_v1_windows_security_context_options_t *windows_options_local_nonprim = NULL;
    if (windows_options) { 
    windows_options_local_nonprim = io_k8s_api_core_v1_windows_security_context_options_parseFromJSON(windows_options); //nonprimitive
    }


    io_k8s_api_core_v1_pod_security_context_local_var = io_k8s_api_core_v1_pod_security_context_create (
        fs_group ? fs_group->valuedouble : 0,
        fs_group_change_policy ? strdup(fs_group_change_policy->valuestring) : NULL,
        run_as_group ? run_as_group->valuedouble : 0,
        run_as_non_root ? run_as_non_root->valueint : 0,
        run_as_user ? run_as_user->valuedouble : 0,
        se_linux_options ? se_linux_options_local_nonprim : NULL,
        seccomp_profile ? seccomp_profile_local_nonprim : NULL,
        supplemental_groups ? supplemental_groupsList : NULL,
        sysctls ? sysctlsList : NULL,
        windows_options ? windows_options_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_pod_security_context_local_var;
end:
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
