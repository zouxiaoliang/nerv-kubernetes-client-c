#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule.h"



io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_t *io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_create(
    list_t *non_resource_urls,
    list_t *verbs
    ) {
    io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_t *io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_local_var = malloc(sizeof(io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_t));
    if (!io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_local_var) {
        return NULL;
    }
    io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_local_var->non_resource_urls = non_resource_urls;
    io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_local_var->verbs = verbs;

    return io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_local_var;
}


void io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_free(io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_t *io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule) {
    if(NULL == io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule->non_resource_urls) {
        list_ForEach(listEntry, io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule->non_resource_urls) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule->non_resource_urls);
        io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule->non_resource_urls = NULL;
    }
    if (io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule->verbs) {
        list_ForEach(listEntry, io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule->verbs) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule->verbs);
        io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule->verbs = NULL;
    }
    free(io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule);
}

cJSON *io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_convertToJSON(io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_t *io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule->non_resource_urls
    if (!io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule->non_resource_urls) {
        goto fail;
    }
    
    cJSON *non_resource_urls = cJSON_AddArrayToObject(item, "nonResourceURLs");
    if(non_resource_urls == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *non_resource_urlsListEntry;
    list_ForEach(non_resource_urlsListEntry, io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule->non_resource_urls) {
    if(cJSON_AddStringToObject(non_resource_urls, "", (char*)non_resource_urlsListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule->verbs
    if (!io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule->verbs) {
        goto fail;
    }
    
    cJSON *verbs = cJSON_AddArrayToObject(item, "verbs");
    if(verbs == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *verbsListEntry;
    list_ForEach(verbsListEntry, io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule->verbs) {
    if(cJSON_AddStringToObject(verbs, "", (char*)verbsListEntry->data) == NULL)
    {
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

io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_t *io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_non_resource_policy_ruleJSON){

    io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_t *io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_local_var = NULL;

    // io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule->non_resource_urls
    cJSON *non_resource_urls = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_non_resource_policy_ruleJSON, "nonResourceURLs");
    if (!non_resource_urls) {
        goto end;
    }

    list_t *non_resource_urlsList;
    
    cJSON *non_resource_urls_local;
    if(!cJSON_IsArray(non_resource_urls)) {
        goto end;//primitive container
    }
    non_resource_urlsList = list_create();

    cJSON_ArrayForEach(non_resource_urls_local, non_resource_urls)
    {
        if(!cJSON_IsString(non_resource_urls_local))
        {
            goto end;
        }
        list_addElement(non_resource_urlsList , strdup(non_resource_urls_local->valuestring));
    }

    // io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule->verbs
    cJSON *verbs = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_non_resource_policy_ruleJSON, "verbs");
    if (!verbs) {
        goto end;
    }

    list_t *verbsList;
    
    cJSON *verbs_local;
    if(!cJSON_IsArray(verbs)) {
        goto end;//primitive container
    }
    verbsList = list_create();

    cJSON_ArrayForEach(verbs_local, verbs)
    {
        if(!cJSON_IsString(verbs_local))
        {
            goto end;
        }
        list_addElement(verbsList , strdup(verbs_local->valuestring));
    }


    io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_local_var = io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_create (
        non_resource_urlsList,
        verbsList
        );

    return io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_local_var;
end:
    return NULL;

}
