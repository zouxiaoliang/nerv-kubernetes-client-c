#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_rbac_v1alpha1_aggregation_rule.h"



io_k8s_api_rbac_v1alpha1_aggregation_rule_t *io_k8s_api_rbac_v1alpha1_aggregation_rule_create(
    list_t *cluster_role_selectors
    ) {
    io_k8s_api_rbac_v1alpha1_aggregation_rule_t *io_k8s_api_rbac_v1alpha1_aggregation_rule_local_var = malloc(sizeof(io_k8s_api_rbac_v1alpha1_aggregation_rule_t));
    if (!io_k8s_api_rbac_v1alpha1_aggregation_rule_local_var) {
        return NULL;
    }
    io_k8s_api_rbac_v1alpha1_aggregation_rule_local_var->cluster_role_selectors = cluster_role_selectors;

    return io_k8s_api_rbac_v1alpha1_aggregation_rule_local_var;
}


void io_k8s_api_rbac_v1alpha1_aggregation_rule_free(io_k8s_api_rbac_v1alpha1_aggregation_rule_t *io_k8s_api_rbac_v1alpha1_aggregation_rule) {
    if(NULL == io_k8s_api_rbac_v1alpha1_aggregation_rule){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_rbac_v1alpha1_aggregation_rule->cluster_role_selectors) {
        list_ForEach(listEntry, io_k8s_api_rbac_v1alpha1_aggregation_rule->cluster_role_selectors) {
            io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(listEntry->data);
        }
        list_free(io_k8s_api_rbac_v1alpha1_aggregation_rule->cluster_role_selectors);
        io_k8s_api_rbac_v1alpha1_aggregation_rule->cluster_role_selectors = NULL;
    }
    free(io_k8s_api_rbac_v1alpha1_aggregation_rule);
}

cJSON *io_k8s_api_rbac_v1alpha1_aggregation_rule_convertToJSON(io_k8s_api_rbac_v1alpha1_aggregation_rule_t *io_k8s_api_rbac_v1alpha1_aggregation_rule) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_rbac_v1alpha1_aggregation_rule->cluster_role_selectors
    if(io_k8s_api_rbac_v1alpha1_aggregation_rule->cluster_role_selectors) { 
    cJSON *cluster_role_selectors = cJSON_AddArrayToObject(item, "clusterRoleSelectors");
    if(cluster_role_selectors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *cluster_role_selectorsListEntry;
    if (io_k8s_api_rbac_v1alpha1_aggregation_rule->cluster_role_selectors) {
    list_ForEach(cluster_role_selectorsListEntry, io_k8s_api_rbac_v1alpha1_aggregation_rule->cluster_role_selectors) {
    cJSON *itemLocal = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(cluster_role_selectorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(cluster_role_selectors, itemLocal);
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

io_k8s_api_rbac_v1alpha1_aggregation_rule_t *io_k8s_api_rbac_v1alpha1_aggregation_rule_parseFromJSON(cJSON *io_k8s_api_rbac_v1alpha1_aggregation_ruleJSON){

    io_k8s_api_rbac_v1alpha1_aggregation_rule_t *io_k8s_api_rbac_v1alpha1_aggregation_rule_local_var = NULL;

    // io_k8s_api_rbac_v1alpha1_aggregation_rule->cluster_role_selectors
    cJSON *cluster_role_selectors = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_aggregation_ruleJSON, "clusterRoleSelectors");
    list_t *cluster_role_selectorsList;
    if (cluster_role_selectors) { 
    cJSON *cluster_role_selectors_local_nonprimitive;
    if(!cJSON_IsArray(cluster_role_selectors)){
        goto end; //nonprimitive container
    }

    cluster_role_selectorsList = list_create();

    cJSON_ArrayForEach(cluster_role_selectors_local_nonprimitive,cluster_role_selectors )
    {
        if(!cJSON_IsObject(cluster_role_selectors_local_nonprimitive)){
            goto end;
        }
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *cluster_role_selectorsItem = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(cluster_role_selectors_local_nonprimitive);

        list_addElement(cluster_role_selectorsList, cluster_role_selectorsItem);
    }
    }


    io_k8s_api_rbac_v1alpha1_aggregation_rule_local_var = io_k8s_api_rbac_v1alpha1_aggregation_rule_create (
        cluster_role_selectors ? cluster_role_selectorsList : NULL
        );

    return io_k8s_api_rbac_v1alpha1_aggregation_rule_local_var;
end:
    return NULL;

}
