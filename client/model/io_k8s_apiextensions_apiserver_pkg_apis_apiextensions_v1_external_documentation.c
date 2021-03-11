#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation.h"



io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_create(
    char *description,
    char *url
    ) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_local_var = malloc(sizeof(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_t));
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_local_var) {
        return NULL;
    }
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_local_var->description = description;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_local_var->url = url;

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_local_var;
}


void io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation) {
    if(NULL == io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation->description) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation->description);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation->description = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation->url) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation->url);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation->url = NULL;
    }
    free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation);
}

cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation->description
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation->description) { 
    if(cJSON_AddStringToObject(item, "description", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation->description) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation->url
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation->url) { 
    if(cJSON_AddStringToObject(item, "url", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation->url) == NULL) {
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

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_parseFromJSON(cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentationJSON){

    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_local_var = NULL;

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentationJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentationJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }
    }


    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_local_var = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_create (
        description ? strdup(description->valuestring) : NULL,
        url ? strdup(url->valuestring) : NULL
        );

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_local_var;
end:
    return NULL;

}
