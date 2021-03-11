#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_git_repo_volume_source.h"



io_k8s_api_core_v1_git_repo_volume_source_t *io_k8s_api_core_v1_git_repo_volume_source_create(
    char *directory,
    char *repository,
    char *revision
    ) {
    io_k8s_api_core_v1_git_repo_volume_source_t *io_k8s_api_core_v1_git_repo_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_git_repo_volume_source_t));
    if (!io_k8s_api_core_v1_git_repo_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_git_repo_volume_source_local_var->directory = directory;
    io_k8s_api_core_v1_git_repo_volume_source_local_var->repository = repository;
    io_k8s_api_core_v1_git_repo_volume_source_local_var->revision = revision;

    return io_k8s_api_core_v1_git_repo_volume_source_local_var;
}


void io_k8s_api_core_v1_git_repo_volume_source_free(io_k8s_api_core_v1_git_repo_volume_source_t *io_k8s_api_core_v1_git_repo_volume_source) {
    if(NULL == io_k8s_api_core_v1_git_repo_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_git_repo_volume_source->directory) {
        free(io_k8s_api_core_v1_git_repo_volume_source->directory);
        io_k8s_api_core_v1_git_repo_volume_source->directory = NULL;
    }
    if (io_k8s_api_core_v1_git_repo_volume_source->repository) {
        free(io_k8s_api_core_v1_git_repo_volume_source->repository);
        io_k8s_api_core_v1_git_repo_volume_source->repository = NULL;
    }
    if (io_k8s_api_core_v1_git_repo_volume_source->revision) {
        free(io_k8s_api_core_v1_git_repo_volume_source->revision);
        io_k8s_api_core_v1_git_repo_volume_source->revision = NULL;
    }
    free(io_k8s_api_core_v1_git_repo_volume_source);
}

cJSON *io_k8s_api_core_v1_git_repo_volume_source_convertToJSON(io_k8s_api_core_v1_git_repo_volume_source_t *io_k8s_api_core_v1_git_repo_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_git_repo_volume_source->directory
    if(io_k8s_api_core_v1_git_repo_volume_source->directory) { 
    if(cJSON_AddStringToObject(item, "directory", io_k8s_api_core_v1_git_repo_volume_source->directory) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_git_repo_volume_source->repository
    if (!io_k8s_api_core_v1_git_repo_volume_source->repository) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "repository", io_k8s_api_core_v1_git_repo_volume_source->repository) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_git_repo_volume_source->revision
    if(io_k8s_api_core_v1_git_repo_volume_source->revision) { 
    if(cJSON_AddStringToObject(item, "revision", io_k8s_api_core_v1_git_repo_volume_source->revision) == NULL) {
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

io_k8s_api_core_v1_git_repo_volume_source_t *io_k8s_api_core_v1_git_repo_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_git_repo_volume_sourceJSON){

    io_k8s_api_core_v1_git_repo_volume_source_t *io_k8s_api_core_v1_git_repo_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_git_repo_volume_source->directory
    cJSON *directory = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_git_repo_volume_sourceJSON, "directory");
    if (directory) { 
    if(!cJSON_IsString(directory))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_git_repo_volume_source->repository
    cJSON *repository = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_git_repo_volume_sourceJSON, "repository");
    if (!repository) {
        goto end;
    }

    
    if(!cJSON_IsString(repository))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_git_repo_volume_source->revision
    cJSON *revision = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_git_repo_volume_sourceJSON, "revision");
    if (revision) { 
    if(!cJSON_IsString(revision))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_git_repo_volume_source_local_var = io_k8s_api_core_v1_git_repo_volume_source_create (
        directory ? strdup(directory->valuestring) : NULL,
        strdup(repository->valuestring),
        revision ? strdup(revision->valuestring) : NULL
        );

    return io_k8s_api_core_v1_git_repo_volume_source_local_var;
end:
    return NULL;

}
