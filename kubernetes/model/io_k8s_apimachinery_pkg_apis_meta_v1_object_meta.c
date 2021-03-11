#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_create(
    list_t* annotations,
    char *cluster_name,
    char *creation_timestamp,
    long deletion_grace_period_seconds,
    char *deletion_timestamp,
    list_t *finalizers,
    char *generate_name,
    long generation,
    list_t* labels,
    list_t *managed_fields,
    char *name,
    char *_namespace,
    list_t *owner_references,
    char *resource_version,
    char *self_link,
    char *uid
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var->annotations = annotations;
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var->cluster_name = cluster_name;
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var->creation_timestamp = creation_timestamp;
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var->deletion_grace_period_seconds = deletion_grace_period_seconds;
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var->deletion_timestamp = deletion_timestamp;
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var->finalizers = finalizers;
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var->generate_name = generate_name;
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var->generation = generation;
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var->labels = labels;
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var->managed_fields = managed_fields;
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var->name = name;
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var->_namespace = _namespace;
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var->owner_references = owner_references;
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var->resource_version = resource_version;
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var->self_link = self_link;
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var->uid = uid;

    return io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *io_k8s_apimachinery_pkg_apis_meta_v1_object_meta) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_object_meta){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->annotations) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->annotations) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->annotations);
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->annotations = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->cluster_name) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->cluster_name);
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->cluster_name = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->creation_timestamp) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->creation_timestamp);
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->creation_timestamp = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->deletion_timestamp) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->deletion_timestamp);
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->deletion_timestamp = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->finalizers) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->finalizers) {
            free(listEntry->data);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->finalizers);
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->finalizers = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->generate_name) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->generate_name);
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->generate_name = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->labels) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->labels) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->labels);
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->labels = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->managed_fields) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->managed_fields) {
            io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_free(listEntry->data);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->managed_fields);
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->managed_fields = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->name) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->name);
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->name = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->_namespace) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->_namespace);
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->_namespace = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->owner_references) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->owner_references) {
            io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_free(listEntry->data);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->owner_references);
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->owner_references = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->resource_version) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->resource_version);
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->resource_version = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->self_link) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->self_link);
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->self_link = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->uid) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->uid);
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->uid = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *io_k8s_apimachinery_pkg_apis_meta_v1_object_meta) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->annotations
    if(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->annotations) { 
    cJSON *annotations = cJSON_AddObjectToObject(item, "annotations");
    if(annotations == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = annotations;
    listEntry_t *annotationsListEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->annotations) {
    list_ForEach(annotationsListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->annotations) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)annotationsListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->cluster_name
    if(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->cluster_name) { 
    if(cJSON_AddStringToObject(item, "clusterName", io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->cluster_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->creation_timestamp
    if(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->creation_timestamp) { 
    if(cJSON_AddStringToObject(item, "creationTimestamp", io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->creation_timestamp) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->deletion_grace_period_seconds
    if(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->deletion_grace_period_seconds) { 
    if(cJSON_AddNumberToObject(item, "deletionGracePeriodSeconds", io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->deletion_grace_period_seconds) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->deletion_timestamp
    if(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->deletion_timestamp) { 
    if(cJSON_AddStringToObject(item, "deletionTimestamp", io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->deletion_timestamp) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->finalizers
    if(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->finalizers) { 
    cJSON *finalizers = cJSON_AddArrayToObject(item, "finalizers");
    if(finalizers == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *finalizersListEntry;
    list_ForEach(finalizersListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->finalizers) {
    if(cJSON_AddStringToObject(finalizers, "", (char*)finalizersListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->generate_name
    if(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->generate_name) { 
    if(cJSON_AddStringToObject(item, "generateName", io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->generate_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->generation
    if(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->generation) { 
    if(cJSON_AddNumberToObject(item, "generation", io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->generation) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->labels
    if(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->labels) { 
    cJSON *labels = cJSON_AddObjectToObject(item, "labels");
    if(labels == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = labels;
    listEntry_t *labelsListEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->labels) {
    list_ForEach(labelsListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->labels) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)labelsListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->managed_fields
    if(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->managed_fields) { 
    cJSON *managed_fields = cJSON_AddArrayToObject(item, "managedFields");
    if(managed_fields == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *managed_fieldsListEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->managed_fields) {
    list_ForEach(managed_fieldsListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->managed_fields) {
    cJSON *itemLocal = io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_convertToJSON(managed_fieldsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(managed_fields, itemLocal);
    }
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->name
    if(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->name) { 
    if(cJSON_AddStringToObject(item, "name", io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->_namespace
    if(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->_namespace) { 
    if(cJSON_AddStringToObject(item, "namespace", io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->_namespace) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->owner_references
    if(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->owner_references) { 
    cJSON *owner_references = cJSON_AddArrayToObject(item, "ownerReferences");
    if(owner_references == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *owner_referencesListEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->owner_references) {
    list_ForEach(owner_referencesListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->owner_references) {
    cJSON *itemLocal = io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_convertToJSON(owner_referencesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(owner_references, itemLocal);
    }
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->resource_version
    if(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->resource_version) { 
    if(cJSON_AddStringToObject(item, "resourceVersion", io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->resource_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->self_link
    if(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->self_link) { 
    if(cJSON_AddStringToObject(item, "selfLink", io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->self_link) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->uid
    if(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->uid) { 
    if(cJSON_AddStringToObject(item, "uid", io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->uid) == NULL) {
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

io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_object_metaJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->annotations
    cJSON *annotations = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_object_metaJSON, "annotations");
    list_t *annotationsList;
    if (annotations) { 
    cJSON *annotations_local_map;
    if(!cJSON_IsObject(annotations)) {
        goto end;//primitive map container
    }
    annotationsList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(annotations_local_map, annotations)
    {
		cJSON *localMapObject = annotations_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(annotationsList , localMapKeyPair);
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->cluster_name
    cJSON *cluster_name = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_object_metaJSON, "clusterName");
    if (cluster_name) { 
    if(!cJSON_IsString(cluster_name))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->creation_timestamp
    cJSON *creation_timestamp = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_object_metaJSON, "creationTimestamp");
    if (creation_timestamp) { 
    if(!cJSON_IsString(creation_timestamp))
    {
    goto end; //DateTime
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->deletion_grace_period_seconds
    cJSON *deletion_grace_period_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_object_metaJSON, "deletionGracePeriodSeconds");
    if (deletion_grace_period_seconds) { 
    if(!cJSON_IsNumber(deletion_grace_period_seconds))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->deletion_timestamp
    cJSON *deletion_timestamp = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_object_metaJSON, "deletionTimestamp");
    if (deletion_timestamp) { 
    if(!cJSON_IsString(deletion_timestamp))
    {
    goto end; //DateTime
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->finalizers
    cJSON *finalizers = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_object_metaJSON, "finalizers");
    list_t *finalizersList;
    if (finalizers) { 
    cJSON *finalizers_local;
    if(!cJSON_IsArray(finalizers)) {
        goto end;//primitive container
    }
    finalizersList = list_create();

    cJSON_ArrayForEach(finalizers_local, finalizers)
    {
        if(!cJSON_IsString(finalizers_local))
        {
            goto end;
        }
        list_addElement(finalizersList , strdup(finalizers_local->valuestring));
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->generate_name
    cJSON *generate_name = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_object_metaJSON, "generateName");
    if (generate_name) { 
    if(!cJSON_IsString(generate_name))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->generation
    cJSON *generation = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_object_metaJSON, "generation");
    if (generation) { 
    if(!cJSON_IsNumber(generation))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->labels
    cJSON *labels = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_object_metaJSON, "labels");
    list_t *labelsList;
    if (labels) { 
    cJSON *labels_local_map;
    if(!cJSON_IsObject(labels)) {
        goto end;//primitive map container
    }
    labelsList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(labels_local_map, labels)
    {
		cJSON *localMapObject = labels_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(labelsList , localMapKeyPair);
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->managed_fields
    cJSON *managed_fields = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_object_metaJSON, "managedFields");
    list_t *managed_fieldsList;
    if (managed_fields) { 
    cJSON *managed_fields_local_nonprimitive;
    if(!cJSON_IsArray(managed_fields)){
        goto end; //nonprimitive container
    }

    managed_fieldsList = list_create();

    cJSON_ArrayForEach(managed_fields_local_nonprimitive,managed_fields )
    {
        if(!cJSON_IsObject(managed_fields_local_nonprimitive)){
            goto end;
        }
        io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t *managed_fieldsItem = io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_parseFromJSON(managed_fields_local_nonprimitive);

        list_addElement(managed_fieldsList, managed_fieldsItem);
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_object_metaJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_object_metaJSON, "namespace");
    if (_namespace) { 
    if(!cJSON_IsString(_namespace))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->owner_references
    cJSON *owner_references = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_object_metaJSON, "ownerReferences");
    list_t *owner_referencesList;
    if (owner_references) { 
    cJSON *owner_references_local_nonprimitive;
    if(!cJSON_IsArray(owner_references)){
        goto end; //nonprimitive container
    }

    owner_referencesList = list_create();

    cJSON_ArrayForEach(owner_references_local_nonprimitive,owner_references )
    {
        if(!cJSON_IsObject(owner_references_local_nonprimitive)){
            goto end;
        }
        io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_t *owner_referencesItem = io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_parseFromJSON(owner_references_local_nonprimitive);

        list_addElement(owner_referencesList, owner_referencesItem);
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->resource_version
    cJSON *resource_version = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_object_metaJSON, "resourceVersion");
    if (resource_version) { 
    if(!cJSON_IsString(resource_version))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->self_link
    cJSON *self_link = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_object_metaJSON, "selfLink");
    if (self_link) { 
    if(!cJSON_IsString(self_link))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_object_metaJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_create (
        annotations ? annotationsList : NULL,
        cluster_name ? strdup(cluster_name->valuestring) : NULL,
        creation_timestamp ? strdup(creation_timestamp->valuestring) : NULL,
        deletion_grace_period_seconds ? deletion_grace_period_seconds->valuedouble : 0,
        deletion_timestamp ? strdup(deletion_timestamp->valuestring) : NULL,
        finalizers ? finalizersList : NULL,
        generate_name ? strdup(generate_name->valuestring) : NULL,
        generation ? generation->valuedouble : 0,
        labels ? labelsList : NULL,
        managed_fields ? managed_fieldsList : NULL,
        name ? strdup(name->valuestring) : NULL,
        _namespace ? strdup(_namespace->valuestring) : NULL,
        owner_references ? owner_referencesList : NULL,
        resource_version ? strdup(resource_version->valuestring) : NULL,
        self_link ? strdup(self_link->valuestring) : NULL,
        uid ? strdup(uid->valuestring) : NULL
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_local_var;
end:
    return NULL;

}
