#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_networking_v1beta1_ingress_spec.h"



io_k8s_api_networking_v1beta1_ingress_spec_t *io_k8s_api_networking_v1beta1_ingress_spec_create(
    io_k8s_api_networking_v1beta1_ingress_backend_t *backend,
    char *ingress_class_name,
    list_t *rules,
    list_t *tls
    ) {
    io_k8s_api_networking_v1beta1_ingress_spec_t *io_k8s_api_networking_v1beta1_ingress_spec_local_var = malloc(sizeof(io_k8s_api_networking_v1beta1_ingress_spec_t));
    if (!io_k8s_api_networking_v1beta1_ingress_spec_local_var) {
        return NULL;
    }
    io_k8s_api_networking_v1beta1_ingress_spec_local_var->backend = backend;
    io_k8s_api_networking_v1beta1_ingress_spec_local_var->ingress_class_name = ingress_class_name;
    io_k8s_api_networking_v1beta1_ingress_spec_local_var->rules = rules;
    io_k8s_api_networking_v1beta1_ingress_spec_local_var->tls = tls;

    return io_k8s_api_networking_v1beta1_ingress_spec_local_var;
}


void io_k8s_api_networking_v1beta1_ingress_spec_free(io_k8s_api_networking_v1beta1_ingress_spec_t *io_k8s_api_networking_v1beta1_ingress_spec) {
    if(NULL == io_k8s_api_networking_v1beta1_ingress_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_networking_v1beta1_ingress_spec->backend) {
        io_k8s_api_networking_v1beta1_ingress_backend_free(io_k8s_api_networking_v1beta1_ingress_spec->backend);
        io_k8s_api_networking_v1beta1_ingress_spec->backend = NULL;
    }
    if (io_k8s_api_networking_v1beta1_ingress_spec->ingress_class_name) {
        free(io_k8s_api_networking_v1beta1_ingress_spec->ingress_class_name);
        io_k8s_api_networking_v1beta1_ingress_spec->ingress_class_name = NULL;
    }
    if (io_k8s_api_networking_v1beta1_ingress_spec->rules) {
        list_ForEach(listEntry, io_k8s_api_networking_v1beta1_ingress_spec->rules) {
            io_k8s_api_networking_v1beta1_ingress_rule_free(listEntry->data);
        }
        list_free(io_k8s_api_networking_v1beta1_ingress_spec->rules);
        io_k8s_api_networking_v1beta1_ingress_spec->rules = NULL;
    }
    if (io_k8s_api_networking_v1beta1_ingress_spec->tls) {
        list_ForEach(listEntry, io_k8s_api_networking_v1beta1_ingress_spec->tls) {
            io_k8s_api_networking_v1beta1_ingress_tls_free(listEntry->data);
        }
        list_free(io_k8s_api_networking_v1beta1_ingress_spec->tls);
        io_k8s_api_networking_v1beta1_ingress_spec->tls = NULL;
    }
    free(io_k8s_api_networking_v1beta1_ingress_spec);
}

cJSON *io_k8s_api_networking_v1beta1_ingress_spec_convertToJSON(io_k8s_api_networking_v1beta1_ingress_spec_t *io_k8s_api_networking_v1beta1_ingress_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_networking_v1beta1_ingress_spec->backend
    if(io_k8s_api_networking_v1beta1_ingress_spec->backend) { 
    cJSON *backend_local_JSON = io_k8s_api_networking_v1beta1_ingress_backend_convertToJSON(io_k8s_api_networking_v1beta1_ingress_spec->backend);
    if(backend_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "backend", backend_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_networking_v1beta1_ingress_spec->ingress_class_name
    if(io_k8s_api_networking_v1beta1_ingress_spec->ingress_class_name) { 
    if(cJSON_AddStringToObject(item, "ingressClassName", io_k8s_api_networking_v1beta1_ingress_spec->ingress_class_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_networking_v1beta1_ingress_spec->rules
    if(io_k8s_api_networking_v1beta1_ingress_spec->rules) { 
    cJSON *rules = cJSON_AddArrayToObject(item, "rules");
    if(rules == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rulesListEntry;
    if (io_k8s_api_networking_v1beta1_ingress_spec->rules) {
    list_ForEach(rulesListEntry, io_k8s_api_networking_v1beta1_ingress_spec->rules) {
    cJSON *itemLocal = io_k8s_api_networking_v1beta1_ingress_rule_convertToJSON(rulesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(rules, itemLocal);
    }
    }
     } 


    // io_k8s_api_networking_v1beta1_ingress_spec->tls
    if(io_k8s_api_networking_v1beta1_ingress_spec->tls) { 
    cJSON *tls = cJSON_AddArrayToObject(item, "tls");
    if(tls == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tlsListEntry;
    if (io_k8s_api_networking_v1beta1_ingress_spec->tls) {
    list_ForEach(tlsListEntry, io_k8s_api_networking_v1beta1_ingress_spec->tls) {
    cJSON *itemLocal = io_k8s_api_networking_v1beta1_ingress_tls_convertToJSON(tlsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tls, itemLocal);
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_networking_v1beta1_ingress_spec_t *io_k8s_api_networking_v1beta1_ingress_spec_parseFromJSON(cJSON *io_k8s_api_networking_v1beta1_ingress_specJSON){

    io_k8s_api_networking_v1beta1_ingress_spec_t *io_k8s_api_networking_v1beta1_ingress_spec_local_var = NULL;

    // io_k8s_api_networking_v1beta1_ingress_spec->backend
    cJSON *backend = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1beta1_ingress_specJSON, "backend");
    io_k8s_api_networking_v1beta1_ingress_backend_t *backend_local_nonprim = NULL;
    if (backend) { 
    backend_local_nonprim = io_k8s_api_networking_v1beta1_ingress_backend_parseFromJSON(backend); //nonprimitive
    }

    // io_k8s_api_networking_v1beta1_ingress_spec->ingress_class_name
    cJSON *ingress_class_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1beta1_ingress_specJSON, "ingressClassName");
    if (ingress_class_name) { 
    if(!cJSON_IsString(ingress_class_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_networking_v1beta1_ingress_spec->rules
    cJSON *rules = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1beta1_ingress_specJSON, "rules");
    list_t *rulesList;
    if (rules) { 
    cJSON *rules_local_nonprimitive;
    if(!cJSON_IsArray(rules)){
        goto end; //nonprimitive container
    }

    rulesList = list_create();

    cJSON_ArrayForEach(rules_local_nonprimitive,rules )
    {
        if(!cJSON_IsObject(rules_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_networking_v1beta1_ingress_rule_t *rulesItem = io_k8s_api_networking_v1beta1_ingress_rule_parseFromJSON(rules_local_nonprimitive);

        list_addElement(rulesList, rulesItem);
    }
    }

    // io_k8s_api_networking_v1beta1_ingress_spec->tls
    cJSON *tls = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1beta1_ingress_specJSON, "tls");
    list_t *tlsList;
    if (tls) { 
    cJSON *tls_local_nonprimitive;
    if(!cJSON_IsArray(tls)){
        goto end; //nonprimitive container
    }

    tlsList = list_create();

    cJSON_ArrayForEach(tls_local_nonprimitive,tls )
    {
        if(!cJSON_IsObject(tls_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_networking_v1beta1_ingress_tls_t *tlsItem = io_k8s_api_networking_v1beta1_ingress_tls_parseFromJSON(tls_local_nonprimitive);

        list_addElement(tlsList, tlsItem);
    }
    }


    io_k8s_api_networking_v1beta1_ingress_spec_local_var = io_k8s_api_networking_v1beta1_ingress_spec_create (
        backend ? backend_local_nonprim : NULL,
        ingress_class_name ? strdup(ingress_class_name->valuestring) : NULL,
        rules ? rulesList : NULL,
        tls ? tlsList : NULL
        );

    return io_k8s_api_networking_v1beta1_ingress_spec_local_var;
end:
    if (backend_local_nonprim) {
        io_k8s_api_networking_v1beta1_ingress_backend_free(backend_local_nonprim);
        backend_local_nonprim = NULL;
    }
    return NULL;

}
