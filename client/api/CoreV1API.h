#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_authentication_v1_token_request.h"
#include "../model/io_k8s_api_autoscaling_v1_scale.h"
#include "../model/io_k8s_api_core_v1_binding.h"
#include "../model/io_k8s_api_core_v1_component_status.h"
#include "../model/io_k8s_api_core_v1_component_status_list.h"
#include "../model/io_k8s_api_core_v1_config_map.h"
#include "../model/io_k8s_api_core_v1_config_map_list.h"
#include "../model/io_k8s_api_core_v1_endpoints.h"
#include "../model/io_k8s_api_core_v1_endpoints_list.h"
#include "../model/io_k8s_api_core_v1_ephemeral_containers.h"
#include "../model/io_k8s_api_core_v1_event.h"
#include "../model/io_k8s_api_core_v1_event_list.h"
#include "../model/io_k8s_api_core_v1_limit_range.h"
#include "../model/io_k8s_api_core_v1_limit_range_list.h"
#include "../model/io_k8s_api_core_v1_namespace.h"
#include "../model/io_k8s_api_core_v1_namespace_list.h"
#include "../model/io_k8s_api_core_v1_node.h"
#include "../model/io_k8s_api_core_v1_node_list.h"
#include "../model/io_k8s_api_core_v1_persistent_volume.h"
#include "../model/io_k8s_api_core_v1_persistent_volume_claim.h"
#include "../model/io_k8s_api_core_v1_persistent_volume_claim_list.h"
#include "../model/io_k8s_api_core_v1_persistent_volume_list.h"
#include "../model/io_k8s_api_core_v1_pod.h"
#include "../model/io_k8s_api_core_v1_pod_list.h"
#include "../model/io_k8s_api_core_v1_pod_template.h"
#include "../model/io_k8s_api_core_v1_pod_template_list.h"
#include "../model/io_k8s_api_core_v1_replication_controller.h"
#include "../model/io_k8s_api_core_v1_replication_controller_list.h"
#include "../model/io_k8s_api_core_v1_resource_quota.h"
#include "../model/io_k8s_api_core_v1_resource_quota_list.h"
#include "../model/io_k8s_api_core_v1_secret.h"
#include "../model/io_k8s_api_core_v1_secret_list.h"
#include "../model/io_k8s_api_core_v1_service.h"
#include "../model/io_k8s_api_core_v1_service_account.h"
#include "../model/io_k8s_api_core_v1_service_account_list.h"
#include "../model/io_k8s_api_core_v1_service_list.h"
#include "../model/io_k8s_api_policy_v1beta1_eviction.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// connect DELETE requests to proxy of Pod
//
char*
CoreV1API_connectCoreV1DeleteNamespacedPodProxy(apiClient_t *apiClient, char * name , char * _namespace , char * path );


// connect DELETE requests to proxy of Pod
//
char*
CoreV1API_connectCoreV1DeleteNamespacedPodProxyWithPath(apiClient_t *apiClient, char * name , char * _namespace , char * path , char * path2 );


// connect DELETE requests to proxy of Service
//
char*
CoreV1API_connectCoreV1DeleteNamespacedServiceProxy(apiClient_t *apiClient, char * name , char * _namespace , char * path );


// connect DELETE requests to proxy of Service
//
char*
CoreV1API_connectCoreV1DeleteNamespacedServiceProxyWithPath(apiClient_t *apiClient, char * name , char * _namespace , char * path , char * path2 );


// connect DELETE requests to proxy of Node
//
char*
CoreV1API_connectCoreV1DeleteNodeProxy(apiClient_t *apiClient, char * name , char * path );


// connect DELETE requests to proxy of Node
//
char*
CoreV1API_connectCoreV1DeleteNodeProxyWithPath(apiClient_t *apiClient, char * name , char * path , char * path2 );


// connect GET requests to attach of Pod
//
char*
CoreV1API_connectCoreV1GetNamespacedPodAttach(apiClient_t *apiClient, char * name , char * _namespace , char * container , int stderr , int stdin , int stdout , int tty );


// connect GET requests to exec of Pod
//
char*
CoreV1API_connectCoreV1GetNamespacedPodExec(apiClient_t *apiClient, char * name , char * _namespace , char * command , char * container , int stderr , int stdin , int stdout , int tty );


// connect GET requests to portforward of Pod
//
char*
CoreV1API_connectCoreV1GetNamespacedPodPortforward(apiClient_t *apiClient, char * name , char * _namespace , int ports );


// connect GET requests to proxy of Pod
//
char*
CoreV1API_connectCoreV1GetNamespacedPodProxy(apiClient_t *apiClient, char * name , char * _namespace , char * path );


// connect GET requests to proxy of Pod
//
char*
CoreV1API_connectCoreV1GetNamespacedPodProxyWithPath(apiClient_t *apiClient, char * name , char * _namespace , char * path , char * path2 );


// connect GET requests to proxy of Service
//
char*
CoreV1API_connectCoreV1GetNamespacedServiceProxy(apiClient_t *apiClient, char * name , char * _namespace , char * path );


// connect GET requests to proxy of Service
//
char*
CoreV1API_connectCoreV1GetNamespacedServiceProxyWithPath(apiClient_t *apiClient, char * name , char * _namespace , char * path , char * path2 );


// connect GET requests to proxy of Node
//
char*
CoreV1API_connectCoreV1GetNodeProxy(apiClient_t *apiClient, char * name , char * path );


// connect GET requests to proxy of Node
//
char*
CoreV1API_connectCoreV1GetNodeProxyWithPath(apiClient_t *apiClient, char * name , char * path , char * path2 );


// connect HEAD requests to proxy of Pod
//
char*
CoreV1API_connectCoreV1HeadNamespacedPodProxy(apiClient_t *apiClient, char * name , char * _namespace , char * path );


// connect HEAD requests to proxy of Pod
//
char*
CoreV1API_connectCoreV1HeadNamespacedPodProxyWithPath(apiClient_t *apiClient, char * name , char * _namespace , char * path , char * path2 );


// connect HEAD requests to proxy of Service
//
char*
CoreV1API_connectCoreV1HeadNamespacedServiceProxy(apiClient_t *apiClient, char * name , char * _namespace , char * path );


// connect HEAD requests to proxy of Service
//
char*
CoreV1API_connectCoreV1HeadNamespacedServiceProxyWithPath(apiClient_t *apiClient, char * name , char * _namespace , char * path , char * path2 );


// connect HEAD requests to proxy of Node
//
char*
CoreV1API_connectCoreV1HeadNodeProxy(apiClient_t *apiClient, char * name , char * path );


// connect HEAD requests to proxy of Node
//
char*
CoreV1API_connectCoreV1HeadNodeProxyWithPath(apiClient_t *apiClient, char * name , char * path , char * path2 );


// connect OPTIONS requests to proxy of Pod
//
char*
CoreV1API_connectCoreV1OptionsNamespacedPodProxy(apiClient_t *apiClient, char * name , char * _namespace , char * path );


// connect OPTIONS requests to proxy of Pod
//
char*
CoreV1API_connectCoreV1OptionsNamespacedPodProxyWithPath(apiClient_t *apiClient, char * name , char * _namespace , char * path , char * path2 );


// connect OPTIONS requests to proxy of Service
//
char*
CoreV1API_connectCoreV1OptionsNamespacedServiceProxy(apiClient_t *apiClient, char * name , char * _namespace , char * path );


// connect OPTIONS requests to proxy of Service
//
char*
CoreV1API_connectCoreV1OptionsNamespacedServiceProxyWithPath(apiClient_t *apiClient, char * name , char * _namespace , char * path , char * path2 );


// connect OPTIONS requests to proxy of Node
//
char*
CoreV1API_connectCoreV1OptionsNodeProxy(apiClient_t *apiClient, char * name , char * path );


// connect OPTIONS requests to proxy of Node
//
char*
CoreV1API_connectCoreV1OptionsNodeProxyWithPath(apiClient_t *apiClient, char * name , char * path , char * path2 );


// connect PATCH requests to proxy of Pod
//
char*
CoreV1API_connectCoreV1PatchNamespacedPodProxy(apiClient_t *apiClient, char * name , char * _namespace , char * path );


// connect PATCH requests to proxy of Pod
//
char*
CoreV1API_connectCoreV1PatchNamespacedPodProxyWithPath(apiClient_t *apiClient, char * name , char * _namespace , char * path , char * path2 );


// connect PATCH requests to proxy of Service
//
char*
CoreV1API_connectCoreV1PatchNamespacedServiceProxy(apiClient_t *apiClient, char * name , char * _namespace , char * path );


// connect PATCH requests to proxy of Service
//
char*
CoreV1API_connectCoreV1PatchNamespacedServiceProxyWithPath(apiClient_t *apiClient, char * name , char * _namespace , char * path , char * path2 );


// connect PATCH requests to proxy of Node
//
char*
CoreV1API_connectCoreV1PatchNodeProxy(apiClient_t *apiClient, char * name , char * path );


// connect PATCH requests to proxy of Node
//
char*
CoreV1API_connectCoreV1PatchNodeProxyWithPath(apiClient_t *apiClient, char * name , char * path , char * path2 );


// connect POST requests to attach of Pod
//
char*
CoreV1API_connectCoreV1PostNamespacedPodAttach(apiClient_t *apiClient, char * name , char * _namespace , char * container , int stderr , int stdin , int stdout , int tty );


// connect POST requests to exec of Pod
//
char*
CoreV1API_connectCoreV1PostNamespacedPodExec(apiClient_t *apiClient, char * name , char * _namespace , char * command , char * container , int stderr , int stdin , int stdout , int tty );


// connect POST requests to portforward of Pod
//
char*
CoreV1API_connectCoreV1PostNamespacedPodPortforward(apiClient_t *apiClient, char * name , char * _namespace , int ports );


// connect POST requests to proxy of Pod
//
char*
CoreV1API_connectCoreV1PostNamespacedPodProxy(apiClient_t *apiClient, char * name , char * _namespace , char * path );


// connect POST requests to proxy of Pod
//
char*
CoreV1API_connectCoreV1PostNamespacedPodProxyWithPath(apiClient_t *apiClient, char * name , char * _namespace , char * path , char * path2 );


// connect POST requests to proxy of Service
//
char*
CoreV1API_connectCoreV1PostNamespacedServiceProxy(apiClient_t *apiClient, char * name , char * _namespace , char * path );


// connect POST requests to proxy of Service
//
char*
CoreV1API_connectCoreV1PostNamespacedServiceProxyWithPath(apiClient_t *apiClient, char * name , char * _namespace , char * path , char * path2 );


// connect POST requests to proxy of Node
//
char*
CoreV1API_connectCoreV1PostNodeProxy(apiClient_t *apiClient, char * name , char * path );


// connect POST requests to proxy of Node
//
char*
CoreV1API_connectCoreV1PostNodeProxyWithPath(apiClient_t *apiClient, char * name , char * path , char * path2 );


// connect PUT requests to proxy of Pod
//
char*
CoreV1API_connectCoreV1PutNamespacedPodProxy(apiClient_t *apiClient, char * name , char * _namespace , char * path );


// connect PUT requests to proxy of Pod
//
char*
CoreV1API_connectCoreV1PutNamespacedPodProxyWithPath(apiClient_t *apiClient, char * name , char * _namespace , char * path , char * path2 );


// connect PUT requests to proxy of Service
//
char*
CoreV1API_connectCoreV1PutNamespacedServiceProxy(apiClient_t *apiClient, char * name , char * _namespace , char * path );


// connect PUT requests to proxy of Service
//
char*
CoreV1API_connectCoreV1PutNamespacedServiceProxyWithPath(apiClient_t *apiClient, char * name , char * _namespace , char * path , char * path2 );


// connect PUT requests to proxy of Node
//
char*
CoreV1API_connectCoreV1PutNodeProxy(apiClient_t *apiClient, char * name , char * path );


// connect PUT requests to proxy of Node
//
char*
CoreV1API_connectCoreV1PutNodeProxyWithPath(apiClient_t *apiClient, char * name , char * path , char * path2 );


// create a Namespace
//
io_k8s_api_core_v1_namespace_t*
CoreV1API_createCoreV1Namespace(apiClient_t *apiClient, io_k8s_api_core_v1_namespace_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a Binding
//
io_k8s_api_core_v1_binding_t*
CoreV1API_createCoreV1NamespacedBinding(apiClient_t *apiClient, char * _namespace , io_k8s_api_core_v1_binding_t * body , char * dryRun , char * fieldManager , char * pretty );


// create a ConfigMap
//
io_k8s_api_core_v1_config_map_t*
CoreV1API_createCoreV1NamespacedConfigMap(apiClient_t *apiClient, char * _namespace , io_k8s_api_core_v1_config_map_t * body , char * pretty , char * dryRun , char * fieldManager );


// create Endpoints
//
io_k8s_api_core_v1_endpoints_t*
CoreV1API_createCoreV1NamespacedEndpoints(apiClient_t *apiClient, char * _namespace , io_k8s_api_core_v1_endpoints_t * body , char * pretty , char * dryRun , char * fieldManager );


// create an Event
//
io_k8s_api_core_v1_event_t*
CoreV1API_createCoreV1NamespacedEvent(apiClient_t *apiClient, char * _namespace , io_k8s_api_core_v1_event_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a LimitRange
//
io_k8s_api_core_v1_limit_range_t*
CoreV1API_createCoreV1NamespacedLimitRange(apiClient_t *apiClient, char * _namespace , io_k8s_api_core_v1_limit_range_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a PersistentVolumeClaim
//
io_k8s_api_core_v1_persistent_volume_claim_t*
CoreV1API_createCoreV1NamespacedPersistentVolumeClaim(apiClient_t *apiClient, char * _namespace , io_k8s_api_core_v1_persistent_volume_claim_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a Pod
//
io_k8s_api_core_v1_pod_t*
CoreV1API_createCoreV1NamespacedPod(apiClient_t *apiClient, char * _namespace , io_k8s_api_core_v1_pod_t * body , char * pretty , char * dryRun , char * fieldManager );


// create binding of a Pod
//
io_k8s_api_core_v1_binding_t*
CoreV1API_createCoreV1NamespacedPodBinding(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_binding_t * body , char * dryRun , char * fieldManager , char * pretty );


// create eviction of a Pod
//
io_k8s_api_policy_v1beta1_eviction_t*
CoreV1API_createCoreV1NamespacedPodEviction(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_policy_v1beta1_eviction_t * body , char * dryRun , char * fieldManager , char * pretty );


// create a PodTemplate
//
io_k8s_api_core_v1_pod_template_t*
CoreV1API_createCoreV1NamespacedPodTemplate(apiClient_t *apiClient, char * _namespace , io_k8s_api_core_v1_pod_template_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a ReplicationController
//
io_k8s_api_core_v1_replication_controller_t*
CoreV1API_createCoreV1NamespacedReplicationController(apiClient_t *apiClient, char * _namespace , io_k8s_api_core_v1_replication_controller_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a ResourceQuota
//
io_k8s_api_core_v1_resource_quota_t*
CoreV1API_createCoreV1NamespacedResourceQuota(apiClient_t *apiClient, char * _namespace , io_k8s_api_core_v1_resource_quota_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a Secret
//
io_k8s_api_core_v1_secret_t*
CoreV1API_createCoreV1NamespacedSecret(apiClient_t *apiClient, char * _namespace , io_k8s_api_core_v1_secret_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a Service
//
io_k8s_api_core_v1_service_t*
CoreV1API_createCoreV1NamespacedService(apiClient_t *apiClient, char * _namespace , io_k8s_api_core_v1_service_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a ServiceAccount
//
io_k8s_api_core_v1_service_account_t*
CoreV1API_createCoreV1NamespacedServiceAccount(apiClient_t *apiClient, char * _namespace , io_k8s_api_core_v1_service_account_t * body , char * pretty , char * dryRun , char * fieldManager );


// create token of a ServiceAccount
//
io_k8s_api_authentication_v1_token_request_t*
CoreV1API_createCoreV1NamespacedServiceAccountToken(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_authentication_v1_token_request_t * body , char * dryRun , char * fieldManager , char * pretty );


// create a Node
//
io_k8s_api_core_v1_node_t*
CoreV1API_createCoreV1Node(apiClient_t *apiClient, io_k8s_api_core_v1_node_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a PersistentVolume
//
io_k8s_api_core_v1_persistent_volume_t*
CoreV1API_createCoreV1PersistentVolume(apiClient_t *apiClient, io_k8s_api_core_v1_persistent_volume_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete collection of ConfigMap
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1CollectionNamespacedConfigMap(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of Endpoints
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1CollectionNamespacedEndpoints(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of Event
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1CollectionNamespacedEvent(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of LimitRange
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1CollectionNamespacedLimitRange(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of PersistentVolumeClaim
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1CollectionNamespacedPersistentVolumeClaim(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of Pod
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1CollectionNamespacedPod(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of PodTemplate
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1CollectionNamespacedPodTemplate(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of ReplicationController
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1CollectionNamespacedReplicationController(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of ResourceQuota
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1CollectionNamespacedResourceQuota(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of Secret
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1CollectionNamespacedSecret(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of ServiceAccount
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1CollectionNamespacedServiceAccount(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of Node
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1CollectionNode(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of PersistentVolume
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1CollectionPersistentVolume(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a Namespace
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1Namespace(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a ConfigMap
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1NamespacedConfigMap(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete Endpoints
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1NamespacedEndpoints(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete an Event
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1NamespacedEvent(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a LimitRange
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1NamespacedLimitRange(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a PersistentVolumeClaim
//
io_k8s_api_core_v1_persistent_volume_claim_t*
CoreV1API_deleteCoreV1NamespacedPersistentVolumeClaim(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a Pod
//
io_k8s_api_core_v1_pod_t*
CoreV1API_deleteCoreV1NamespacedPod(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a PodTemplate
//
io_k8s_api_core_v1_pod_template_t*
CoreV1API_deleteCoreV1NamespacedPodTemplate(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a ReplicationController
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1NamespacedReplicationController(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a ResourceQuota
//
io_k8s_api_core_v1_resource_quota_t*
CoreV1API_deleteCoreV1NamespacedResourceQuota(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a Secret
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1NamespacedSecret(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a Service
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1NamespacedService(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a ServiceAccount
//
io_k8s_api_core_v1_service_account_t*
CoreV1API_deleteCoreV1NamespacedServiceAccount(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a Node
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoreV1API_deleteCoreV1Node(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a PersistentVolume
//
io_k8s_api_core_v1_persistent_volume_t*
CoreV1API_deleteCoreV1PersistentVolume(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
CoreV1API_getCoreV1APIResources(apiClient_t *apiClient);


// list objects of kind ComponentStatus
//
io_k8s_api_core_v1_component_status_list_t*
CoreV1API_listCoreV1ComponentStatus(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind ConfigMap
//
io_k8s_api_core_v1_config_map_list_t*
CoreV1API_listCoreV1ConfigMapForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Endpoints
//
io_k8s_api_core_v1_endpoints_list_t*
CoreV1API_listCoreV1EndpointsForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Event
//
io_k8s_api_core_v1_event_list_t*
CoreV1API_listCoreV1EventForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind LimitRange
//
io_k8s_api_core_v1_limit_range_list_t*
CoreV1API_listCoreV1LimitRangeForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Namespace
//
io_k8s_api_core_v1_namespace_list_t*
CoreV1API_listCoreV1Namespace(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind ConfigMap
//
io_k8s_api_core_v1_config_map_list_t*
CoreV1API_listCoreV1NamespacedConfigMap(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Endpoints
//
io_k8s_api_core_v1_endpoints_list_t*
CoreV1API_listCoreV1NamespacedEndpoints(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Event
//
io_k8s_api_core_v1_event_list_t*
CoreV1API_listCoreV1NamespacedEvent(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind LimitRange
//
io_k8s_api_core_v1_limit_range_list_t*
CoreV1API_listCoreV1NamespacedLimitRange(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind PersistentVolumeClaim
//
io_k8s_api_core_v1_persistent_volume_claim_list_t*
CoreV1API_listCoreV1NamespacedPersistentVolumeClaim(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Pod
//
io_k8s_api_core_v1_pod_list_t*
CoreV1API_listCoreV1NamespacedPod(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind PodTemplate
//
io_k8s_api_core_v1_pod_template_list_t*
CoreV1API_listCoreV1NamespacedPodTemplate(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind ReplicationController
//
io_k8s_api_core_v1_replication_controller_list_t*
CoreV1API_listCoreV1NamespacedReplicationController(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind ResourceQuota
//
io_k8s_api_core_v1_resource_quota_list_t*
CoreV1API_listCoreV1NamespacedResourceQuota(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Secret
//
io_k8s_api_core_v1_secret_list_t*
CoreV1API_listCoreV1NamespacedSecret(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Service
//
io_k8s_api_core_v1_service_list_t*
CoreV1API_listCoreV1NamespacedService(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind ServiceAccount
//
io_k8s_api_core_v1_service_account_list_t*
CoreV1API_listCoreV1NamespacedServiceAccount(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Node
//
io_k8s_api_core_v1_node_list_t*
CoreV1API_listCoreV1Node(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind PersistentVolume
//
io_k8s_api_core_v1_persistent_volume_list_t*
CoreV1API_listCoreV1PersistentVolume(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind PersistentVolumeClaim
//
io_k8s_api_core_v1_persistent_volume_claim_list_t*
CoreV1API_listCoreV1PersistentVolumeClaimForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Pod
//
io_k8s_api_core_v1_pod_list_t*
CoreV1API_listCoreV1PodForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind PodTemplate
//
io_k8s_api_core_v1_pod_template_list_t*
CoreV1API_listCoreV1PodTemplateForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind ReplicationController
//
io_k8s_api_core_v1_replication_controller_list_t*
CoreV1API_listCoreV1ReplicationControllerForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind ResourceQuota
//
io_k8s_api_core_v1_resource_quota_list_t*
CoreV1API_listCoreV1ResourceQuotaForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Secret
//
io_k8s_api_core_v1_secret_list_t*
CoreV1API_listCoreV1SecretForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind ServiceAccount
//
io_k8s_api_core_v1_service_account_list_t*
CoreV1API_listCoreV1ServiceAccountForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Service
//
io_k8s_api_core_v1_service_list_t*
CoreV1API_listCoreV1ServiceForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified Namespace
//
io_k8s_api_core_v1_namespace_t*
CoreV1API_patchCoreV1Namespace(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified Namespace
//
io_k8s_api_core_v1_namespace_t*
CoreV1API_patchCoreV1NamespaceStatus(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified ConfigMap
//
io_k8s_api_core_v1_config_map_t*
CoreV1API_patchCoreV1NamespacedConfigMap(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified Endpoints
//
io_k8s_api_core_v1_endpoints_t*
CoreV1API_patchCoreV1NamespacedEndpoints(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified Event
//
io_k8s_api_core_v1_event_t*
CoreV1API_patchCoreV1NamespacedEvent(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified LimitRange
//
io_k8s_api_core_v1_limit_range_t*
CoreV1API_patchCoreV1NamespacedLimitRange(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified PersistentVolumeClaim
//
io_k8s_api_core_v1_persistent_volume_claim_t*
CoreV1API_patchCoreV1NamespacedPersistentVolumeClaim(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified PersistentVolumeClaim
//
io_k8s_api_core_v1_persistent_volume_claim_t*
CoreV1API_patchCoreV1NamespacedPersistentVolumeClaimStatus(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified Pod
//
io_k8s_api_core_v1_pod_t*
CoreV1API_patchCoreV1NamespacedPod(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update ephemeralcontainers of the specified Pod
//
io_k8s_api_core_v1_ephemeral_containers_t*
CoreV1API_patchCoreV1NamespacedPodEphemeralcontainers(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified Pod
//
io_k8s_api_core_v1_pod_t*
CoreV1API_patchCoreV1NamespacedPodStatus(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified PodTemplate
//
io_k8s_api_core_v1_pod_template_t*
CoreV1API_patchCoreV1NamespacedPodTemplate(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified ReplicationController
//
io_k8s_api_core_v1_replication_controller_t*
CoreV1API_patchCoreV1NamespacedReplicationController(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update scale of the specified ReplicationController
//
io_k8s_api_autoscaling_v1_scale_t*
CoreV1API_patchCoreV1NamespacedReplicationControllerScale(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified ReplicationController
//
io_k8s_api_core_v1_replication_controller_t*
CoreV1API_patchCoreV1NamespacedReplicationControllerStatus(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified ResourceQuota
//
io_k8s_api_core_v1_resource_quota_t*
CoreV1API_patchCoreV1NamespacedResourceQuota(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified ResourceQuota
//
io_k8s_api_core_v1_resource_quota_t*
CoreV1API_patchCoreV1NamespacedResourceQuotaStatus(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified Secret
//
io_k8s_api_core_v1_secret_t*
CoreV1API_patchCoreV1NamespacedSecret(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified Service
//
io_k8s_api_core_v1_service_t*
CoreV1API_patchCoreV1NamespacedService(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified ServiceAccount
//
io_k8s_api_core_v1_service_account_t*
CoreV1API_patchCoreV1NamespacedServiceAccount(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified Service
//
io_k8s_api_core_v1_service_t*
CoreV1API_patchCoreV1NamespacedServiceStatus(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified Node
//
io_k8s_api_core_v1_node_t*
CoreV1API_patchCoreV1Node(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified Node
//
io_k8s_api_core_v1_node_t*
CoreV1API_patchCoreV1NodeStatus(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified PersistentVolume
//
io_k8s_api_core_v1_persistent_volume_t*
CoreV1API_patchCoreV1PersistentVolume(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified PersistentVolume
//
io_k8s_api_core_v1_persistent_volume_t*
CoreV1API_patchCoreV1PersistentVolumeStatus(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified ComponentStatus
//
io_k8s_api_core_v1_component_status_t*
CoreV1API_readCoreV1ComponentStatus(apiClient_t *apiClient, char * name , char * pretty );


// read the specified Namespace
//
io_k8s_api_core_v1_namespace_t*
CoreV1API_readCoreV1Namespace(apiClient_t *apiClient, char * name , char * pretty );


// read status of the specified Namespace
//
io_k8s_api_core_v1_namespace_t*
CoreV1API_readCoreV1NamespaceStatus(apiClient_t *apiClient, char * name , char * pretty );


// read the specified ConfigMap
//
io_k8s_api_core_v1_config_map_t*
CoreV1API_readCoreV1NamespacedConfigMap(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified Endpoints
//
io_k8s_api_core_v1_endpoints_t*
CoreV1API_readCoreV1NamespacedEndpoints(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified Event
//
io_k8s_api_core_v1_event_t*
CoreV1API_readCoreV1NamespacedEvent(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified LimitRange
//
io_k8s_api_core_v1_limit_range_t*
CoreV1API_readCoreV1NamespacedLimitRange(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified PersistentVolumeClaim
//
io_k8s_api_core_v1_persistent_volume_claim_t*
CoreV1API_readCoreV1NamespacedPersistentVolumeClaim(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read status of the specified PersistentVolumeClaim
//
io_k8s_api_core_v1_persistent_volume_claim_t*
CoreV1API_readCoreV1NamespacedPersistentVolumeClaimStatus(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified Pod
//
io_k8s_api_core_v1_pod_t*
CoreV1API_readCoreV1NamespacedPod(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read ephemeralcontainers of the specified Pod
//
io_k8s_api_core_v1_ephemeral_containers_t*
CoreV1API_readCoreV1NamespacedPodEphemeralcontainers(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read log of the specified Pod
//
char*
CoreV1API_readCoreV1NamespacedPodLog(apiClient_t *apiClient, char * name , char * _namespace , char * container , int follow , int insecureSkipTLSVerifyBackend , int limitBytes , char * pretty , int previous , int sinceSeconds , int tailLines , int timestamps );


// read status of the specified Pod
//
io_k8s_api_core_v1_pod_t*
CoreV1API_readCoreV1NamespacedPodStatus(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified PodTemplate
//
io_k8s_api_core_v1_pod_template_t*
CoreV1API_readCoreV1NamespacedPodTemplate(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified ReplicationController
//
io_k8s_api_core_v1_replication_controller_t*
CoreV1API_readCoreV1NamespacedReplicationController(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read scale of the specified ReplicationController
//
io_k8s_api_autoscaling_v1_scale_t*
CoreV1API_readCoreV1NamespacedReplicationControllerScale(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read status of the specified ReplicationController
//
io_k8s_api_core_v1_replication_controller_t*
CoreV1API_readCoreV1NamespacedReplicationControllerStatus(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified ResourceQuota
//
io_k8s_api_core_v1_resource_quota_t*
CoreV1API_readCoreV1NamespacedResourceQuota(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read status of the specified ResourceQuota
//
io_k8s_api_core_v1_resource_quota_t*
CoreV1API_readCoreV1NamespacedResourceQuotaStatus(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified Secret
//
io_k8s_api_core_v1_secret_t*
CoreV1API_readCoreV1NamespacedSecret(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified Service
//
io_k8s_api_core_v1_service_t*
CoreV1API_readCoreV1NamespacedService(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified ServiceAccount
//
io_k8s_api_core_v1_service_account_t*
CoreV1API_readCoreV1NamespacedServiceAccount(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read status of the specified Service
//
io_k8s_api_core_v1_service_t*
CoreV1API_readCoreV1NamespacedServiceStatus(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified Node
//
io_k8s_api_core_v1_node_t*
CoreV1API_readCoreV1Node(apiClient_t *apiClient, char * name , char * pretty );


// read status of the specified Node
//
io_k8s_api_core_v1_node_t*
CoreV1API_readCoreV1NodeStatus(apiClient_t *apiClient, char * name , char * pretty );


// read the specified PersistentVolume
//
io_k8s_api_core_v1_persistent_volume_t*
CoreV1API_readCoreV1PersistentVolume(apiClient_t *apiClient, char * name , char * pretty );


// read status of the specified PersistentVolume
//
io_k8s_api_core_v1_persistent_volume_t*
CoreV1API_readCoreV1PersistentVolumeStatus(apiClient_t *apiClient, char * name , char * pretty );


// replace the specified Namespace
//
io_k8s_api_core_v1_namespace_t*
CoreV1API_replaceCoreV1Namespace(apiClient_t *apiClient, char * name , io_k8s_api_core_v1_namespace_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace finalize of the specified Namespace
//
io_k8s_api_core_v1_namespace_t*
CoreV1API_replaceCoreV1NamespaceFinalize(apiClient_t *apiClient, char * name , io_k8s_api_core_v1_namespace_t * body , char * dryRun , char * fieldManager , char * pretty );


// replace status of the specified Namespace
//
io_k8s_api_core_v1_namespace_t*
CoreV1API_replaceCoreV1NamespaceStatus(apiClient_t *apiClient, char * name , io_k8s_api_core_v1_namespace_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified ConfigMap
//
io_k8s_api_core_v1_config_map_t*
CoreV1API_replaceCoreV1NamespacedConfigMap(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_config_map_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified Endpoints
//
io_k8s_api_core_v1_endpoints_t*
CoreV1API_replaceCoreV1NamespacedEndpoints(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_endpoints_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified Event
//
io_k8s_api_core_v1_event_t*
CoreV1API_replaceCoreV1NamespacedEvent(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_event_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified LimitRange
//
io_k8s_api_core_v1_limit_range_t*
CoreV1API_replaceCoreV1NamespacedLimitRange(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_limit_range_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified PersistentVolumeClaim
//
io_k8s_api_core_v1_persistent_volume_claim_t*
CoreV1API_replaceCoreV1NamespacedPersistentVolumeClaim(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_persistent_volume_claim_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified PersistentVolumeClaim
//
io_k8s_api_core_v1_persistent_volume_claim_t*
CoreV1API_replaceCoreV1NamespacedPersistentVolumeClaimStatus(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_persistent_volume_claim_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified Pod
//
io_k8s_api_core_v1_pod_t*
CoreV1API_replaceCoreV1NamespacedPod(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_pod_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace ephemeralcontainers of the specified Pod
//
io_k8s_api_core_v1_ephemeral_containers_t*
CoreV1API_replaceCoreV1NamespacedPodEphemeralcontainers(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_ephemeral_containers_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified Pod
//
io_k8s_api_core_v1_pod_t*
CoreV1API_replaceCoreV1NamespacedPodStatus(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_pod_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified PodTemplate
//
io_k8s_api_core_v1_pod_template_t*
CoreV1API_replaceCoreV1NamespacedPodTemplate(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_pod_template_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified ReplicationController
//
io_k8s_api_core_v1_replication_controller_t*
CoreV1API_replaceCoreV1NamespacedReplicationController(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_replication_controller_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace scale of the specified ReplicationController
//
io_k8s_api_autoscaling_v1_scale_t*
CoreV1API_replaceCoreV1NamespacedReplicationControllerScale(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_autoscaling_v1_scale_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified ReplicationController
//
io_k8s_api_core_v1_replication_controller_t*
CoreV1API_replaceCoreV1NamespacedReplicationControllerStatus(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_replication_controller_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified ResourceQuota
//
io_k8s_api_core_v1_resource_quota_t*
CoreV1API_replaceCoreV1NamespacedResourceQuota(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_resource_quota_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified ResourceQuota
//
io_k8s_api_core_v1_resource_quota_t*
CoreV1API_replaceCoreV1NamespacedResourceQuotaStatus(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_resource_quota_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified Secret
//
io_k8s_api_core_v1_secret_t*
CoreV1API_replaceCoreV1NamespacedSecret(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_secret_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified Service
//
io_k8s_api_core_v1_service_t*
CoreV1API_replaceCoreV1NamespacedService(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_service_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified ServiceAccount
//
io_k8s_api_core_v1_service_account_t*
CoreV1API_replaceCoreV1NamespacedServiceAccount(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_service_account_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified Service
//
io_k8s_api_core_v1_service_t*
CoreV1API_replaceCoreV1NamespacedServiceStatus(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_core_v1_service_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified Node
//
io_k8s_api_core_v1_node_t*
CoreV1API_replaceCoreV1Node(apiClient_t *apiClient, char * name , io_k8s_api_core_v1_node_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified Node
//
io_k8s_api_core_v1_node_t*
CoreV1API_replaceCoreV1NodeStatus(apiClient_t *apiClient, char * name , io_k8s_api_core_v1_node_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified PersistentVolume
//
io_k8s_api_core_v1_persistent_volume_t*
CoreV1API_replaceCoreV1PersistentVolume(apiClient_t *apiClient, char * name , io_k8s_api_core_v1_persistent_volume_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified PersistentVolume
//
io_k8s_api_core_v1_persistent_volume_t*
CoreV1API_replaceCoreV1PersistentVolumeStatus(apiClient_t *apiClient, char * name , io_k8s_api_core_v1_persistent_volume_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch individual changes to a list of ConfigMap. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1ConfigMapListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Endpoints. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1EndpointsListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Event. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1EventListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of LimitRange. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1LimitRangeListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind Namespace. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1Namespace(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Namespace. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespaceList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind ConfigMap. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedConfigMap(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of ConfigMap. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedConfigMapList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind Endpoints. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedEndpoints(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Endpoints. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedEndpointsList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind Event. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedEvent(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Event. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedEventList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind LimitRange. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedLimitRange(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of LimitRange. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedLimitRangeList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind PersistentVolumeClaim. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedPersistentVolumeClaim(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of PersistentVolumeClaim. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedPersistentVolumeClaimList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind Pod. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedPod(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Pod. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedPodList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind PodTemplate. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedPodTemplate(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of PodTemplate. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedPodTemplateList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind ReplicationController. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedReplicationController(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of ReplicationController. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedReplicationControllerList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind ResourceQuota. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedResourceQuota(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of ResourceQuota. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedResourceQuotaList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind Secret. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedSecret(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Secret. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedSecretList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind Service. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedService(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind ServiceAccount. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedServiceAccount(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of ServiceAccount. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedServiceAccountList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Service. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NamespacedServiceList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind Node. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1Node(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Node. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1NodeList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind PersistentVolume. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1PersistentVolume(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of PersistentVolumeClaim. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1PersistentVolumeClaimListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of PersistentVolume. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1PersistentVolumeList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Pod. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1PodListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of PodTemplate. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1PodTemplateListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of ReplicationController. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1ReplicationControllerListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of ResourceQuota. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1ResourceQuotaListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Secret. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1SecretListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of ServiceAccount. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1ServiceAccountListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Service. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoreV1API_watchCoreV1ServiceListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


