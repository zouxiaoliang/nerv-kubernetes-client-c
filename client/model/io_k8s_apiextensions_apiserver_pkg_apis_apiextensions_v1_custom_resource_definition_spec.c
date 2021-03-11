#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec.h"



io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_create(
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_t *conversion,
    char *group,
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_t *names,
    int preserve_unknown_fields,
    char *scope,
    list_t *versions
    ) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_local_var = malloc(sizeof(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_t));
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_local_var) {
        return NULL;
    }
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_local_var->conversion = conversion;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_local_var->group = group;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_local_var->names = names;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_local_var->preserve_unknown_fields = preserve_unknown_fields;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_local_var->scope = scope;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_local_var->versions = versions;

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_local_var;
}


void io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec) {
    if(NULL == io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->conversion) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->conversion);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->conversion = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->group) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->group);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->group = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->names) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->names);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->names = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->scope) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->scope);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->scope = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->versions) {
        list_ForEach(listEntry, io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->versions) {
            io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_free(listEntry->data);
        }
        list_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->versions);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->versions = NULL;
    }
    free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec);
}

cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->conversion
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->conversion) { 
    cJSON *conversion_local_JSON = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->conversion);
    if(conversion_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "conversion", conversion_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->group
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->group) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "group", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->group) == NULL) {
    goto fail; //String
    }


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->names
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->names) {
        goto fail;
    }
    
    cJSON *names_local_JSON = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->names);
    if(names_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "names", names_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->preserve_unknown_fields
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->preserve_unknown_fields) { 
    if(cJSON_AddBoolToObject(item, "preserveUnknownFields", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->preserve_unknown_fields) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->scope
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->scope) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "scope", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->scope) == NULL) {
    goto fail; //String
    }


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->versions
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->versions) {
        goto fail;
    }
    
    cJSON *versions = cJSON_AddArrayToObject(item, "versions");
    if(versions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *versionsListEntry;
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->versions) {
    list_ForEach(versionsListEntry, io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->versions) {
    cJSON *itemLocal = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_convertToJSON(versionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(versions, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_parseFromJSON(cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_specJSON){

    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_local_var = NULL;

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->conversion
    cJSON *conversion = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_specJSON, "conversion");
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_t *conversion_local_nonprim = NULL;
    if (conversion) { 
    conversion_local_nonprim = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_parseFromJSON(conversion); //nonprimitive
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_specJSON, "group");
    if (!group) {
        goto end;
    }

    
    if(!cJSON_IsString(group))
    {
    goto end; //String
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->names
    cJSON *names = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_specJSON, "names");
    if (!names) {
        goto end;
    }

    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_t *names_local_nonprim = NULL;
    
    names_local_nonprim = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_parseFromJSON(names); //nonprimitive

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->preserve_unknown_fields
    cJSON *preserve_unknown_fields = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_specJSON, "preserveUnknownFields");
    if (preserve_unknown_fields) { 
    if(!cJSON_IsBool(preserve_unknown_fields))
    {
    goto end; //Bool
    }
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->scope
    cJSON *scope = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_specJSON, "scope");
    if (!scope) {
        goto end;
    }

    
    if(!cJSON_IsString(scope))
    {
    goto end; //String
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec->versions
    cJSON *versions = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_specJSON, "versions");
    if (!versions) {
        goto end;
    }

    list_t *versionsList;
    
    cJSON *versions_local_nonprimitive;
    if(!cJSON_IsArray(versions)){
        goto end; //nonprimitive container
    }

    versionsList = list_create();

    cJSON_ArrayForEach(versions_local_nonprimitive,versions )
    {
        if(!cJSON_IsObject(versions_local_nonprimitive)){
            goto end;
        }
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_t *versionsItem = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_parseFromJSON(versions_local_nonprimitive);

        list_addElement(versionsList, versionsItem);
    }


    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_local_var = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_create (
        conversion ? conversion_local_nonprim : NULL,
        strdup(group->valuestring),
        names_local_nonprim,
        preserve_unknown_fields ? preserve_unknown_fields->valueint : 0,
        strdup(scope->valuestring),
        versionsList
        );

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec_local_var;
end:
    if (conversion_local_nonprim) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_free(conversion_local_nonprim);
        conversion_local_nonprim = NULL;
    }
    if (names_local_nonprim) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_names_free(names_local_nonprim);
        names_local_nonprim = NULL;
    }
    return NULL;

}
