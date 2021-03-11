#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_authorization_v1beta1_self_subject_access_review_spec.h"



io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_t *io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_create(
    io_k8s_api_authorization_v1beta1_non_resource_attributes_t *non_resource_attributes,
    io_k8s_api_authorization_v1beta1_resource_attributes_t *resource_attributes
    ) {
    io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_t *io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_local_var = malloc(sizeof(io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_t));
    if (!io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_local_var) {
        return NULL;
    }
    io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_local_var->non_resource_attributes = non_resource_attributes;
    io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_local_var->resource_attributes = resource_attributes;

    return io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_local_var;
}


void io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_free(io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_t *io_k8s_api_authorization_v1beta1_self_subject_access_review_spec) {
    if(NULL == io_k8s_api_authorization_v1beta1_self_subject_access_review_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_authorization_v1beta1_self_subject_access_review_spec->non_resource_attributes) {
        io_k8s_api_authorization_v1beta1_non_resource_attributes_free(io_k8s_api_authorization_v1beta1_self_subject_access_review_spec->non_resource_attributes);
        io_k8s_api_authorization_v1beta1_self_subject_access_review_spec->non_resource_attributes = NULL;
    }
    if (io_k8s_api_authorization_v1beta1_self_subject_access_review_spec->resource_attributes) {
        io_k8s_api_authorization_v1beta1_resource_attributes_free(io_k8s_api_authorization_v1beta1_self_subject_access_review_spec->resource_attributes);
        io_k8s_api_authorization_v1beta1_self_subject_access_review_spec->resource_attributes = NULL;
    }
    free(io_k8s_api_authorization_v1beta1_self_subject_access_review_spec);
}

cJSON *io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_convertToJSON(io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_t *io_k8s_api_authorization_v1beta1_self_subject_access_review_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_authorization_v1beta1_self_subject_access_review_spec->non_resource_attributes
    if(io_k8s_api_authorization_v1beta1_self_subject_access_review_spec->non_resource_attributes) { 
    cJSON *non_resource_attributes_local_JSON = io_k8s_api_authorization_v1beta1_non_resource_attributes_convertToJSON(io_k8s_api_authorization_v1beta1_self_subject_access_review_spec->non_resource_attributes);
    if(non_resource_attributes_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "nonResourceAttributes", non_resource_attributes_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_authorization_v1beta1_self_subject_access_review_spec->resource_attributes
    if(io_k8s_api_authorization_v1beta1_self_subject_access_review_spec->resource_attributes) { 
    cJSON *resource_attributes_local_JSON = io_k8s_api_authorization_v1beta1_resource_attributes_convertToJSON(io_k8s_api_authorization_v1beta1_self_subject_access_review_spec->resource_attributes);
    if(resource_attributes_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resourceAttributes", resource_attributes_local_JSON);
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

io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_t *io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_parseFromJSON(cJSON *io_k8s_api_authorization_v1beta1_self_subject_access_review_specJSON){

    io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_t *io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_local_var = NULL;

    // io_k8s_api_authorization_v1beta1_self_subject_access_review_spec->non_resource_attributes
    cJSON *non_resource_attributes = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1beta1_self_subject_access_review_specJSON, "nonResourceAttributes");
    io_k8s_api_authorization_v1beta1_non_resource_attributes_t *non_resource_attributes_local_nonprim = NULL;
    if (non_resource_attributes) { 
    non_resource_attributes_local_nonprim = io_k8s_api_authorization_v1beta1_non_resource_attributes_parseFromJSON(non_resource_attributes); //nonprimitive
    }

    // io_k8s_api_authorization_v1beta1_self_subject_access_review_spec->resource_attributes
    cJSON *resource_attributes = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1beta1_self_subject_access_review_specJSON, "resourceAttributes");
    io_k8s_api_authorization_v1beta1_resource_attributes_t *resource_attributes_local_nonprim = NULL;
    if (resource_attributes) { 
    resource_attributes_local_nonprim = io_k8s_api_authorization_v1beta1_resource_attributes_parseFromJSON(resource_attributes); //nonprimitive
    }


    io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_local_var = io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_create (
        non_resource_attributes ? non_resource_attributes_local_nonprim : NULL,
        resource_attributes ? resource_attributes_local_nonprim : NULL
        );

    return io_k8s_api_authorization_v1beta1_self_subject_access_review_spec_local_var;
end:
    if (non_resource_attributes_local_nonprim) {
        io_k8s_api_authorization_v1beta1_non_resource_attributes_free(non_resource_attributes_local_nonprim);
        non_resource_attributes_local_nonprim = NULL;
    }
    if (resource_attributes_local_nonprim) {
        io_k8s_api_authorization_v1beta1_resource_attributes_free(resource_attributes_local_nonprim);
        resource_attributes_local_nonprim = NULL;
    }
    return NULL;

}
