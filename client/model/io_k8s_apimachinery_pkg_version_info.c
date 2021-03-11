#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_version_info.h"



io_k8s_apimachinery_pkg_version_info_t *io_k8s_apimachinery_pkg_version_info_create(
    char *build_date,
    char *compiler,
    char *git_commit,
    char *git_tree_state,
    char *git_version,
    char *go_version,
    char *major,
    char *minor,
    char *platform
    ) {
    io_k8s_apimachinery_pkg_version_info_t *io_k8s_apimachinery_pkg_version_info_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_version_info_t));
    if (!io_k8s_apimachinery_pkg_version_info_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_version_info_local_var->build_date = build_date;
    io_k8s_apimachinery_pkg_version_info_local_var->compiler = compiler;
    io_k8s_apimachinery_pkg_version_info_local_var->git_commit = git_commit;
    io_k8s_apimachinery_pkg_version_info_local_var->git_tree_state = git_tree_state;
    io_k8s_apimachinery_pkg_version_info_local_var->git_version = git_version;
    io_k8s_apimachinery_pkg_version_info_local_var->go_version = go_version;
    io_k8s_apimachinery_pkg_version_info_local_var->major = major;
    io_k8s_apimachinery_pkg_version_info_local_var->minor = minor;
    io_k8s_apimachinery_pkg_version_info_local_var->platform = platform;

    return io_k8s_apimachinery_pkg_version_info_local_var;
}


void io_k8s_apimachinery_pkg_version_info_free(io_k8s_apimachinery_pkg_version_info_t *io_k8s_apimachinery_pkg_version_info) {
    if(NULL == io_k8s_apimachinery_pkg_version_info){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_version_info->build_date) {
        free(io_k8s_apimachinery_pkg_version_info->build_date);
        io_k8s_apimachinery_pkg_version_info->build_date = NULL;
    }
    if (io_k8s_apimachinery_pkg_version_info->compiler) {
        free(io_k8s_apimachinery_pkg_version_info->compiler);
        io_k8s_apimachinery_pkg_version_info->compiler = NULL;
    }
    if (io_k8s_apimachinery_pkg_version_info->git_commit) {
        free(io_k8s_apimachinery_pkg_version_info->git_commit);
        io_k8s_apimachinery_pkg_version_info->git_commit = NULL;
    }
    if (io_k8s_apimachinery_pkg_version_info->git_tree_state) {
        free(io_k8s_apimachinery_pkg_version_info->git_tree_state);
        io_k8s_apimachinery_pkg_version_info->git_tree_state = NULL;
    }
    if (io_k8s_apimachinery_pkg_version_info->git_version) {
        free(io_k8s_apimachinery_pkg_version_info->git_version);
        io_k8s_apimachinery_pkg_version_info->git_version = NULL;
    }
    if (io_k8s_apimachinery_pkg_version_info->go_version) {
        free(io_k8s_apimachinery_pkg_version_info->go_version);
        io_k8s_apimachinery_pkg_version_info->go_version = NULL;
    }
    if (io_k8s_apimachinery_pkg_version_info->major) {
        free(io_k8s_apimachinery_pkg_version_info->major);
        io_k8s_apimachinery_pkg_version_info->major = NULL;
    }
    if (io_k8s_apimachinery_pkg_version_info->minor) {
        free(io_k8s_apimachinery_pkg_version_info->minor);
        io_k8s_apimachinery_pkg_version_info->minor = NULL;
    }
    if (io_k8s_apimachinery_pkg_version_info->platform) {
        free(io_k8s_apimachinery_pkg_version_info->platform);
        io_k8s_apimachinery_pkg_version_info->platform = NULL;
    }
    free(io_k8s_apimachinery_pkg_version_info);
}

cJSON *io_k8s_apimachinery_pkg_version_info_convertToJSON(io_k8s_apimachinery_pkg_version_info_t *io_k8s_apimachinery_pkg_version_info) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_version_info->build_date
    if (!io_k8s_apimachinery_pkg_version_info->build_date) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "buildDate", io_k8s_apimachinery_pkg_version_info->build_date) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_version_info->compiler
    if (!io_k8s_apimachinery_pkg_version_info->compiler) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "compiler", io_k8s_apimachinery_pkg_version_info->compiler) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_version_info->git_commit
    if (!io_k8s_apimachinery_pkg_version_info->git_commit) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "gitCommit", io_k8s_apimachinery_pkg_version_info->git_commit) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_version_info->git_tree_state
    if (!io_k8s_apimachinery_pkg_version_info->git_tree_state) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "gitTreeState", io_k8s_apimachinery_pkg_version_info->git_tree_state) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_version_info->git_version
    if (!io_k8s_apimachinery_pkg_version_info->git_version) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "gitVersion", io_k8s_apimachinery_pkg_version_info->git_version) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_version_info->go_version
    if (!io_k8s_apimachinery_pkg_version_info->go_version) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "goVersion", io_k8s_apimachinery_pkg_version_info->go_version) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_version_info->major
    if (!io_k8s_apimachinery_pkg_version_info->major) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "major", io_k8s_apimachinery_pkg_version_info->major) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_version_info->minor
    if (!io_k8s_apimachinery_pkg_version_info->minor) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "minor", io_k8s_apimachinery_pkg_version_info->minor) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_version_info->platform
    if (!io_k8s_apimachinery_pkg_version_info->platform) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "platform", io_k8s_apimachinery_pkg_version_info->platform) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_apimachinery_pkg_version_info_t *io_k8s_apimachinery_pkg_version_info_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_version_infoJSON){

    io_k8s_apimachinery_pkg_version_info_t *io_k8s_apimachinery_pkg_version_info_local_var = NULL;

    // io_k8s_apimachinery_pkg_version_info->build_date
    cJSON *build_date = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_version_infoJSON, "buildDate");
    if (!build_date) {
        goto end;
    }

    
    if(!cJSON_IsString(build_date))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_version_info->compiler
    cJSON *compiler = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_version_infoJSON, "compiler");
    if (!compiler) {
        goto end;
    }

    
    if(!cJSON_IsString(compiler))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_version_info->git_commit
    cJSON *git_commit = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_version_infoJSON, "gitCommit");
    if (!git_commit) {
        goto end;
    }

    
    if(!cJSON_IsString(git_commit))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_version_info->git_tree_state
    cJSON *git_tree_state = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_version_infoJSON, "gitTreeState");
    if (!git_tree_state) {
        goto end;
    }

    
    if(!cJSON_IsString(git_tree_state))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_version_info->git_version
    cJSON *git_version = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_version_infoJSON, "gitVersion");
    if (!git_version) {
        goto end;
    }

    
    if(!cJSON_IsString(git_version))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_version_info->go_version
    cJSON *go_version = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_version_infoJSON, "goVersion");
    if (!go_version) {
        goto end;
    }

    
    if(!cJSON_IsString(go_version))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_version_info->major
    cJSON *major = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_version_infoJSON, "major");
    if (!major) {
        goto end;
    }

    
    if(!cJSON_IsString(major))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_version_info->minor
    cJSON *minor = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_version_infoJSON, "minor");
    if (!minor) {
        goto end;
    }

    
    if(!cJSON_IsString(minor))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_version_info->platform
    cJSON *platform = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_version_infoJSON, "platform");
    if (!platform) {
        goto end;
    }

    
    if(!cJSON_IsString(platform))
    {
    goto end; //String
    }


    io_k8s_apimachinery_pkg_version_info_local_var = io_k8s_apimachinery_pkg_version_info_create (
        strdup(build_date->valuestring),
        strdup(compiler->valuestring),
        strdup(git_commit->valuestring),
        strdup(git_tree_state->valuestring),
        strdup(git_version->valuestring),
        strdup(go_version->valuestring),
        strdup(major->valuestring),
        strdup(minor->valuestring),
        strdup(platform->valuestring)
        );

    return io_k8s_apimachinery_pkg_version_info_local_var;
end:
    return NULL;

}
