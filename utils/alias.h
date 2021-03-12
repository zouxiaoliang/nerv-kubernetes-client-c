#ifndef ALIAS_H
#define ALIAS_H

#ifdef  __cplusplus
extern "C" {
#endif

#define NS_CORE_TYPE(type) io_k8s_api_core_##type
#define NS_META_TYPE(type) io_k8s_apimachinery_pkg_apis_meta_##type
#define NS_API(func) io_k8s_api_core_##func

#define core_alias(name) typedef struct NS_CORE_TYPE(name) name
#define meta_alias(name) typedef struct NS_META_TYPE(name) name
#define function_alias(name)

core_alias(v1_namespace_t);
core_alias(v1_binding_t);
core_alias(v1_config_map_t);
core_alias(v1_endpoints_t);
core_alias(v1_event_t);
core_alias(v1_limit_range_t);
core_alias(v1_persistent_volume_claim_t);
core_alias(v1_pod_t);
core_alias(v1_pod_template_t);
core_alias(v1_replication_controller_t);
core_alias(v1_resource_quota_t);
core_alias(v1_secret_t);
core_alias(v1_service_t);
core_alias(v1_service_account_t);
core_alias(v1_node_t);
core_alias(v1_persistent_volume_t);
core_alias(v1_component_status_list_t);
core_alias(v1_config_map_list_t);
core_alias(v1_endpoints_list_t);
core_alias(v1_event_list_t);
core_alias(v1_limit_range_list_t);
core_alias(v1_namespace_list_t);
core_alias(v1_persistent_volume_claim_list_t);
core_alias(v1_pod_list_t);
core_alias(v1_pod_template_list_t);
core_alias(v1_replication_controller_list_t);
core_alias(v1_resource_quota_list_t);
core_alias(v1_secret_list_t);
core_alias(v1_service_list_t);
core_alias(v1_service_account_list_t);
core_alias(v1_node_list_t);
core_alias(v1_persistent_volume_list_t);
core_alias(v1_ephemeral_containers_t);
core_alias(v1_component_status_t);

meta_alias(v1_status_t);
meta_alias(v1_api_resource_list_t);
meta_alias(v1_watch_event_t);

#ifdef  __cplusplus
} // end of extern "C" {
#endif
#endif // ALIAS_H