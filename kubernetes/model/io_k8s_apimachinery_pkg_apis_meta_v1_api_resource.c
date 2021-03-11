#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_api_resource.h"



io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_create(
    list_t *categories,
    char *group,
    char *kind,
    char *name,
    int namespaced,
    list_t *short_names,
    char *singular_name,
    char *storage_version_hash,
    list_t *verbs,
    char *version
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_local_var->categories = categories;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_local_var->group = group;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_local_var->kind = kind;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_local_var->name = name;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_local_var->namespaced = namespaced;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_local_var->short_names = short_names;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_local_var->singular_name = singular_name;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_local_var->storage_version_hash = storage_version_hash;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_local_var->verbs = verbs;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_local_var->version = version;

    return io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_api_resource){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->categories) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->categories) {
            free(listEntry->data);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->categories);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->categories = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->group) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->group);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->group = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->kind) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->kind);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->kind = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->name) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->name);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->name = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->short_names) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->short_names) {
            free(listEntry->data);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->short_names);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->short_names = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->singular_name) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->singular_name);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->singular_name = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->storage_version_hash) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->storage_version_hash);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->storage_version_hash = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->verbs) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->verbs) {
            free(listEntry->data);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->verbs);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->verbs = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->version) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->version);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->version = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->categories
    if(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->categories) { 
    cJSON *categories = cJSON_AddArrayToObject(item, "categories");
    if(categories == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *categoriesListEntry;
    list_ForEach(categoriesListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->categories) {
    if(cJSON_AddStringToObject(categories, "", (char*)categoriesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->group
    if(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->group) { 
    if(cJSON_AddStringToObject(item, "group", io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->group) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->kind
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->kind) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "kind", io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->kind) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->name
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->namespaced
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->namespaced) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "namespaced", io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->namespaced) == NULL) {
    goto fail; //Bool
    }


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->short_names
    if(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->short_names) { 
    cJSON *short_names = cJSON_AddArrayToObject(item, "shortNames");
    if(short_names == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *short_namesListEntry;
    list_ForEach(short_namesListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->short_names) {
    if(cJSON_AddStringToObject(short_names, "", (char*)short_namesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->singular_name
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->singular_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "singularName", io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->singular_name) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->storage_version_hash
    if(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->storage_version_hash) { 
    if(cJSON_AddStringToObject(item, "storageVersionHash", io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->storage_version_hash) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->verbs
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->verbs) {
        goto fail;
    }
    
    cJSON *verbs = cJSON_AddArrayToObject(item, "verbs");
    if(verbs == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *verbsListEntry;
    list_ForEach(verbsListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->verbs) {
    if(cJSON_AddStringToObject(verbs, "", (char*)verbsListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->version
    if(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->version) { 
    if(cJSON_AddStringToObject(item, "version", io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->version) == NULL) {
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

io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_resourceJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->categories
    cJSON *categories = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_resourceJSON, "categories");
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

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_resourceJSON, "group");
    if (group) { 
    if(!cJSON_IsString(group))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_resourceJSON, "kind");
    if (!kind) {
        goto end;
    }

    
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_resourceJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->namespaced
    cJSON *namespaced = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_resourceJSON, "namespaced");
    if (!namespaced) {
        goto end;
    }

    
    if(!cJSON_IsBool(namespaced))
    {
    goto end; //Bool
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->short_names
    cJSON *short_names = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_resourceJSON, "shortNames");
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

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->singular_name
    cJSON *singular_name = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_resourceJSON, "singularName");
    if (!singular_name) {
        goto end;
    }

    
    if(!cJSON_IsString(singular_name))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->storage_version_hash
    cJSON *storage_version_hash = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_resourceJSON, "storageVersionHash");
    if (storage_version_hash) { 
    if(!cJSON_IsString(storage_version_hash))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->verbs
    cJSON *verbs = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_resourceJSON, "verbs");
    if (!verbs) {
        goto end;
    }

    list_t *verbsList;
    
    cJSON *verbs_local;
    if(!cJSON_IsArray(verbs)) {
        goto end;//primitive container
    }
    verbsList = list_create();

    cJSON_ArrayForEach(verbs_local, verbs)
    {
        if(!cJSON_IsString(verbs_local))
        {
            goto end;
        }
        list_addElement(verbsList , strdup(verbs_local->valuestring));
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_resourceJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version))
    {
    goto end; //String
    }
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_create (
        categories ? categoriesList : NULL,
        group ? strdup(group->valuestring) : NULL,
        strdup(kind->valuestring),
        strdup(name->valuestring),
        namespaced->valueint,
        short_names ? short_namesList : NULL,
        strdup(singular_name->valuestring),
        storage_version_hash ? strdup(storage_version_hash->valuestring) : NULL,
        verbsList,
        version ? strdup(version->valuestring) : NULL
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_local_var;
end:
    return NULL;

}
