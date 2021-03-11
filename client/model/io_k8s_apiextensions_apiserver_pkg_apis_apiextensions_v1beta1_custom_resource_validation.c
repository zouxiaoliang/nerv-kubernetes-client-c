#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation.h"



io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_create(
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_t *open_apiv3_schema
    ) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_local_var = malloc(sizeof(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_t));
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_local_var) {
        return NULL;
    }
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_local_var->open_apiv3_schema = open_apiv3_schema;

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_local_var;
}


void io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation) {
    if(NULL == io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation->open_apiv3_schema) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation->open_apiv3_schema);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation->open_apiv3_schema = NULL;
    }
    free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation);
}

cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation->open_apiv3_schema
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation->open_apiv3_schema) { 
    cJSON *open_apiv3_schema_local_JSON = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation->open_apiv3_schema);
    if(open_apiv3_schema_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "openAPIV3Schema", open_apiv3_schema_local_JSON);
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

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_parseFromJSON(cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validationJSON){

    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_local_var = NULL;

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation->open_apiv3_schema
    cJSON *open_apiv3_schema = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validationJSON, "openAPIV3Schema");
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_t *open_apiv3_schema_local_nonprim = NULL;
    if (open_apiv3_schema) { 
    open_apiv3_schema_local_nonprim = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_parseFromJSON(open_apiv3_schema); //nonprimitive
    }


    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_local_var = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_create (
        open_apiv3_schema ? open_apiv3_schema_local_nonprim : NULL
        );

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_validation_local_var;
end:
    if (open_apiv3_schema_local_nonprim) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_free(open_apiv3_schema_local_nonprim);
        open_apiv3_schema_local_nonprim = NULL;
    }
    return NULL;

}
