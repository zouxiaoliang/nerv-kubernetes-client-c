#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_service_spec.h"



io_k8s_api_core_v1_service_spec_t *io_k8s_api_core_v1_service_spec_create(
    int allocate_load_balancer_node_ports,
    char *cluster_ip,
    list_t *cluster_ips,
    list_t *external_ips,
    char *external_name,
    char *external_traffic_policy,
    int health_check_node_port,
    list_t *ip_families,
    char *ip_family_policy,
    char *load_balancer_ip,
    list_t *load_balancer_source_ranges,
    list_t *ports,
    int publish_not_ready_addresses,
    list_t* selector,
    char *session_affinity,
    io_k8s_api_core_v1_session_affinity_config_t *session_affinity_config,
    list_t *topology_keys,
    char *type
    ) {
    io_k8s_api_core_v1_service_spec_t *io_k8s_api_core_v1_service_spec_local_var = malloc(sizeof(io_k8s_api_core_v1_service_spec_t));
    if (!io_k8s_api_core_v1_service_spec_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_service_spec_local_var->allocate_load_balancer_node_ports = allocate_load_balancer_node_ports;
    io_k8s_api_core_v1_service_spec_local_var->cluster_ip = cluster_ip;
    io_k8s_api_core_v1_service_spec_local_var->cluster_ips = cluster_ips;
    io_k8s_api_core_v1_service_spec_local_var->external_ips = external_ips;
    io_k8s_api_core_v1_service_spec_local_var->external_name = external_name;
    io_k8s_api_core_v1_service_spec_local_var->external_traffic_policy = external_traffic_policy;
    io_k8s_api_core_v1_service_spec_local_var->health_check_node_port = health_check_node_port;
    io_k8s_api_core_v1_service_spec_local_var->ip_families = ip_families;
    io_k8s_api_core_v1_service_spec_local_var->ip_family_policy = ip_family_policy;
    io_k8s_api_core_v1_service_spec_local_var->load_balancer_ip = load_balancer_ip;
    io_k8s_api_core_v1_service_spec_local_var->load_balancer_source_ranges = load_balancer_source_ranges;
    io_k8s_api_core_v1_service_spec_local_var->ports = ports;
    io_k8s_api_core_v1_service_spec_local_var->publish_not_ready_addresses = publish_not_ready_addresses;
    io_k8s_api_core_v1_service_spec_local_var->selector = selector;
    io_k8s_api_core_v1_service_spec_local_var->session_affinity = session_affinity;
    io_k8s_api_core_v1_service_spec_local_var->session_affinity_config = session_affinity_config;
    io_k8s_api_core_v1_service_spec_local_var->topology_keys = topology_keys;
    io_k8s_api_core_v1_service_spec_local_var->type = type;

    return io_k8s_api_core_v1_service_spec_local_var;
}


void io_k8s_api_core_v1_service_spec_free(io_k8s_api_core_v1_service_spec_t *io_k8s_api_core_v1_service_spec) {
    if(NULL == io_k8s_api_core_v1_service_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_service_spec->cluster_ip) {
        free(io_k8s_api_core_v1_service_spec->cluster_ip);
        io_k8s_api_core_v1_service_spec->cluster_ip = NULL;
    }
    if (io_k8s_api_core_v1_service_spec->cluster_ips) {
        list_ForEach(listEntry, io_k8s_api_core_v1_service_spec->cluster_ips) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_service_spec->cluster_ips);
        io_k8s_api_core_v1_service_spec->cluster_ips = NULL;
    }
    if (io_k8s_api_core_v1_service_spec->external_ips) {
        list_ForEach(listEntry, io_k8s_api_core_v1_service_spec->external_ips) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_service_spec->external_ips);
        io_k8s_api_core_v1_service_spec->external_ips = NULL;
    }
    if (io_k8s_api_core_v1_service_spec->external_name) {
        free(io_k8s_api_core_v1_service_spec->external_name);
        io_k8s_api_core_v1_service_spec->external_name = NULL;
    }
    if (io_k8s_api_core_v1_service_spec->external_traffic_policy) {
        free(io_k8s_api_core_v1_service_spec->external_traffic_policy);
        io_k8s_api_core_v1_service_spec->external_traffic_policy = NULL;
    }
    if (io_k8s_api_core_v1_service_spec->ip_families) {
        list_ForEach(listEntry, io_k8s_api_core_v1_service_spec->ip_families) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_service_spec->ip_families);
        io_k8s_api_core_v1_service_spec->ip_families = NULL;
    }
    if (io_k8s_api_core_v1_service_spec->ip_family_policy) {
        free(io_k8s_api_core_v1_service_spec->ip_family_policy);
        io_k8s_api_core_v1_service_spec->ip_family_policy = NULL;
    }
    if (io_k8s_api_core_v1_service_spec->load_balancer_ip) {
        free(io_k8s_api_core_v1_service_spec->load_balancer_ip);
        io_k8s_api_core_v1_service_spec->load_balancer_ip = NULL;
    }
    if (io_k8s_api_core_v1_service_spec->load_balancer_source_ranges) {
        list_ForEach(listEntry, io_k8s_api_core_v1_service_spec->load_balancer_source_ranges) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_service_spec->load_balancer_source_ranges);
        io_k8s_api_core_v1_service_spec->load_balancer_source_ranges = NULL;
    }
    if (io_k8s_api_core_v1_service_spec->ports) {
        list_ForEach(listEntry, io_k8s_api_core_v1_service_spec->ports) {
            io_k8s_api_core_v1_service_port_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_service_spec->ports);
        io_k8s_api_core_v1_service_spec->ports = NULL;
    }
    if (io_k8s_api_core_v1_service_spec->selector) {
        list_ForEach(listEntry, io_k8s_api_core_v1_service_spec->selector) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_service_spec->selector);
        io_k8s_api_core_v1_service_spec->selector = NULL;
    }
    if (io_k8s_api_core_v1_service_spec->session_affinity) {
        free(io_k8s_api_core_v1_service_spec->session_affinity);
        io_k8s_api_core_v1_service_spec->session_affinity = NULL;
    }
    if (io_k8s_api_core_v1_service_spec->session_affinity_config) {
        io_k8s_api_core_v1_session_affinity_config_free(io_k8s_api_core_v1_service_spec->session_affinity_config);
        io_k8s_api_core_v1_service_spec->session_affinity_config = NULL;
    }
    if (io_k8s_api_core_v1_service_spec->topology_keys) {
        list_ForEach(listEntry, io_k8s_api_core_v1_service_spec->topology_keys) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_service_spec->topology_keys);
        io_k8s_api_core_v1_service_spec->topology_keys = NULL;
    }
    if (io_k8s_api_core_v1_service_spec->type) {
        free(io_k8s_api_core_v1_service_spec->type);
        io_k8s_api_core_v1_service_spec->type = NULL;
    }
    free(io_k8s_api_core_v1_service_spec);
}

cJSON *io_k8s_api_core_v1_service_spec_convertToJSON(io_k8s_api_core_v1_service_spec_t *io_k8s_api_core_v1_service_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_service_spec->allocate_load_balancer_node_ports
    if(io_k8s_api_core_v1_service_spec->allocate_load_balancer_node_ports) { 
    if(cJSON_AddBoolToObject(item, "allocateLoadBalancerNodePorts", io_k8s_api_core_v1_service_spec->allocate_load_balancer_node_ports) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_service_spec->cluster_ip
    if(io_k8s_api_core_v1_service_spec->cluster_ip) { 
    if(cJSON_AddStringToObject(item, "clusterIP", io_k8s_api_core_v1_service_spec->cluster_ip) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_service_spec->cluster_ips
    if(io_k8s_api_core_v1_service_spec->cluster_ips) { 
    cJSON *cluster_ips = cJSON_AddArrayToObject(item, "clusterIPs");
    if(cluster_ips == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *cluster_ipsListEntry;
    list_ForEach(cluster_ipsListEntry, io_k8s_api_core_v1_service_spec->cluster_ips) {
    if(cJSON_AddStringToObject(cluster_ips, "", (char*)cluster_ipsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_service_spec->external_ips
    if(io_k8s_api_core_v1_service_spec->external_ips) { 
    cJSON *external_ips = cJSON_AddArrayToObject(item, "externalIPs");
    if(external_ips == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *external_ipsListEntry;
    list_ForEach(external_ipsListEntry, io_k8s_api_core_v1_service_spec->external_ips) {
    if(cJSON_AddStringToObject(external_ips, "", (char*)external_ipsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_service_spec->external_name
    if(io_k8s_api_core_v1_service_spec->external_name) { 
    if(cJSON_AddStringToObject(item, "externalName", io_k8s_api_core_v1_service_spec->external_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_service_spec->external_traffic_policy
    if(io_k8s_api_core_v1_service_spec->external_traffic_policy) { 
    if(cJSON_AddStringToObject(item, "externalTrafficPolicy", io_k8s_api_core_v1_service_spec->external_traffic_policy) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_service_spec->health_check_node_port
    if(io_k8s_api_core_v1_service_spec->health_check_node_port) { 
    if(cJSON_AddNumberToObject(item, "healthCheckNodePort", io_k8s_api_core_v1_service_spec->health_check_node_port) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_service_spec->ip_families
    if(io_k8s_api_core_v1_service_spec->ip_families) { 
    cJSON *ip_families = cJSON_AddArrayToObject(item, "ipFamilies");
    if(ip_families == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *ip_familiesListEntry;
    list_ForEach(ip_familiesListEntry, io_k8s_api_core_v1_service_spec->ip_families) {
    if(cJSON_AddStringToObject(ip_families, "", (char*)ip_familiesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_service_spec->ip_family_policy
    if(io_k8s_api_core_v1_service_spec->ip_family_policy) { 
    if(cJSON_AddStringToObject(item, "ipFamilyPolicy", io_k8s_api_core_v1_service_spec->ip_family_policy) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_service_spec->load_balancer_ip
    if(io_k8s_api_core_v1_service_spec->load_balancer_ip) { 
    if(cJSON_AddStringToObject(item, "loadBalancerIP", io_k8s_api_core_v1_service_spec->load_balancer_ip) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_service_spec->load_balancer_source_ranges
    if(io_k8s_api_core_v1_service_spec->load_balancer_source_ranges) { 
    cJSON *load_balancer_source_ranges = cJSON_AddArrayToObject(item, "loadBalancerSourceRanges");
    if(load_balancer_source_ranges == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *load_balancer_source_rangesListEntry;
    list_ForEach(load_balancer_source_rangesListEntry, io_k8s_api_core_v1_service_spec->load_balancer_source_ranges) {
    if(cJSON_AddStringToObject(load_balancer_source_ranges, "", (char*)load_balancer_source_rangesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_service_spec->ports
    if(io_k8s_api_core_v1_service_spec->ports) { 
    cJSON *ports = cJSON_AddArrayToObject(item, "ports");
    if(ports == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *portsListEntry;
    if (io_k8s_api_core_v1_service_spec->ports) {
    list_ForEach(portsListEntry, io_k8s_api_core_v1_service_spec->ports) {
    cJSON *itemLocal = io_k8s_api_core_v1_service_port_convertToJSON(portsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(ports, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_service_spec->publish_not_ready_addresses
    if(io_k8s_api_core_v1_service_spec->publish_not_ready_addresses) { 
    if(cJSON_AddBoolToObject(item, "publishNotReadyAddresses", io_k8s_api_core_v1_service_spec->publish_not_ready_addresses) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_service_spec->selector
    if(io_k8s_api_core_v1_service_spec->selector) { 
    cJSON *selector = cJSON_AddObjectToObject(item, "selector");
    if(selector == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = selector;
    listEntry_t *selectorListEntry;
    if (io_k8s_api_core_v1_service_spec->selector) {
    list_ForEach(selectorListEntry, io_k8s_api_core_v1_service_spec->selector) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)selectorListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_service_spec->session_affinity
    if(io_k8s_api_core_v1_service_spec->session_affinity) { 
    if(cJSON_AddStringToObject(item, "sessionAffinity", io_k8s_api_core_v1_service_spec->session_affinity) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_service_spec->session_affinity_config
    if(io_k8s_api_core_v1_service_spec->session_affinity_config) { 
    cJSON *session_affinity_config_local_JSON = io_k8s_api_core_v1_session_affinity_config_convertToJSON(io_k8s_api_core_v1_service_spec->session_affinity_config);
    if(session_affinity_config_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "sessionAffinityConfig", session_affinity_config_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_service_spec->topology_keys
    if(io_k8s_api_core_v1_service_spec->topology_keys) { 
    cJSON *topology_keys = cJSON_AddArrayToObject(item, "topologyKeys");
    if(topology_keys == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *topology_keysListEntry;
    list_ForEach(topology_keysListEntry, io_k8s_api_core_v1_service_spec->topology_keys) {
    if(cJSON_AddStringToObject(topology_keys, "", (char*)topology_keysListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_service_spec->type
    if(io_k8s_api_core_v1_service_spec->type) { 
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_core_v1_service_spec->type) == NULL) {
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

io_k8s_api_core_v1_service_spec_t *io_k8s_api_core_v1_service_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_service_specJSON){

    io_k8s_api_core_v1_service_spec_t *io_k8s_api_core_v1_service_spec_local_var = NULL;

    // io_k8s_api_core_v1_service_spec->allocate_load_balancer_node_ports
    cJSON *allocate_load_balancer_node_ports = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_specJSON, "allocateLoadBalancerNodePorts");
    if (allocate_load_balancer_node_ports) { 
    if(!cJSON_IsBool(allocate_load_balancer_node_ports))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_service_spec->cluster_ip
    cJSON *cluster_ip = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_specJSON, "clusterIP");
    if (cluster_ip) { 
    if(!cJSON_IsString(cluster_ip))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_service_spec->cluster_ips
    cJSON *cluster_ips = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_specJSON, "clusterIPs");
    list_t *cluster_ipsList;
    if (cluster_ips) { 
    cJSON *cluster_ips_local;
    if(!cJSON_IsArray(cluster_ips)) {
        goto end;//primitive container
    }
    cluster_ipsList = list_create();

    cJSON_ArrayForEach(cluster_ips_local, cluster_ips)
    {
        if(!cJSON_IsString(cluster_ips_local))
        {
            goto end;
        }
        list_addElement(cluster_ipsList , strdup(cluster_ips_local->valuestring));
    }
    }

    // io_k8s_api_core_v1_service_spec->external_ips
    cJSON *external_ips = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_specJSON, "externalIPs");
    list_t *external_ipsList;
    if (external_ips) { 
    cJSON *external_ips_local;
    if(!cJSON_IsArray(external_ips)) {
        goto end;//primitive container
    }
    external_ipsList = list_create();

    cJSON_ArrayForEach(external_ips_local, external_ips)
    {
        if(!cJSON_IsString(external_ips_local))
        {
            goto end;
        }
        list_addElement(external_ipsList , strdup(external_ips_local->valuestring));
    }
    }

    // io_k8s_api_core_v1_service_spec->external_name
    cJSON *external_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_specJSON, "externalName");
    if (external_name) { 
    if(!cJSON_IsString(external_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_service_spec->external_traffic_policy
    cJSON *external_traffic_policy = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_specJSON, "externalTrafficPolicy");
    if (external_traffic_policy) { 
    if(!cJSON_IsString(external_traffic_policy))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_service_spec->health_check_node_port
    cJSON *health_check_node_port = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_specJSON, "healthCheckNodePort");
    if (health_check_node_port) { 
    if(!cJSON_IsNumber(health_check_node_port))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_service_spec->ip_families
    cJSON *ip_families = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_specJSON, "ipFamilies");
    list_t *ip_familiesList;
    if (ip_families) { 
    cJSON *ip_families_local;
    if(!cJSON_IsArray(ip_families)) {
        goto end;//primitive container
    }
    ip_familiesList = list_create();

    cJSON_ArrayForEach(ip_families_local, ip_families)
    {
        if(!cJSON_IsString(ip_families_local))
        {
            goto end;
        }
        list_addElement(ip_familiesList , strdup(ip_families_local->valuestring));
    }
    }

    // io_k8s_api_core_v1_service_spec->ip_family_policy
    cJSON *ip_family_policy = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_specJSON, "ipFamilyPolicy");
    if (ip_family_policy) { 
    if(!cJSON_IsString(ip_family_policy))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_service_spec->load_balancer_ip
    cJSON *load_balancer_ip = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_specJSON, "loadBalancerIP");
    if (load_balancer_ip) { 
    if(!cJSON_IsString(load_balancer_ip))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_service_spec->load_balancer_source_ranges
    cJSON *load_balancer_source_ranges = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_specJSON, "loadBalancerSourceRanges");
    list_t *load_balancer_source_rangesList;
    if (load_balancer_source_ranges) { 
    cJSON *load_balancer_source_ranges_local;
    if(!cJSON_IsArray(load_balancer_source_ranges)) {
        goto end;//primitive container
    }
    load_balancer_source_rangesList = list_create();

    cJSON_ArrayForEach(load_balancer_source_ranges_local, load_balancer_source_ranges)
    {
        if(!cJSON_IsString(load_balancer_source_ranges_local))
        {
            goto end;
        }
        list_addElement(load_balancer_source_rangesList , strdup(load_balancer_source_ranges_local->valuestring));
    }
    }

    // io_k8s_api_core_v1_service_spec->ports
    cJSON *ports = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_specJSON, "ports");
    list_t *portsList;
    if (ports) { 
    cJSON *ports_local_nonprimitive;
    if(!cJSON_IsArray(ports)){
        goto end; //nonprimitive container
    }

    portsList = list_create();

    cJSON_ArrayForEach(ports_local_nonprimitive,ports )
    {
        if(!cJSON_IsObject(ports_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_service_port_t *portsItem = io_k8s_api_core_v1_service_port_parseFromJSON(ports_local_nonprimitive);

        list_addElement(portsList, portsItem);
    }
    }

    // io_k8s_api_core_v1_service_spec->publish_not_ready_addresses
    cJSON *publish_not_ready_addresses = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_specJSON, "publishNotReadyAddresses");
    if (publish_not_ready_addresses) { 
    if(!cJSON_IsBool(publish_not_ready_addresses))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_service_spec->selector
    cJSON *selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_specJSON, "selector");
    list_t *selectorList;
    if (selector) { 
    cJSON *selector_local_map;
    if(!cJSON_IsObject(selector)) {
        goto end;//primitive map container
    }
    selectorList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(selector_local_map, selector)
    {
		cJSON *localMapObject = selector_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(selectorList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_service_spec->session_affinity
    cJSON *session_affinity = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_specJSON, "sessionAffinity");
    if (session_affinity) { 
    if(!cJSON_IsString(session_affinity))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_service_spec->session_affinity_config
    cJSON *session_affinity_config = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_specJSON, "sessionAffinityConfig");
    io_k8s_api_core_v1_session_affinity_config_t *session_affinity_config_local_nonprim = NULL;
    if (session_affinity_config) { 
    session_affinity_config_local_nonprim = io_k8s_api_core_v1_session_affinity_config_parseFromJSON(session_affinity_config); //nonprimitive
    }

    // io_k8s_api_core_v1_service_spec->topology_keys
    cJSON *topology_keys = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_specJSON, "topologyKeys");
    list_t *topology_keysList;
    if (topology_keys) { 
    cJSON *topology_keys_local;
    if(!cJSON_IsArray(topology_keys)) {
        goto end;//primitive container
    }
    topology_keysList = list_create();

    cJSON_ArrayForEach(topology_keys_local, topology_keys)
    {
        if(!cJSON_IsString(topology_keys_local))
        {
            goto end;
        }
        list_addElement(topology_keysList , strdup(topology_keys_local->valuestring));
    }
    }

    // io_k8s_api_core_v1_service_spec->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_specJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_service_spec_local_var = io_k8s_api_core_v1_service_spec_create (
        allocate_load_balancer_node_ports ? allocate_load_balancer_node_ports->valueint : 0,
        cluster_ip ? strdup(cluster_ip->valuestring) : NULL,
        cluster_ips ? cluster_ipsList : NULL,
        external_ips ? external_ipsList : NULL,
        external_name ? strdup(external_name->valuestring) : NULL,
        external_traffic_policy ? strdup(external_traffic_policy->valuestring) : NULL,
        health_check_node_port ? health_check_node_port->valuedouble : 0,
        ip_families ? ip_familiesList : NULL,
        ip_family_policy ? strdup(ip_family_policy->valuestring) : NULL,
        load_balancer_ip ? strdup(load_balancer_ip->valuestring) : NULL,
        load_balancer_source_ranges ? load_balancer_source_rangesList : NULL,
        ports ? portsList : NULL,
        publish_not_ready_addresses ? publish_not_ready_addresses->valueint : 0,
        selector ? selectorList : NULL,
        session_affinity ? strdup(session_affinity->valuestring) : NULL,
        session_affinity_config ? session_affinity_config_local_nonprim : NULL,
        topology_keys ? topology_keysList : NULL,
        type ? strdup(type->valuestring) : NULL
        );

    return io_k8s_api_core_v1_service_spec_local_var;
end:
    if (session_affinity_config_local_nonprim) {
        io_k8s_api_core_v1_session_affinity_config_free(session_affinity_config_local_nonprim);
        session_affinity_config_local_nonprim = NULL;
    }
    return NULL;

}
