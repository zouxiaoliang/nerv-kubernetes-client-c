#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version.h"



io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_create(
    list_t *additional_printer_columns,
    int deprecated,
    char *deprecation_warning,
    char *name,
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_validation_t *schema,
    int served,
    int storage,
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresources_t *subresources
    ) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_local_var = malloc(sizeof(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_t));
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_local_var) {
        return NULL;
    }
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_local_var->additional_printer_columns = additional_printer_columns;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_local_var->deprecated = deprecated;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_local_var->deprecation_warning = deprecation_warning;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_local_var->name = name;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_local_var->schema = schema;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_local_var->served = served;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_local_var->storage = storage;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_local_var->subresources = subresources;

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_local_var;
}


void io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version) {
    if(NULL == io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->additional_printer_columns) {
        list_ForEach(listEntry, io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->additional_printer_columns) {
            io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_free(listEntry->data);
        }
        list_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->additional_printer_columns);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->additional_printer_columns = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->deprecation_warning) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->deprecation_warning);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->deprecation_warning = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->name) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->name);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->name = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->schema) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_validation_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->schema);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->schema = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->subresources) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresources_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->subresources);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->subresources = NULL;
    }
    free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version);
}

cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->additional_printer_columns
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->additional_printer_columns) { 
    cJSON *additional_printer_columns = cJSON_AddArrayToObject(item, "additionalPrinterColumns");
    if(additional_printer_columns == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *additional_printer_columnsListEntry;
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->additional_printer_columns) {
    list_ForEach(additional_printer_columnsListEntry, io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->additional_printer_columns) {
    cJSON *itemLocal = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_convertToJSON(additional_printer_columnsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(additional_printer_columns, itemLocal);
    }
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->deprecated
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->deprecated) { 
    if(cJSON_AddBoolToObject(item, "deprecated", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->deprecated) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->deprecation_warning
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->deprecation_warning) { 
    if(cJSON_AddStringToObject(item, "deprecationWarning", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->deprecation_warning) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->name
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->schema
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->schema) { 
    cJSON *schema_local_JSON = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_validation_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->schema);
    if(schema_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "schema", schema_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->served
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->served) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "served", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->served) == NULL) {
    goto fail; //Bool
    }


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->storage
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->storage) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "storage", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->storage) == NULL) {
    goto fail; //Bool
    }


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->subresources
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->subresources) { 
    cJSON *subresources_local_JSON = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresources_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->subresources);
    if(subresources_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "subresources", subresources_local_JSON);
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

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_parseFromJSON(cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_versionJSON){

    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_local_var = NULL;

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->additional_printer_columns
    cJSON *additional_printer_columns = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_versionJSON, "additionalPrinterColumns");
    list_t *additional_printer_columnsList;
    if (additional_printer_columns) { 
    cJSON *additional_printer_columns_local_nonprimitive;
    if(!cJSON_IsArray(additional_printer_columns)){
        goto end; //nonprimitive container
    }

    additional_printer_columnsList = list_create();

    cJSON_ArrayForEach(additional_printer_columns_local_nonprimitive,additional_printer_columns )
    {
        if(!cJSON_IsObject(additional_printer_columns_local_nonprimitive)){
            goto end;
        }
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_t *additional_printer_columnsItem = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_parseFromJSON(additional_printer_columns_local_nonprimitive);

        list_addElement(additional_printer_columnsList, additional_printer_columnsItem);
    }
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->deprecated
    cJSON *deprecated = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_versionJSON, "deprecated");
    if (deprecated) { 
    if(!cJSON_IsBool(deprecated))
    {
    goto end; //Bool
    }
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->deprecation_warning
    cJSON *deprecation_warning = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_versionJSON, "deprecationWarning");
    if (deprecation_warning) { 
    if(!cJSON_IsString(deprecation_warning))
    {
    goto end; //String
    }
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_versionJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->schema
    cJSON *schema = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_versionJSON, "schema");
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_validation_t *schema_local_nonprim = NULL;
    if (schema) { 
    schema_local_nonprim = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_validation_parseFromJSON(schema); //nonprimitive
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->served
    cJSON *served = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_versionJSON, "served");
    if (!served) {
        goto end;
    }

    
    if(!cJSON_IsBool(served))
    {
    goto end; //Bool
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->storage
    cJSON *storage = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_versionJSON, "storage");
    if (!storage) {
        goto end;
    }

    
    if(!cJSON_IsBool(storage))
    {
    goto end; //Bool
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version->subresources
    cJSON *subresources = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_versionJSON, "subresources");
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresources_t *subresources_local_nonprim = NULL;
    if (subresources) { 
    subresources_local_nonprim = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresources_parseFromJSON(subresources); //nonprimitive
    }


    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_local_var = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_create (
        additional_printer_columns ? additional_printer_columnsList : NULL,
        deprecated ? deprecated->valueint : 0,
        deprecation_warning ? strdup(deprecation_warning->valuestring) : NULL,
        strdup(name->valuestring),
        schema ? schema_local_nonprim : NULL,
        served->valueint,
        storage->valueint,
        subresources ? subresources_local_nonprim : NULL
        );

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_version_local_var;
end:
    if (schema_local_nonprim) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_validation_free(schema_local_nonprim);
        schema_local_nonprim = NULL;
    }
    if (subresources_local_nonprim) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresources_free(subresources_local_nonprim);
        subresources_local_nonprim = NULL;
    }
    return NULL;

}
