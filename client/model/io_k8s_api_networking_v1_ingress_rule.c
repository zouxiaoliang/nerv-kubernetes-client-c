#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_networking_v1_ingress_rule.h"



io_k8s_api_networking_v1_ingress_rule_t *io_k8s_api_networking_v1_ingress_rule_create(
    char *host,
    io_k8s_api_networking_v1_http_ingress_rule_value_t *http
    ) {
    io_k8s_api_networking_v1_ingress_rule_t *io_k8s_api_networking_v1_ingress_rule_local_var = malloc(sizeof(io_k8s_api_networking_v1_ingress_rule_t));
    if (!io_k8s_api_networking_v1_ingress_rule_local_var) {
        return NULL;
    }
    io_k8s_api_networking_v1_ingress_rule_local_var->host = host;
    io_k8s_api_networking_v1_ingress_rule_local_var->http = http;

    return io_k8s_api_networking_v1_ingress_rule_local_var;
}


void io_k8s_api_networking_v1_ingress_rule_free(io_k8s_api_networking_v1_ingress_rule_t *io_k8s_api_networking_v1_ingress_rule) {
    if(NULL == io_k8s_api_networking_v1_ingress_rule){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_networking_v1_ingress_rule->host) {
        free(io_k8s_api_networking_v1_ingress_rule->host);
        io_k8s_api_networking_v1_ingress_rule->host = NULL;
    }
    if (io_k8s_api_networking_v1_ingress_rule->http) {
        io_k8s_api_networking_v1_http_ingress_rule_value_free(io_k8s_api_networking_v1_ingress_rule->http);
        io_k8s_api_networking_v1_ingress_rule->http = NULL;
    }
    free(io_k8s_api_networking_v1_ingress_rule);
}

cJSON *io_k8s_api_networking_v1_ingress_rule_convertToJSON(io_k8s_api_networking_v1_ingress_rule_t *io_k8s_api_networking_v1_ingress_rule) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_networking_v1_ingress_rule->host
    if(io_k8s_api_networking_v1_ingress_rule->host) { 
    if(cJSON_AddStringToObject(item, "host", io_k8s_api_networking_v1_ingress_rule->host) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_networking_v1_ingress_rule->http
    if(io_k8s_api_networking_v1_ingress_rule->http) { 
    cJSON *http_local_JSON = io_k8s_api_networking_v1_http_ingress_rule_value_convertToJSON(io_k8s_api_networking_v1_ingress_rule->http);
    if(http_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "http", http_local_JSON);
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

io_k8s_api_networking_v1_ingress_rule_t *io_k8s_api_networking_v1_ingress_rule_parseFromJSON(cJSON *io_k8s_api_networking_v1_ingress_ruleJSON){

    io_k8s_api_networking_v1_ingress_rule_t *io_k8s_api_networking_v1_ingress_rule_local_var = NULL;

    // io_k8s_api_networking_v1_ingress_rule->host
    cJSON *host = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_ingress_ruleJSON, "host");
    if (host) { 
    if(!cJSON_IsString(host))
    {
    goto end; //String
    }
    }

    // io_k8s_api_networking_v1_ingress_rule->http
    cJSON *http = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_ingress_ruleJSON, "http");
    io_k8s_api_networking_v1_http_ingress_rule_value_t *http_local_nonprim = NULL;
    if (http) { 
    http_local_nonprim = io_k8s_api_networking_v1_http_ingress_rule_value_parseFromJSON(http); //nonprimitive
    }


    io_k8s_api_networking_v1_ingress_rule_local_var = io_k8s_api_networking_v1_ingress_rule_create (
        host ? strdup(host->valuestring) : NULL,
        http ? http_local_nonprim : NULL
        );

    return io_k8s_api_networking_v1_ingress_rule_local_var;
end:
    if (http_local_nonprim) {
        io_k8s_api_networking_v1_http_ingress_rule_value_free(http_local_nonprim);
        http_local_nonprim = NULL;
    }
    return NULL;

}
