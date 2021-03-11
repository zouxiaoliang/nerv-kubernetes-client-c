#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_flex_persistent_volume_source.h"



io_k8s_api_core_v1_flex_persistent_volume_source_t *io_k8s_api_core_v1_flex_persistent_volume_source_create(
    char *driver,
    char *fs_type,
    list_t* options,
    int read_only,
    io_k8s_api_core_v1_secret_reference_t *secret_ref
    ) {
    io_k8s_api_core_v1_flex_persistent_volume_source_t *io_k8s_api_core_v1_flex_persistent_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_flex_persistent_volume_source_t));
    if (!io_k8s_api_core_v1_flex_persistent_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_flex_persistent_volume_source_local_var->driver = driver;
    io_k8s_api_core_v1_flex_persistent_volume_source_local_var->fs_type = fs_type;
    io_k8s_api_core_v1_flex_persistent_volume_source_local_var->options = options;
    io_k8s_api_core_v1_flex_persistent_volume_source_local_var->read_only = read_only;
    io_k8s_api_core_v1_flex_persistent_volume_source_local_var->secret_ref = secret_ref;

    return io_k8s_api_core_v1_flex_persistent_volume_source_local_var;
}


void io_k8s_api_core_v1_flex_persistent_volume_source_free(io_k8s_api_core_v1_flex_persistent_volume_source_t *io_k8s_api_core_v1_flex_persistent_volume_source) {
    if(NULL == io_k8s_api_core_v1_flex_persistent_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_flex_persistent_volume_source->driver) {
        free(io_k8s_api_core_v1_flex_persistent_volume_source->driver);
        io_k8s_api_core_v1_flex_persistent_volume_source->driver = NULL;
    }
    if (io_k8s_api_core_v1_flex_persistent_volume_source->fs_type) {
        free(io_k8s_api_core_v1_flex_persistent_volume_source->fs_type);
        io_k8s_api_core_v1_flex_persistent_volume_source->fs_type = NULL;
    }
    if (io_k8s_api_core_v1_flex_persistent_volume_source->options) {
        list_ForEach(listEntry, io_k8s_api_core_v1_flex_persistent_volume_source->options) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_flex_persistent_volume_source->options);
        io_k8s_api_core_v1_flex_persistent_volume_source->options = NULL;
    }
    if (io_k8s_api_core_v1_flex_persistent_volume_source->secret_ref) {
        io_k8s_api_core_v1_secret_reference_free(io_k8s_api_core_v1_flex_persistent_volume_source->secret_ref);
        io_k8s_api_core_v1_flex_persistent_volume_source->secret_ref = NULL;
    }
    free(io_k8s_api_core_v1_flex_persistent_volume_source);
}

cJSON *io_k8s_api_core_v1_flex_persistent_volume_source_convertToJSON(io_k8s_api_core_v1_flex_persistent_volume_source_t *io_k8s_api_core_v1_flex_persistent_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_flex_persistent_volume_source->driver
    if (!io_k8s_api_core_v1_flex_persistent_volume_source->driver) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "driver", io_k8s_api_core_v1_flex_persistent_volume_source->driver) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_flex_persistent_volume_source->fs_type
    if(io_k8s_api_core_v1_flex_persistent_volume_source->fs_type) { 
    if(cJSON_AddStringToObject(item, "fsType", io_k8s_api_core_v1_flex_persistent_volume_source->fs_type) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_flex_persistent_volume_source->options
    if(io_k8s_api_core_v1_flex_persistent_volume_source->options) { 
    cJSON *options = cJSON_AddObjectToObject(item, "options");
    if(options == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = options;
    listEntry_t *optionsListEntry;
    if (io_k8s_api_core_v1_flex_persistent_volume_source->options) {
    list_ForEach(optionsListEntry, io_k8s_api_core_v1_flex_persistent_volume_source->options) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)optionsListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_flex_persistent_volume_source->read_only
    if(io_k8s_api_core_v1_flex_persistent_volume_source->read_only) { 
    if(cJSON_AddBoolToObject(item, "readOnly", io_k8s_api_core_v1_flex_persistent_volume_source->read_only) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_flex_persistent_volume_source->secret_ref
    if(io_k8s_api_core_v1_flex_persistent_volume_source->secret_ref) { 
    cJSON *secret_ref_local_JSON = io_k8s_api_core_v1_secret_reference_convertToJSON(io_k8s_api_core_v1_flex_persistent_volume_source->secret_ref);
    if(secret_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "secretRef", secret_ref_local_JSON);
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

io_k8s_api_core_v1_flex_persistent_volume_source_t *io_k8s_api_core_v1_flex_persistent_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_flex_persistent_volume_sourceJSON){

    io_k8s_api_core_v1_flex_persistent_volume_source_t *io_k8s_api_core_v1_flex_persistent_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_flex_persistent_volume_source->driver
    cJSON *driver = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_flex_persistent_volume_sourceJSON, "driver");
    if (!driver) {
        goto end;
    }

    
    if(!cJSON_IsString(driver))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_flex_persistent_volume_source->fs_type
    cJSON *fs_type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_flex_persistent_volume_sourceJSON, "fsType");
    if (fs_type) { 
    if(!cJSON_IsString(fs_type))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_flex_persistent_volume_source->options
    cJSON *options = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_flex_persistent_volume_sourceJSON, "options");
    list_t *optionsList;
    if (options) { 
    cJSON *options_local_map;
    if(!cJSON_IsObject(options)) {
        goto end;//primitive map container
    }
    optionsList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(options_local_map, options)
    {
		cJSON *localMapObject = options_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(optionsList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_flex_persistent_volume_source->read_only
    cJSON *read_only = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_flex_persistent_volume_sourceJSON, "readOnly");
    if (read_only) { 
    if(!cJSON_IsBool(read_only))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_flex_persistent_volume_source->secret_ref
    cJSON *secret_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_flex_persistent_volume_sourceJSON, "secretRef");
    io_k8s_api_core_v1_secret_reference_t *secret_ref_local_nonprim = NULL;
    if (secret_ref) { 
    secret_ref_local_nonprim = io_k8s_api_core_v1_secret_reference_parseFromJSON(secret_ref); //nonprimitive
    }


    io_k8s_api_core_v1_flex_persistent_volume_source_local_var = io_k8s_api_core_v1_flex_persistent_volume_source_create (
        strdup(driver->valuestring),
        fs_type ? strdup(fs_type->valuestring) : NULL,
        options ? optionsList : NULL,
        read_only ? read_only->valueint : 0,
        secret_ref ? secret_ref_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_flex_persistent_volume_source_local_var;
end:
    if (secret_ref_local_nonprim) {
        io_k8s_api_core_v1_secret_reference_free(secret_ref_local_nonprim);
        secret_ref_local_nonprim = NULL;
    }
    return NULL;

}
