#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names.h"



io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_create(
    list_t *categories,
    char *kind,
    char *list_kind,
    char *plural,
    list_t *short_names,
    char *singular
    ) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_local_var = malloc(sizeof(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_t));
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_local_var) {
        return NULL;
    }
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_local_var->categories = categories;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_local_var->kind = kind;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_local_var->list_kind = list_kind;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_local_var->plural = plural;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_local_var->short_names = short_names;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_local_var->singular = singular;

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_local_var;
}


void io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names) {
    if(NULL == io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->categories) {
        list_ForEach(listEntry, io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->categories) {
            free(listEntry->data);
        }
        list_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->categories);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->categories = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->kind) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->kind);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->kind = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->list_kind) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->list_kind);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->list_kind = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->plural) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->plural);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->plural = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->short_names) {
        list_ForEach(listEntry, io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->short_names) {
            free(listEntry->data);
        }
        list_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->short_names);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->short_names = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->singular) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->singular);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->singular = NULL;
    }
    free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names);
}

cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->categories
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->categories) { 
    cJSON *categories = cJSON_AddArrayToObject(item, "categories");
    if(categories == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *categoriesListEntry;
    list_ForEach(categoriesListEntry, io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->categories) {
    if(cJSON_AddStringToObject(categories, "", (char*)categoriesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->kind
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->kind) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "kind", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->kind) == NULL) {
    goto fail; //String
    }


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->list_kind
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->list_kind) { 
    if(cJSON_AddStringToObject(item, "listKind", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->list_kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->plural
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->plural) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "plural", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->plural) == NULL) {
    goto fail; //String
    }


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->short_names
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->short_names) { 
    cJSON *short_names = cJSON_AddArrayToObject(item, "shortNames");
    if(short_names == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *short_namesListEntry;
    list_ForEach(short_namesListEntry, io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->short_names) {
    if(cJSON_AddStringToObject(short_names, "", (char*)short_namesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->singular
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->singular) { 
    if(cJSON_AddStringToObject(item, "singular", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->singular) == NULL) {
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

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_parseFromJSON(cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_namesJSON){

    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_local_var = NULL;

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->categories
    cJSON *categories = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_namesJSON, "categories");
    list_t *categoriesList;
    if (categories) { 
    cJSON *categories_local;
    if(!cJSON_IsArray(categories)) {
        goto end;//primitive container
    }
    categoriesList = list_create();

    cJSON_ArrayForEach(categories_local, categories)
    {
        if(!cJSON_IsString(categories_local))
        {
            goto end;
        }
        list_addElement(categoriesList , strdup(categories_local->valuestring));
    }
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_namesJSON, "kind");
    if (!kind) {
        goto end;
    }

    
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->list_kind
    cJSON *list_kind = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_namesJSON, "listKind");
    if (list_kind) { 
    if(!cJSON_IsString(list_kind))
    {
    goto end; //String
    }
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->plural
    cJSON *plural = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_namesJSON, "plural");
    if (!plural) {
        goto end;
    }

    
    if(!cJSON_IsString(plural))
    {
    goto end; //String
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->short_names
    cJSON *short_names = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_namesJSON, "shortNames");
    list_t *short_namesList;
    if (short_names) { 
    cJSON *short_names_local;
    if(!cJSON_IsArray(short_names)) {
        goto end;//primitive container
    }
    short_namesList = list_create();

    cJSON_ArrayForEach(short_names_local, short_names)
    {
        if(!cJSON_IsString(short_names_local))
        {
            goto end;
        }
        list_addElement(short_namesList , strdup(short_names_local->valuestring));
    }
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names->singular
    cJSON *singular = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_namesJSON, "singular");
    if (singular) { 
    if(!cJSON_IsString(singular))
    {
    goto end; //String
    }
    }


    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_local_var = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_create (
        categories ? categoriesList : NULL,
        strdup(kind->valuestring),
        list_kind ? strdup(list_kind->valuestring) : NULL,
        strdup(plural->valuestring),
        short_names ? short_namesList : NULL,
        singular ? strdup(singular->valuestring) : NULL
        );

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_local_var;
end:
    return NULL;

}
