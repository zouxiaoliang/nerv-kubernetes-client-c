#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_windows_security_context_options.h"



io_k8s_api_core_v1_windows_security_context_options_t *io_k8s_api_core_v1_windows_security_context_options_create(
    char *gmsa_credential_spec,
    char *gmsa_credential_spec_name,
    char *run_as_user_name
    ) {
    io_k8s_api_core_v1_windows_security_context_options_t *io_k8s_api_core_v1_windows_security_context_options_local_var = malloc(sizeof(io_k8s_api_core_v1_windows_security_context_options_t));
    if (!io_k8s_api_core_v1_windows_security_context_options_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_windows_security_context_options_local_var->gmsa_credential_spec = gmsa_credential_spec;
    io_k8s_api_core_v1_windows_security_context_options_local_var->gmsa_credential_spec_name = gmsa_credential_spec_name;
    io_k8s_api_core_v1_windows_security_context_options_local_var->run_as_user_name = run_as_user_name;

    return io_k8s_api_core_v1_windows_security_context_options_local_var;
}


void io_k8s_api_core_v1_windows_security_context_options_free(io_k8s_api_core_v1_windows_security_context_options_t *io_k8s_api_core_v1_windows_security_context_options) {
    if(NULL == io_k8s_api_core_v1_windows_security_context_options){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_windows_security_context_options->gmsa_credential_spec) {
        free(io_k8s_api_core_v1_windows_security_context_options->gmsa_credential_spec);
        io_k8s_api_core_v1_windows_security_context_options->gmsa_credential_spec = NULL;
    }
    if (io_k8s_api_core_v1_windows_security_context_options->gmsa_credential_spec_name) {
        free(io_k8s_api_core_v1_windows_security_context_options->gmsa_credential_spec_name);
        io_k8s_api_core_v1_windows_security_context_options->gmsa_credential_spec_name = NULL;
    }
    if (io_k8s_api_core_v1_windows_security_context_options->run_as_user_name) {
        free(io_k8s_api_core_v1_windows_security_context_options->run_as_user_name);
        io_k8s_api_core_v1_windows_security_context_options->run_as_user_name = NULL;
    }
    free(io_k8s_api_core_v1_windows_security_context_options);
}

cJSON *io_k8s_api_core_v1_windows_security_context_options_convertToJSON(io_k8s_api_core_v1_windows_security_context_options_t *io_k8s_api_core_v1_windows_security_context_options) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_windows_security_context_options->gmsa_credential_spec
    if(io_k8s_api_core_v1_windows_security_context_options->gmsa_credential_spec) { 
    if(cJSON_AddStringToObject(item, "gmsaCredentialSpec", io_k8s_api_core_v1_windows_security_context_options->gmsa_credential_spec) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_windows_security_context_options->gmsa_credential_spec_name
    if(io_k8s_api_core_v1_windows_security_context_options->gmsa_credential_spec_name) { 
    if(cJSON_AddStringToObject(item, "gmsaCredentialSpecName", io_k8s_api_core_v1_windows_security_context_options->gmsa_credential_spec_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_windows_security_context_options->run_as_user_name
    if(io_k8s_api_core_v1_windows_security_context_options->run_as_user_name) { 
    if(cJSON_AddStringToObject(item, "runAsUserName", io_k8s_api_core_v1_windows_security_context_options->run_as_user_name) == NULL) {
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

io_k8s_api_core_v1_windows_security_context_options_t *io_k8s_api_core_v1_windows_security_context_options_parseFromJSON(cJSON *io_k8s_api_core_v1_windows_security_context_optionsJSON){

    io_k8s_api_core_v1_windows_security_context_options_t *io_k8s_api_core_v1_windows_security_context_options_local_var = NULL;

    // io_k8s_api_core_v1_windows_security_context_options->gmsa_credential_spec
    cJSON *gmsa_credential_spec = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_windows_security_context_optionsJSON, "gmsaCredentialSpec");
    if (gmsa_credential_spec) { 
    if(!cJSON_IsString(gmsa_credential_spec))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_windows_security_context_options->gmsa_credential_spec_name
    cJSON *gmsa_credential_spec_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_windows_security_context_optionsJSON, "gmsaCredentialSpecName");
    if (gmsa_credential_spec_name) { 
    if(!cJSON_IsString(gmsa_credential_spec_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_windows_security_context_options->run_as_user_name
    cJSON *run_as_user_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_windows_security_context_optionsJSON, "runAsUserName");
    if (run_as_user_name) { 
    if(!cJSON_IsString(run_as_user_name))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_windows_security_context_options_local_var = io_k8s_api_core_v1_windows_security_context_options_create (
        gmsa_credential_spec ? strdup(gmsa_credential_spec->valuestring) : NULL,
        gmsa_credential_spec_name ? strdup(gmsa_credential_spec_name->valuestring) : NULL,
        run_as_user_name ? strdup(run_as_user_name->valuestring) : NULL
        );

    return io_k8s_api_core_v1_windows_security_context_options_local_var;
end:
    return NULL;

}
