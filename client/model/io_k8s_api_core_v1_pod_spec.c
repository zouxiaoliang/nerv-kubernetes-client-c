#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_pod_spec.h"



io_k8s_api_core_v1_pod_spec_t *io_k8s_api_core_v1_pod_spec_create(
    long active_deadline_seconds,
    io_k8s_api_core_v1_affinity_t *affinity,
    int automount_service_account_token,
    list_t *containers,
    io_k8s_api_core_v1_pod_dns_config_t *dns_config,
    char *dns_policy,
    int enable_service_links,
    list_t *ephemeral_containers,
    list_t *host_aliases,
    int host_ipc,
    int host_network,
    int host_pid,
    char *hostname,
    list_t *image_pull_secrets,
    list_t *init_containers,
    char *node_name,
    list_t* node_selector,
    list_t* overhead,
    char *preemption_policy,
    int priority,
    char *priority_class_name,
    list_t *readiness_gates,
    char *restart_policy,
    char *runtime_class_name,
    char *scheduler_name,
    io_k8s_api_core_v1_pod_security_context_t *security_context,
    char *service_account,
    char *service_account_name,
    int set_hostname_as_fqdn,
    int share_process_namespace,
    char *subdomain,
    long termination_grace_period_seconds,
    list_t *tolerations,
    list_t *topology_spread_constraints,
    list_t *volumes
    ) {
    io_k8s_api_core_v1_pod_spec_t *io_k8s_api_core_v1_pod_spec_local_var = malloc(sizeof(io_k8s_api_core_v1_pod_spec_t));
    if (!io_k8s_api_core_v1_pod_spec_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_pod_spec_local_var->active_deadline_seconds = active_deadline_seconds;
    io_k8s_api_core_v1_pod_spec_local_var->affinity = affinity;
    io_k8s_api_core_v1_pod_spec_local_var->automount_service_account_token = automount_service_account_token;
    io_k8s_api_core_v1_pod_spec_local_var->containers = containers;
    io_k8s_api_core_v1_pod_spec_local_var->dns_config = dns_config;
    io_k8s_api_core_v1_pod_spec_local_var->dns_policy = dns_policy;
    io_k8s_api_core_v1_pod_spec_local_var->enable_service_links = enable_service_links;
    io_k8s_api_core_v1_pod_spec_local_var->ephemeral_containers = ephemeral_containers;
    io_k8s_api_core_v1_pod_spec_local_var->host_aliases = host_aliases;
    io_k8s_api_core_v1_pod_spec_local_var->host_ipc = host_ipc;
    io_k8s_api_core_v1_pod_spec_local_var->host_network = host_network;
    io_k8s_api_core_v1_pod_spec_local_var->host_pid = host_pid;
    io_k8s_api_core_v1_pod_spec_local_var->hostname = hostname;
    io_k8s_api_core_v1_pod_spec_local_var->image_pull_secrets = image_pull_secrets;
    io_k8s_api_core_v1_pod_spec_local_var->init_containers = init_containers;
    io_k8s_api_core_v1_pod_spec_local_var->node_name = node_name;
    io_k8s_api_core_v1_pod_spec_local_var->node_selector = node_selector;
    io_k8s_api_core_v1_pod_spec_local_var->overhead = overhead;
    io_k8s_api_core_v1_pod_spec_local_var->preemption_policy = preemption_policy;
    io_k8s_api_core_v1_pod_spec_local_var->priority = priority;
    io_k8s_api_core_v1_pod_spec_local_var->priority_class_name = priority_class_name;
    io_k8s_api_core_v1_pod_spec_local_var->readiness_gates = readiness_gates;
    io_k8s_api_core_v1_pod_spec_local_var->restart_policy = restart_policy;
    io_k8s_api_core_v1_pod_spec_local_var->runtime_class_name = runtime_class_name;
    io_k8s_api_core_v1_pod_spec_local_var->scheduler_name = scheduler_name;
    io_k8s_api_core_v1_pod_spec_local_var->security_context = security_context;
    io_k8s_api_core_v1_pod_spec_local_var->service_account = service_account;
    io_k8s_api_core_v1_pod_spec_local_var->service_account_name = service_account_name;
    io_k8s_api_core_v1_pod_spec_local_var->set_hostname_as_fqdn = set_hostname_as_fqdn;
    io_k8s_api_core_v1_pod_spec_local_var->share_process_namespace = share_process_namespace;
    io_k8s_api_core_v1_pod_spec_local_var->subdomain = subdomain;
    io_k8s_api_core_v1_pod_spec_local_var->termination_grace_period_seconds = termination_grace_period_seconds;
    io_k8s_api_core_v1_pod_spec_local_var->tolerations = tolerations;
    io_k8s_api_core_v1_pod_spec_local_var->topology_spread_constraints = topology_spread_constraints;
    io_k8s_api_core_v1_pod_spec_local_var->volumes = volumes;

    return io_k8s_api_core_v1_pod_spec_local_var;
}


void io_k8s_api_core_v1_pod_spec_free(io_k8s_api_core_v1_pod_spec_t *io_k8s_api_core_v1_pod_spec) {
    if(NULL == io_k8s_api_core_v1_pod_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_pod_spec->affinity) {
        io_k8s_api_core_v1_affinity_free(io_k8s_api_core_v1_pod_spec->affinity);
        io_k8s_api_core_v1_pod_spec->affinity = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->containers) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_spec->containers) {
            io_k8s_api_core_v1_container_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_spec->containers);
        io_k8s_api_core_v1_pod_spec->containers = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->dns_config) {
        io_k8s_api_core_v1_pod_dns_config_free(io_k8s_api_core_v1_pod_spec->dns_config);
        io_k8s_api_core_v1_pod_spec->dns_config = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->dns_policy) {
        free(io_k8s_api_core_v1_pod_spec->dns_policy);
        io_k8s_api_core_v1_pod_spec->dns_policy = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->ephemeral_containers) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_spec->ephemeral_containers) {
            io_k8s_api_core_v1_ephemeral_container_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_spec->ephemeral_containers);
        io_k8s_api_core_v1_pod_spec->ephemeral_containers = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->host_aliases) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_spec->host_aliases) {
            io_k8s_api_core_v1_host_alias_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_spec->host_aliases);
        io_k8s_api_core_v1_pod_spec->host_aliases = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->hostname) {
        free(io_k8s_api_core_v1_pod_spec->hostname);
        io_k8s_api_core_v1_pod_spec->hostname = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->image_pull_secrets) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_spec->image_pull_secrets) {
            io_k8s_api_core_v1_local_object_reference_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_spec->image_pull_secrets);
        io_k8s_api_core_v1_pod_spec->image_pull_secrets = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->init_containers) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_spec->init_containers) {
            io_k8s_api_core_v1_container_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_spec->init_containers);
        io_k8s_api_core_v1_pod_spec->init_containers = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->node_name) {
        free(io_k8s_api_core_v1_pod_spec->node_name);
        io_k8s_api_core_v1_pod_spec->node_name = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->node_selector) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_spec->node_selector) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_pod_spec->node_selector);
        io_k8s_api_core_v1_pod_spec->node_selector = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->overhead) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_spec->overhead) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_pod_spec->overhead);
        io_k8s_api_core_v1_pod_spec->overhead = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->preemption_policy) {
        free(io_k8s_api_core_v1_pod_spec->preemption_policy);
        io_k8s_api_core_v1_pod_spec->preemption_policy = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->priority_class_name) {
        free(io_k8s_api_core_v1_pod_spec->priority_class_name);
        io_k8s_api_core_v1_pod_spec->priority_class_name = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->readiness_gates) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_spec->readiness_gates) {
            io_k8s_api_core_v1_pod_readiness_gate_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_spec->readiness_gates);
        io_k8s_api_core_v1_pod_spec->readiness_gates = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->restart_policy) {
        free(io_k8s_api_core_v1_pod_spec->restart_policy);
        io_k8s_api_core_v1_pod_spec->restart_policy = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->runtime_class_name) {
        free(io_k8s_api_core_v1_pod_spec->runtime_class_name);
        io_k8s_api_core_v1_pod_spec->runtime_class_name = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->scheduler_name) {
        free(io_k8s_api_core_v1_pod_spec->scheduler_name);
        io_k8s_api_core_v1_pod_spec->scheduler_name = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->security_context) {
        io_k8s_api_core_v1_pod_security_context_free(io_k8s_api_core_v1_pod_spec->security_context);
        io_k8s_api_core_v1_pod_spec->security_context = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->service_account) {
        free(io_k8s_api_core_v1_pod_spec->service_account);
        io_k8s_api_core_v1_pod_spec->service_account = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->service_account_name) {
        free(io_k8s_api_core_v1_pod_spec->service_account_name);
        io_k8s_api_core_v1_pod_spec->service_account_name = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->subdomain) {
        free(io_k8s_api_core_v1_pod_spec->subdomain);
        io_k8s_api_core_v1_pod_spec->subdomain = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->tolerations) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_spec->tolerations) {
            io_k8s_api_core_v1_toleration_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_spec->tolerations);
        io_k8s_api_core_v1_pod_spec->tolerations = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->topology_spread_constraints) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_spec->topology_spread_constraints) {
            io_k8s_api_core_v1_topology_spread_constraint_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_spec->topology_spread_constraints);
        io_k8s_api_core_v1_pod_spec->topology_spread_constraints = NULL;
    }
    if (io_k8s_api_core_v1_pod_spec->volumes) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_spec->volumes) {
            io_k8s_api_core_v1_volume_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_spec->volumes);
        io_k8s_api_core_v1_pod_spec->volumes = NULL;
    }
    free(io_k8s_api_core_v1_pod_spec);
}

cJSON *io_k8s_api_core_v1_pod_spec_convertToJSON(io_k8s_api_core_v1_pod_spec_t *io_k8s_api_core_v1_pod_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_pod_spec->active_deadline_seconds
    if(io_k8s_api_core_v1_pod_spec->active_deadline_seconds) { 
    if(cJSON_AddNumberToObject(item, "activeDeadlineSeconds", io_k8s_api_core_v1_pod_spec->active_deadline_seconds) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_pod_spec->affinity
    if(io_k8s_api_core_v1_pod_spec->affinity) { 
    cJSON *affinity_local_JSON = io_k8s_api_core_v1_affinity_convertToJSON(io_k8s_api_core_v1_pod_spec->affinity);
    if(affinity_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "affinity", affinity_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_pod_spec->automount_service_account_token
    if(io_k8s_api_core_v1_pod_spec->automount_service_account_token) { 
    if(cJSON_AddBoolToObject(item, "automountServiceAccountToken", io_k8s_api_core_v1_pod_spec->automount_service_account_token) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_pod_spec->containers
    if (!io_k8s_api_core_v1_pod_spec->containers) {
        goto fail;
    }
    
    cJSON *containers = cJSON_AddArrayToObject(item, "containers");
    if(containers == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *containersListEntry;
    if (io_k8s_api_core_v1_pod_spec->containers) {
    list_ForEach(containersListEntry, io_k8s_api_core_v1_pod_spec->containers) {
    cJSON *itemLocal = io_k8s_api_core_v1_container_convertToJSON(containersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(containers, itemLocal);
    }
    }


    // io_k8s_api_core_v1_pod_spec->dns_config
    if(io_k8s_api_core_v1_pod_spec->dns_config) { 
    cJSON *dns_config_local_JSON = io_k8s_api_core_v1_pod_dns_config_convertToJSON(io_k8s_api_core_v1_pod_spec->dns_config);
    if(dns_config_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "dnsConfig", dns_config_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_pod_spec->dns_policy
    if(io_k8s_api_core_v1_pod_spec->dns_policy) { 
    if(cJSON_AddStringToObject(item, "dnsPolicy", io_k8s_api_core_v1_pod_spec->dns_policy) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_spec->enable_service_links
    if(io_k8s_api_core_v1_pod_spec->enable_service_links) { 
    if(cJSON_AddBoolToObject(item, "enableServiceLinks", io_k8s_api_core_v1_pod_spec->enable_service_links) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_pod_spec->ephemeral_containers
    if(io_k8s_api_core_v1_pod_spec->ephemeral_containers) { 
    cJSON *ephemeral_containers = cJSON_AddArrayToObject(item, "ephemeralContainers");
    if(ephemeral_containers == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *ephemeral_containersListEntry;
    if (io_k8s_api_core_v1_pod_spec->ephemeral_containers) {
    list_ForEach(ephemeral_containersListEntry, io_k8s_api_core_v1_pod_spec->ephemeral_containers) {
    cJSON *itemLocal = io_k8s_api_core_v1_ephemeral_container_convertToJSON(ephemeral_containersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(ephemeral_containers, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_pod_spec->host_aliases
    if(io_k8s_api_core_v1_pod_spec->host_aliases) { 
    cJSON *host_aliases = cJSON_AddArrayToObject(item, "hostAliases");
    if(host_aliases == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *host_aliasesListEntry;
    if (io_k8s_api_core_v1_pod_spec->host_aliases) {
    list_ForEach(host_aliasesListEntry, io_k8s_api_core_v1_pod_spec->host_aliases) {
    cJSON *itemLocal = io_k8s_api_core_v1_host_alias_convertToJSON(host_aliasesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(host_aliases, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_pod_spec->host_ipc
    if(io_k8s_api_core_v1_pod_spec->host_ipc) { 
    if(cJSON_AddBoolToObject(item, "hostIPC", io_k8s_api_core_v1_pod_spec->host_ipc) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_pod_spec->host_network
    if(io_k8s_api_core_v1_pod_spec->host_network) { 
    if(cJSON_AddBoolToObject(item, "hostNetwork", io_k8s_api_core_v1_pod_spec->host_network) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_pod_spec->host_pid
    if(io_k8s_api_core_v1_pod_spec->host_pid) { 
    if(cJSON_AddBoolToObject(item, "hostPID", io_k8s_api_core_v1_pod_spec->host_pid) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_pod_spec->hostname
    if(io_k8s_api_core_v1_pod_spec->hostname) { 
    if(cJSON_AddStringToObject(item, "hostname", io_k8s_api_core_v1_pod_spec->hostname) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_spec->image_pull_secrets
    if(io_k8s_api_core_v1_pod_spec->image_pull_secrets) { 
    cJSON *image_pull_secrets = cJSON_AddArrayToObject(item, "imagePullSecrets");
    if(image_pull_secrets == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *image_pull_secretsListEntry;
    if (io_k8s_api_core_v1_pod_spec->image_pull_secrets) {
    list_ForEach(image_pull_secretsListEntry, io_k8s_api_core_v1_pod_spec->image_pull_secrets) {
    cJSON *itemLocal = io_k8s_api_core_v1_local_object_reference_convertToJSON(image_pull_secretsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(image_pull_secrets, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_pod_spec->init_containers
    if(io_k8s_api_core_v1_pod_spec->init_containers) { 
    cJSON *init_containers = cJSON_AddArrayToObject(item, "initContainers");
    if(init_containers == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *init_containersListEntry;
    if (io_k8s_api_core_v1_pod_spec->init_containers) {
    list_ForEach(init_containersListEntry, io_k8s_api_core_v1_pod_spec->init_containers) {
    cJSON *itemLocal = io_k8s_api_core_v1_container_convertToJSON(init_containersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(init_containers, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_pod_spec->node_name
    if(io_k8s_api_core_v1_pod_spec->node_name) { 
    if(cJSON_AddStringToObject(item, "nodeName", io_k8s_api_core_v1_pod_spec->node_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_spec->node_selector
    if(io_k8s_api_core_v1_pod_spec->node_selector) { 
    cJSON *node_selector = cJSON_AddObjectToObject(item, "nodeSelector");
    if(node_selector == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = node_selector;
    listEntry_t *node_selectorListEntry;
    if (io_k8s_api_core_v1_pod_spec->node_selector) {
    list_ForEach(node_selectorListEntry, io_k8s_api_core_v1_pod_spec->node_selector) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)node_selectorListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_pod_spec->overhead
    if(io_k8s_api_core_v1_pod_spec->overhead) { 
    cJSON *overhead = cJSON_AddObjectToObject(item, "overhead");
    if(overhead == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = overhead;
    listEntry_t *overheadListEntry;
    if (io_k8s_api_core_v1_pod_spec->overhead) {
    list_ForEach(overheadListEntry, io_k8s_api_core_v1_pod_spec->overhead) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)overheadListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_pod_spec->preemption_policy
    if(io_k8s_api_core_v1_pod_spec->preemption_policy) { 
    if(cJSON_AddStringToObject(item, "preemptionPolicy", io_k8s_api_core_v1_pod_spec->preemption_policy) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_spec->priority
    if(io_k8s_api_core_v1_pod_spec->priority) { 
    if(cJSON_AddNumberToObject(item, "priority", io_k8s_api_core_v1_pod_spec->priority) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_pod_spec->priority_class_name
    if(io_k8s_api_core_v1_pod_spec->priority_class_name) { 
    if(cJSON_AddStringToObject(item, "priorityClassName", io_k8s_api_core_v1_pod_spec->priority_class_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_spec->readiness_gates
    if(io_k8s_api_core_v1_pod_spec->readiness_gates) { 
    cJSON *readiness_gates = cJSON_AddArrayToObject(item, "readinessGates");
    if(readiness_gates == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *readiness_gatesListEntry;
    if (io_k8s_api_core_v1_pod_spec->readiness_gates) {
    list_ForEach(readiness_gatesListEntry, io_k8s_api_core_v1_pod_spec->readiness_gates) {
    cJSON *itemLocal = io_k8s_api_core_v1_pod_readiness_gate_convertToJSON(readiness_gatesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(readiness_gates, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_pod_spec->restart_policy
    if(io_k8s_api_core_v1_pod_spec->restart_policy) { 
    if(cJSON_AddStringToObject(item, "restartPolicy", io_k8s_api_core_v1_pod_spec->restart_policy) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_spec->runtime_class_name
    if(io_k8s_api_core_v1_pod_spec->runtime_class_name) { 
    if(cJSON_AddStringToObject(item, "runtimeClassName", io_k8s_api_core_v1_pod_spec->runtime_class_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_spec->scheduler_name
    if(io_k8s_api_core_v1_pod_spec->scheduler_name) { 
    if(cJSON_AddStringToObject(item, "schedulerName", io_k8s_api_core_v1_pod_spec->scheduler_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_spec->security_context
    if(io_k8s_api_core_v1_pod_spec->security_context) { 
    cJSON *security_context_local_JSON = io_k8s_api_core_v1_pod_security_context_convertToJSON(io_k8s_api_core_v1_pod_spec->security_context);
    if(security_context_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "securityContext", security_context_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_pod_spec->service_account
    if(io_k8s_api_core_v1_pod_spec->service_account) { 
    if(cJSON_AddStringToObject(item, "serviceAccount", io_k8s_api_core_v1_pod_spec->service_account) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_spec->service_account_name
    if(io_k8s_api_core_v1_pod_spec->service_account_name) { 
    if(cJSON_AddStringToObject(item, "serviceAccountName", io_k8s_api_core_v1_pod_spec->service_account_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_spec->set_hostname_as_fqdn
    if(io_k8s_api_core_v1_pod_spec->set_hostname_as_fqdn) { 
    if(cJSON_AddBoolToObject(item, "setHostnameAsFQDN", io_k8s_api_core_v1_pod_spec->set_hostname_as_fqdn) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_pod_spec->share_process_namespace
    if(io_k8s_api_core_v1_pod_spec->share_process_namespace) { 
    if(cJSON_AddBoolToObject(item, "shareProcessNamespace", io_k8s_api_core_v1_pod_spec->share_process_namespace) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_pod_spec->subdomain
    if(io_k8s_api_core_v1_pod_spec->subdomain) { 
    if(cJSON_AddStringToObject(item, "subdomain", io_k8s_api_core_v1_pod_spec->subdomain) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_spec->termination_grace_period_seconds
    if(io_k8s_api_core_v1_pod_spec->termination_grace_period_seconds) { 
    if(cJSON_AddNumberToObject(item, "terminationGracePeriodSeconds", io_k8s_api_core_v1_pod_spec->termination_grace_period_seconds) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_pod_spec->tolerations
    if(io_k8s_api_core_v1_pod_spec->tolerations) { 
    cJSON *tolerations = cJSON_AddArrayToObject(item, "tolerations");
    if(tolerations == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tolerationsListEntry;
    if (io_k8s_api_core_v1_pod_spec->tolerations) {
    list_ForEach(tolerationsListEntry, io_k8s_api_core_v1_pod_spec->tolerations) {
    cJSON *itemLocal = io_k8s_api_core_v1_toleration_convertToJSON(tolerationsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tolerations, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_pod_spec->topology_spread_constraints
    if(io_k8s_api_core_v1_pod_spec->topology_spread_constraints) { 
    cJSON *topology_spread_constraints = cJSON_AddArrayToObject(item, "topologySpreadConstraints");
    if(topology_spread_constraints == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *topology_spread_constraintsListEntry;
    if (io_k8s_api_core_v1_pod_spec->topology_spread_constraints) {
    list_ForEach(topology_spread_constraintsListEntry, io_k8s_api_core_v1_pod_spec->topology_spread_constraints) {
    cJSON *itemLocal = io_k8s_api_core_v1_topology_spread_constraint_convertToJSON(topology_spread_constraintsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(topology_spread_constraints, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_pod_spec->volumes
    if(io_k8s_api_core_v1_pod_spec->volumes) { 
    cJSON *volumes = cJSON_AddArrayToObject(item, "volumes");
    if(volumes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *volumesListEntry;
    if (io_k8s_api_core_v1_pod_spec->volumes) {
    list_ForEach(volumesListEntry, io_k8s_api_core_v1_pod_spec->volumes) {
    cJSON *itemLocal = io_k8s_api_core_v1_volume_convertToJSON(volumesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(volumes, itemLocal);
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

io_k8s_api_core_v1_pod_spec_t *io_k8s_api_core_v1_pod_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_specJSON){

    io_k8s_api_core_v1_pod_spec_t *io_k8s_api_core_v1_pod_spec_local_var = NULL;

    // io_k8s_api_core_v1_pod_spec->active_deadline_seconds
    cJSON *active_deadline_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "activeDeadlineSeconds");
    if (active_deadline_seconds) { 
    if(!cJSON_IsNumber(active_deadline_seconds))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_pod_spec->affinity
    cJSON *affinity = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "affinity");
    io_k8s_api_core_v1_affinity_t *affinity_local_nonprim = NULL;
    if (affinity) { 
    affinity_local_nonprim = io_k8s_api_core_v1_affinity_parseFromJSON(affinity); //nonprimitive
    }

    // io_k8s_api_core_v1_pod_spec->automount_service_account_token
    cJSON *automount_service_account_token = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "automountServiceAccountToken");
    if (automount_service_account_token) { 
    if(!cJSON_IsBool(automount_service_account_token))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_pod_spec->containers
    cJSON *containers = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "containers");
    if (!containers) {
        goto end;
    }

    list_t *containersList;
    
    cJSON *containers_local_nonprimitive;
    if(!cJSON_IsArray(containers)){
        goto end; //nonprimitive container
    }

    containersList = list_create();

    cJSON_ArrayForEach(containers_local_nonprimitive,containers )
    {
        if(!cJSON_IsObject(containers_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_container_t *containersItem = io_k8s_api_core_v1_container_parseFromJSON(containers_local_nonprimitive);

        list_addElement(containersList, containersItem);
    }

    // io_k8s_api_core_v1_pod_spec->dns_config
    cJSON *dns_config = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "dnsConfig");
    io_k8s_api_core_v1_pod_dns_config_t *dns_config_local_nonprim = NULL;
    if (dns_config) { 
    dns_config_local_nonprim = io_k8s_api_core_v1_pod_dns_config_parseFromJSON(dns_config); //nonprimitive
    }

    // io_k8s_api_core_v1_pod_spec->dns_policy
    cJSON *dns_policy = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "dnsPolicy");
    if (dns_policy) { 
    if(!cJSON_IsString(dns_policy))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_spec->enable_service_links
    cJSON *enable_service_links = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "enableServiceLinks");
    if (enable_service_links) { 
    if(!cJSON_IsBool(enable_service_links))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_pod_spec->ephemeral_containers
    cJSON *ephemeral_containers = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "ephemeralContainers");
    list_t *ephemeral_containersList;
    if (ephemeral_containers) { 
    cJSON *ephemeral_containers_local_nonprimitive;
    if(!cJSON_IsArray(ephemeral_containers)){
        goto end; //nonprimitive container
    }

    ephemeral_containersList = list_create();

    cJSON_ArrayForEach(ephemeral_containers_local_nonprimitive,ephemeral_containers )
    {
        if(!cJSON_IsObject(ephemeral_containers_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_ephemeral_container_t *ephemeral_containersItem = io_k8s_api_core_v1_ephemeral_container_parseFromJSON(ephemeral_containers_local_nonprimitive);

        list_addElement(ephemeral_containersList, ephemeral_containersItem);
    }
    }

    // io_k8s_api_core_v1_pod_spec->host_aliases
    cJSON *host_aliases = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "hostAliases");
    list_t *host_aliasesList;
    if (host_aliases) { 
    cJSON *host_aliases_local_nonprimitive;
    if(!cJSON_IsArray(host_aliases)){
        goto end; //nonprimitive container
    }

    host_aliasesList = list_create();

    cJSON_ArrayForEach(host_aliases_local_nonprimitive,host_aliases )
    {
        if(!cJSON_IsObject(host_aliases_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_host_alias_t *host_aliasesItem = io_k8s_api_core_v1_host_alias_parseFromJSON(host_aliases_local_nonprimitive);

        list_addElement(host_aliasesList, host_aliasesItem);
    }
    }

    // io_k8s_api_core_v1_pod_spec->host_ipc
    cJSON *host_ipc = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "hostIPC");
    if (host_ipc) { 
    if(!cJSON_IsBool(host_ipc))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_pod_spec->host_network
    cJSON *host_network = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "hostNetwork");
    if (host_network) { 
    if(!cJSON_IsBool(host_network))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_pod_spec->host_pid
    cJSON *host_pid = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "hostPID");
    if (host_pid) { 
    if(!cJSON_IsBool(host_pid))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_pod_spec->hostname
    cJSON *hostname = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "hostname");
    if (hostname) { 
    if(!cJSON_IsString(hostname))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_spec->image_pull_secrets
    cJSON *image_pull_secrets = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "imagePullSecrets");
    list_t *image_pull_secretsList;
    if (image_pull_secrets) { 
    cJSON *image_pull_secrets_local_nonprimitive;
    if(!cJSON_IsArray(image_pull_secrets)){
        goto end; //nonprimitive container
    }

    image_pull_secretsList = list_create();

    cJSON_ArrayForEach(image_pull_secrets_local_nonprimitive,image_pull_secrets )
    {
        if(!cJSON_IsObject(image_pull_secrets_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_local_object_reference_t *image_pull_secretsItem = io_k8s_api_core_v1_local_object_reference_parseFromJSON(image_pull_secrets_local_nonprimitive);

        list_addElement(image_pull_secretsList, image_pull_secretsItem);
    }
    }

    // io_k8s_api_core_v1_pod_spec->init_containers
    cJSON *init_containers = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "initContainers");
    list_t *init_containersList;
    if (init_containers) { 
    cJSON *init_containers_local_nonprimitive;
    if(!cJSON_IsArray(init_containers)){
        goto end; //nonprimitive container
    }

    init_containersList = list_create();

    cJSON_ArrayForEach(init_containers_local_nonprimitive,init_containers )
    {
        if(!cJSON_IsObject(init_containers_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_container_t *init_containersItem = io_k8s_api_core_v1_container_parseFromJSON(init_containers_local_nonprimitive);

        list_addElement(init_containersList, init_containersItem);
    }
    }

    // io_k8s_api_core_v1_pod_spec->node_name
    cJSON *node_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "nodeName");
    if (node_name) { 
    if(!cJSON_IsString(node_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_spec->node_selector
    cJSON *node_selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "nodeSelector");
    list_t *node_selectorList;
    if (node_selector) { 
    cJSON *node_selector_local_map;
    if(!cJSON_IsObject(node_selector)) {
        goto end;//primitive map container
    }
    node_selectorList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(node_selector_local_map, node_selector)
    {
		cJSON *localMapObject = node_selector_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(node_selectorList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_pod_spec->overhead
    cJSON *overhead = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "overhead");
    list_t *overheadList;
    if (overhead) { 
    cJSON *overhead_local_map;
    if(!cJSON_IsObject(overhead)) {
        goto end;//primitive map container
    }
    overheadList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(overhead_local_map, overhead)
    {
		cJSON *localMapObject = overhead_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(overheadList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_pod_spec->preemption_policy
    cJSON *preemption_policy = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "preemptionPolicy");
    if (preemption_policy) { 
    if(!cJSON_IsString(preemption_policy))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_spec->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "priority");
    if (priority) { 
    if(!cJSON_IsNumber(priority))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_pod_spec->priority_class_name
    cJSON *priority_class_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "priorityClassName");
    if (priority_class_name) { 
    if(!cJSON_IsString(priority_class_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_spec->readiness_gates
    cJSON *readiness_gates = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "readinessGates");
    list_t *readiness_gatesList;
    if (readiness_gates) { 
    cJSON *readiness_gates_local_nonprimitive;
    if(!cJSON_IsArray(readiness_gates)){
        goto end; //nonprimitive container
    }

    readiness_gatesList = list_create();

    cJSON_ArrayForEach(readiness_gates_local_nonprimitive,readiness_gates )
    {
        if(!cJSON_IsObject(readiness_gates_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_pod_readiness_gate_t *readiness_gatesItem = io_k8s_api_core_v1_pod_readiness_gate_parseFromJSON(readiness_gates_local_nonprimitive);

        list_addElement(readiness_gatesList, readiness_gatesItem);
    }
    }

    // io_k8s_api_core_v1_pod_spec->restart_policy
    cJSON *restart_policy = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "restartPolicy");
    if (restart_policy) { 
    if(!cJSON_IsString(restart_policy))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_spec->runtime_class_name
    cJSON *runtime_class_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "runtimeClassName");
    if (runtime_class_name) { 
    if(!cJSON_IsString(runtime_class_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_spec->scheduler_name
    cJSON *scheduler_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "schedulerName");
    if (scheduler_name) { 
    if(!cJSON_IsString(scheduler_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_spec->security_context
    cJSON *security_context = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "securityContext");
    io_k8s_api_core_v1_pod_security_context_t *security_context_local_nonprim = NULL;
    if (security_context) { 
    security_context_local_nonprim = io_k8s_api_core_v1_pod_security_context_parseFromJSON(security_context); //nonprimitive
    }

    // io_k8s_api_core_v1_pod_spec->service_account
    cJSON *service_account = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "serviceAccount");
    if (service_account) { 
    if(!cJSON_IsString(service_account))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_spec->service_account_name
    cJSON *service_account_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "serviceAccountName");
    if (service_account_name) { 
    if(!cJSON_IsString(service_account_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_spec->set_hostname_as_fqdn
    cJSON *set_hostname_as_fqdn = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "setHostnameAsFQDN");
    if (set_hostname_as_fqdn) { 
    if(!cJSON_IsBool(set_hostname_as_fqdn))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_pod_spec->share_process_namespace
    cJSON *share_process_namespace = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "shareProcessNamespace");
    if (share_process_namespace) { 
    if(!cJSON_IsBool(share_process_namespace))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_pod_spec->subdomain
    cJSON *subdomain = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "subdomain");
    if (subdomain) { 
    if(!cJSON_IsString(subdomain))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_spec->termination_grace_period_seconds
    cJSON *termination_grace_period_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "terminationGracePeriodSeconds");
    if (termination_grace_period_seconds) { 
    if(!cJSON_IsNumber(termination_grace_period_seconds))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_pod_spec->tolerations
    cJSON *tolerations = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "tolerations");
    list_t *tolerationsList;
    if (tolerations) { 
    cJSON *tolerations_local_nonprimitive;
    if(!cJSON_IsArray(tolerations)){
        goto end; //nonprimitive container
    }

    tolerationsList = list_create();

    cJSON_ArrayForEach(tolerations_local_nonprimitive,tolerations )
    {
        if(!cJSON_IsObject(tolerations_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_toleration_t *tolerationsItem = io_k8s_api_core_v1_toleration_parseFromJSON(tolerations_local_nonprimitive);

        list_addElement(tolerationsList, tolerationsItem);
    }
    }

    // io_k8s_api_core_v1_pod_spec->topology_spread_constraints
    cJSON *topology_spread_constraints = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "topologySpreadConstraints");
    list_t *topology_spread_constraintsList;
    if (topology_spread_constraints) { 
    cJSON *topology_spread_constraints_local_nonprimitive;
    if(!cJSON_IsArray(topology_spread_constraints)){
        goto end; //nonprimitive container
    }

    topology_spread_constraintsList = list_create();

    cJSON_ArrayForEach(topology_spread_constraints_local_nonprimitive,topology_spread_constraints )
    {
        if(!cJSON_IsObject(topology_spread_constraints_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_topology_spread_constraint_t *topology_spread_constraintsItem = io_k8s_api_core_v1_topology_spread_constraint_parseFromJSON(topology_spread_constraints_local_nonprimitive);

        list_addElement(topology_spread_constraintsList, topology_spread_constraintsItem);
    }
    }

    // io_k8s_api_core_v1_pod_spec->volumes
    cJSON *volumes = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_specJSON, "volumes");
    list_t *volumesList;
    if (volumes) { 
    cJSON *volumes_local_nonprimitive;
    if(!cJSON_IsArray(volumes)){
        goto end; //nonprimitive container
    }

    volumesList = list_create();

    cJSON_ArrayForEach(volumes_local_nonprimitive,volumes )
    {
        if(!cJSON_IsObject(volumes_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_volume_t *volumesItem = io_k8s_api_core_v1_volume_parseFromJSON(volumes_local_nonprimitive);

        list_addElement(volumesList, volumesItem);
    }
    }


    io_k8s_api_core_v1_pod_spec_local_var = io_k8s_api_core_v1_pod_spec_create (
        active_deadline_seconds ? active_deadline_seconds->valuedouble : 0,
        affinity ? affinity_local_nonprim : NULL,
        automount_service_account_token ? automount_service_account_token->valueint : 0,
        containersList,
        dns_config ? dns_config_local_nonprim : NULL,
        dns_policy ? strdup(dns_policy->valuestring) : NULL,
        enable_service_links ? enable_service_links->valueint : 0,
        ephemeral_containers ? ephemeral_containersList : NULL,
        host_aliases ? host_aliasesList : NULL,
        host_ipc ? host_ipc->valueint : 0,
        host_network ? host_network->valueint : 0,
        host_pid ? host_pid->valueint : 0,
        hostname ? strdup(hostname->valuestring) : NULL,
        image_pull_secrets ? image_pull_secretsList : NULL,
        init_containers ? init_containersList : NULL,
        node_name ? strdup(node_name->valuestring) : NULL,
        node_selector ? node_selectorList : NULL,
        overhead ? overheadList : NULL,
        preemption_policy ? strdup(preemption_policy->valuestring) : NULL,
        priority ? priority->valuedouble : 0,
        priority_class_name ? strdup(priority_class_name->valuestring) : NULL,
        readiness_gates ? readiness_gatesList : NULL,
        restart_policy ? strdup(restart_policy->valuestring) : NULL,
        runtime_class_name ? strdup(runtime_class_name->valuestring) : NULL,
        scheduler_name ? strdup(scheduler_name->valuestring) : NULL,
        security_context ? security_context_local_nonprim : NULL,
        service_account ? strdup(service_account->valuestring) : NULL,
        service_account_name ? strdup(service_account_name->valuestring) : NULL,
        set_hostname_as_fqdn ? set_hostname_as_fqdn->valueint : 0,
        share_process_namespace ? share_process_namespace->valueint : 0,
        subdomain ? strdup(subdomain->valuestring) : NULL,
        termination_grace_period_seconds ? termination_grace_period_seconds->valuedouble : 0,
        tolerations ? tolerationsList : NULL,
        topology_spread_constraints ? topology_spread_constraintsList : NULL,
        volumes ? volumesList : NULL
        );

    return io_k8s_api_core_v1_pod_spec_local_var;
end:
    if (affinity_local_nonprim) {
        io_k8s_api_core_v1_affinity_free(affinity_local_nonprim);
        affinity_local_nonprim = NULL;
    }
    if (dns_config_local_nonprim) {
        io_k8s_api_core_v1_pod_dns_config_free(dns_config_local_nonprim);
        dns_config_local_nonprim = NULL;
    }
    if (security_context_local_nonprim) {
        io_k8s_api_core_v1_pod_security_context_free(security_context_local_nonprim);
        security_context_local_nonprim = NULL;
    }
    return NULL;

}
