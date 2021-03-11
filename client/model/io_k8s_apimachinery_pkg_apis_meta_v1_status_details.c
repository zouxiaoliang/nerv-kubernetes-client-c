#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_status_details.h"



io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_details_create(
    list_t *causes,
    char *group,
    char *kind,
    char *name,
    int retry_after_seconds,
    char *uid
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_details_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_status_details_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_status_details_local_var->causes = causes;
    io_k8s_apimachinery_pkg_apis_meta_v1_status_details_local_var->group = group;
    io_k8s_apimachinery_pkg_apis_meta_v1_status_details_local_var->kind = kind;
    io_k8s_apimachinery_pkg_apis_meta_v1_status_details_local_var->name = name;
    io_k8s_apimachinery_pkg_apis_meta_v1_status_details_local_var->retry_after_seconds = retry_after_seconds;
    io_k8s_apimachinery_pkg_apis_meta_v1_status_details_local_var->uid = uid;

    return io_k8s_apimachinery_pkg_apis_meta_v1_status_details_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_status_details_free(io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_details) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_status_details){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_status_details->causes) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_status_details->causes) {
            io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_free(listEntry->data);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_status_details->causes);
        io_k8s_apimachinery_pkg_apis_meta_v1_status_details->causes = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_status_details->group) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_status_details->group);
        io_k8s_apimachinery_pkg_apis_meta_v1_status_details->group = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_status_details->kind) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_status_details->kind);
        io_k8s_apimachinery_pkg_apis_meta_v1_status_details->kind = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_status_details->name) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_status_details->name);
        io_k8s_apimachinery_pkg_apis_meta_v1_status_details->name = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_status_details->uid) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_status_details->uid);
        io_k8s_apimachinery_pkg_apis_meta_v1_status_details->uid = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_status_details);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_status_details_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_details) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_status_details->causes
    if(io_k8s_apimachinery_pkg_apis_meta_v1_status_details->causes) { 
    cJSON *causes = cJSON_AddArrayToObject(item, "causes");
    if(causes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *causesListEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_status_details->causes) {
    list_ForEach(causesListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_status_details->causes) {
    cJSON *itemLocal = io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_convertToJSON(causesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(causes, itemLocal);
    }
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_status_details->group
    if(io_k8s_apimachinery_pkg_apis_meta_v1_status_details->group) { 
    if(cJSON_AddStringToObject(item, "group", io_k8s_apimachinery_pkg_apis_meta_v1_status_details->group) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_status_details->kind
    if(io_k8s_apimachinery_pkg_apis_meta_v1_status_details->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_apimachinery_pkg_apis_meta_v1_status_details->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_status_details->name
    if(io_k8s_apimachinery_pkg_apis_meta_v1_status_details->name) { 
    if(cJSON_AddStringToObject(item, "name", io_k8s_apimachinery_pkg_apis_meta_v1_status_details->name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_status_details->retry_after_seconds
    if(io_k8s_apimachinery_pkg_apis_meta_v1_status_details->retry_after_seconds) { 
    if(cJSON_AddNumberToObject(item, "retryAfterSeconds", io_k8s_apimachinery_pkg_apis_meta_v1_status_details->retry_after_seconds) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_status_details->uid
    if(io_k8s_apimachinery_pkg_apis_meta_v1_status_details->uid) { 
    if(cJSON_AddStringToObject(item, "uid", io_k8s_apimachinery_pkg_apis_meta_v1_status_details->uid) == NULL) {
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

io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_details_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_status_detailsJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_details_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_status_details->causes
    cJSON *causes = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_status_detailsJSON, "causes");
    list_t *causesList;
    if (causes) { 
    cJSON *causes_local_nonprimitive;
    if(!cJSON_IsArray(causes)){
        goto end; //nonprimitive container
    }

    causesList = list_create();

    cJSON_ArrayForEach(causes_local_nonprimitive,causes )
    {
        if(!cJSON_IsObject(causes_local_nonprimitive)){
            goto end;
        }
        io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t *causesItem = io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_parseFromJSON(causes_local_nonprimitive);

        list_addElement(causesList, causesItem);
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_status_details->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_status_detailsJSON, "group");
    if (group) { 
    if(!cJSON_IsString(group))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_status_details->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_status_detailsJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_status_details->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_status_detailsJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_status_details->retry_after_seconds
    cJSON *retry_after_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_status_detailsJSON, "retryAfterSeconds");
    if (retry_after_seconds) { 
    if(!cJSON_IsNumber(retry_after_seconds))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_status_details->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_status_detailsJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_status_details_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_status_details_create (
        causes ? causesList : NULL,
        group ? strdup(group->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        retry_after_seconds ? retry_after_seconds->valuedouble : 0,
        uid ? strdup(uid->valuestring) : NULL
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_status_details_local_var;
end:
    return NULL;

}
