#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry.h"



io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t *io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_create(
    char *api_version,
    char *fields_type,
    object_t *fields_v1,
    char *manager,
    char *operation,
    char *time
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t *io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_local_var->api_version = api_version;
    io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_local_var->fields_type = fields_type;
    io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_local_var->fields_v1 = fields_v1;
    io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_local_var->manager = manager;
    io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_local_var->operation = operation;
    io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_local_var->time = time;

    return io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_free(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t *io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->api_version) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->api_version);
        io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->api_version = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->fields_type) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->fields_type);
        io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->fields_type = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->fields_v1) {
        object_free(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->fields_v1);
        io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->fields_v1 = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->manager) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->manager);
        io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->manager = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->operation) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->operation);
        io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->operation = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->time) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->time);
        io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->time = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t *io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->api_version
    if(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->fields_type
    if(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->fields_type) { 
    if(cJSON_AddStringToObject(item, "fieldsType", io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->fields_type) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->fields_v1
    if(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->fields_v1) { 
    cJSON *fields_v1_object = object_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->fields_v1);
    if(fields_v1_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "fieldsV1", fields_v1_object);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->manager
    if(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->manager) { 
    if(cJSON_AddStringToObject(item, "manager", io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->manager) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->operation
    if(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->operation) { 
    if(cJSON_AddStringToObject(item, "operation", io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->operation) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->time
    if(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->time) { 
    if(cJSON_AddStringToObject(item, "time", io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->time) == NULL) {
    goto fail; //Date-Time
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t *io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entryJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t *io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entryJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->fields_type
    cJSON *fields_type = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entryJSON, "fieldsType");
    if (fields_type) { 
    if(!cJSON_IsString(fields_type))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->fields_v1
    cJSON *fields_v1 = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entryJSON, "fieldsV1");
    object_t *fields_v1_local_object = NULL;
    if (fields_v1) { 
    fields_v1_local_object = object_parseFromJSON(fields_v1); //object
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->manager
    cJSON *manager = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entryJSON, "manager");
    if (manager) { 
    if(!cJSON_IsString(manager))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->operation
    cJSON *operation = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entryJSON, "operation");
    if (operation) { 
    if(!cJSON_IsString(operation))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entryJSON, "time");
    if (time) { 
    if(!cJSON_IsString(time))
    {
    goto end; //DateTime
    }
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        fields_type ? strdup(fields_type->valuestring) : NULL,
        fields_v1 ? fields_v1_local_object : NULL,
        manager ? strdup(manager->valuestring) : NULL,
        operation ? strdup(operation->valuestring) : NULL,
        time ? strdup(time->valuestring) : NULL
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_local_var;
end:
    return NULL;

}
