#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_networking_v1_ingress.h"
#include "../model/io_k8s_api_networking_v1_ingress_class.h"
#include "../model/io_k8s_api_networking_v1_ingress_class_list.h"
#include "../model/io_k8s_api_networking_v1_ingress_list.h"
#include "../model/io_k8s_api_networking_v1_network_policy.h"
#include "../model/io_k8s_api_networking_v1_network_policy_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create an IngressClass
//
io_k8s_api_networking_v1_ingress_class_t*
NetworkingV1API_createNetworkingV1IngressClass(apiClient_t *apiClient, io_k8s_api_networking_v1_ingress_class_t * body , char * pretty , char * dryRun , char * fieldManager );


// create an Ingress
//
io_k8s_api_networking_v1_ingress_t*
NetworkingV1API_createNetworkingV1NamespacedIngress(apiClient_t *apiClient, char * _namespace , io_k8s_api_networking_v1_ingress_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a NetworkPolicy
//
io_k8s_api_networking_v1_network_policy_t*
NetworkingV1API_createNetworkingV1NamespacedNetworkPolicy(apiClient_t *apiClient, char * _namespace , io_k8s_api_networking_v1_network_policy_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete collection of IngressClass
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
NetworkingV1API_deleteNetworkingV1CollectionIngressClass(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of Ingress
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
NetworkingV1API_deleteNetworkingV1CollectionNamespacedIngress(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of NetworkPolicy
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
NetworkingV1API_deleteNetworkingV1CollectionNamespacedNetworkPolicy(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete an IngressClass
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
NetworkingV1API_deleteNetworkingV1IngressClass(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete an Ingress
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
NetworkingV1API_deleteNetworkingV1NamespacedIngress(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a NetworkPolicy
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
NetworkingV1API_deleteNetworkingV1NamespacedNetworkPolicy(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
NetworkingV1API_getNetworkingV1APIResources(apiClient_t *apiClient);


// list or watch objects of kind IngressClass
//
io_k8s_api_networking_v1_ingress_class_list_t*
NetworkingV1API_listNetworkingV1IngressClass(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Ingress
//
io_k8s_api_networking_v1_ingress_list_t*
NetworkingV1API_listNetworkingV1IngressForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Ingress
//
io_k8s_api_networking_v1_ingress_list_t*
NetworkingV1API_listNetworkingV1NamespacedIngress(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind NetworkPolicy
//
io_k8s_api_networking_v1_network_policy_list_t*
NetworkingV1API_listNetworkingV1NamespacedNetworkPolicy(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind NetworkPolicy
//
io_k8s_api_networking_v1_network_policy_list_t*
NetworkingV1API_listNetworkingV1NetworkPolicyForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified IngressClass
//
io_k8s_api_networking_v1_ingress_class_t*
NetworkingV1API_patchNetworkingV1IngressClass(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified Ingress
//
io_k8s_api_networking_v1_ingress_t*
NetworkingV1API_patchNetworkingV1NamespacedIngress(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified Ingress
//
io_k8s_api_networking_v1_ingress_t*
NetworkingV1API_patchNetworkingV1NamespacedIngressStatus(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified NetworkPolicy
//
io_k8s_api_networking_v1_network_policy_t*
NetworkingV1API_patchNetworkingV1NamespacedNetworkPolicy(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified IngressClass
//
io_k8s_api_networking_v1_ingress_class_t*
NetworkingV1API_readNetworkingV1IngressClass(apiClient_t *apiClient, char * name , char * pretty );


// read the specified Ingress
//
io_k8s_api_networking_v1_ingress_t*
NetworkingV1API_readNetworkingV1NamespacedIngress(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read status of the specified Ingress
//
io_k8s_api_networking_v1_ingress_t*
NetworkingV1API_readNetworkingV1NamespacedIngressStatus(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified NetworkPolicy
//
io_k8s_api_networking_v1_network_policy_t*
NetworkingV1API_readNetworkingV1NamespacedNetworkPolicy(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// replace the specified IngressClass
//
io_k8s_api_networking_v1_ingress_class_t*
NetworkingV1API_replaceNetworkingV1IngressClass(apiClient_t *apiClient, char * name , io_k8s_api_networking_v1_ingress_class_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified Ingress
//
io_k8s_api_networking_v1_ingress_t*
NetworkingV1API_replaceNetworkingV1NamespacedIngress(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_networking_v1_ingress_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified Ingress
//
io_k8s_api_networking_v1_ingress_t*
NetworkingV1API_replaceNetworkingV1NamespacedIngressStatus(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_networking_v1_ingress_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified NetworkPolicy
//
io_k8s_api_networking_v1_network_policy_t*
NetworkingV1API_replaceNetworkingV1NamespacedNetworkPolicy(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_networking_v1_network_policy_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch changes to an object of kind IngressClass. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
NetworkingV1API_watchNetworkingV1IngressClass(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of IngressClass. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
NetworkingV1API_watchNetworkingV1IngressClassList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Ingress. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
NetworkingV1API_watchNetworkingV1IngressListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind Ingress. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
NetworkingV1API_watchNetworkingV1NamespacedIngress(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Ingress. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
NetworkingV1API_watchNetworkingV1NamespacedIngressList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind NetworkPolicy. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
NetworkingV1API_watchNetworkingV1NamespacedNetworkPolicy(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of NetworkPolicy. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
NetworkingV1API_watchNetworkingV1NamespacedNetworkPolicyList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of NetworkPolicy. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
NetworkingV1API_watchNetworkingV1NetworkPolicyListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


