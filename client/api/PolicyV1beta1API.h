#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_policy_v1beta1_pod_disruption_budget.h"
#include "../model/io_k8s_api_policy_v1beta1_pod_disruption_budget_list.h"
#include "../model/io_k8s_api_policy_v1beta1_pod_security_policy.h"
#include "../model/io_k8s_api_policy_v1beta1_pod_security_policy_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create a PodDisruptionBudget
//
io_k8s_api_policy_v1beta1_pod_disruption_budget_t*
PolicyV1beta1API_createPolicyV1beta1NamespacedPodDisruptionBudget(apiClient_t *apiClient, char * _namespace , io_k8s_api_policy_v1beta1_pod_disruption_budget_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a PodSecurityPolicy
//
io_k8s_api_policy_v1beta1_pod_security_policy_t*
PolicyV1beta1API_createPolicyV1beta1PodSecurityPolicy(apiClient_t *apiClient, io_k8s_api_policy_v1beta1_pod_security_policy_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete collection of PodDisruptionBudget
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
PolicyV1beta1API_deletePolicyV1beta1CollectionNamespacedPodDisruptionBudget(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of PodSecurityPolicy
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
PolicyV1beta1API_deletePolicyV1beta1CollectionPodSecurityPolicy(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a PodDisruptionBudget
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
PolicyV1beta1API_deletePolicyV1beta1NamespacedPodDisruptionBudget(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a PodSecurityPolicy
//
io_k8s_api_policy_v1beta1_pod_security_policy_t*
PolicyV1beta1API_deletePolicyV1beta1PodSecurityPolicy(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
PolicyV1beta1API_getPolicyV1beta1APIResources(apiClient_t *apiClient);


// list or watch objects of kind PodDisruptionBudget
//
io_k8s_api_policy_v1beta1_pod_disruption_budget_list_t*
PolicyV1beta1API_listPolicyV1beta1NamespacedPodDisruptionBudget(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind PodDisruptionBudget
//
io_k8s_api_policy_v1beta1_pod_disruption_budget_list_t*
PolicyV1beta1API_listPolicyV1beta1PodDisruptionBudgetForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind PodSecurityPolicy
//
io_k8s_api_policy_v1beta1_pod_security_policy_list_t*
PolicyV1beta1API_listPolicyV1beta1PodSecurityPolicy(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified PodDisruptionBudget
//
io_k8s_api_policy_v1beta1_pod_disruption_budget_t*
PolicyV1beta1API_patchPolicyV1beta1NamespacedPodDisruptionBudget(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified PodDisruptionBudget
//
io_k8s_api_policy_v1beta1_pod_disruption_budget_t*
PolicyV1beta1API_patchPolicyV1beta1NamespacedPodDisruptionBudgetStatus(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified PodSecurityPolicy
//
io_k8s_api_policy_v1beta1_pod_security_policy_t*
PolicyV1beta1API_patchPolicyV1beta1PodSecurityPolicy(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified PodDisruptionBudget
//
io_k8s_api_policy_v1beta1_pod_disruption_budget_t*
PolicyV1beta1API_readPolicyV1beta1NamespacedPodDisruptionBudget(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read status of the specified PodDisruptionBudget
//
io_k8s_api_policy_v1beta1_pod_disruption_budget_t*
PolicyV1beta1API_readPolicyV1beta1NamespacedPodDisruptionBudgetStatus(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified PodSecurityPolicy
//
io_k8s_api_policy_v1beta1_pod_security_policy_t*
PolicyV1beta1API_readPolicyV1beta1PodSecurityPolicy(apiClient_t *apiClient, char * name , char * pretty );


// replace the specified PodDisruptionBudget
//
io_k8s_api_policy_v1beta1_pod_disruption_budget_t*
PolicyV1beta1API_replacePolicyV1beta1NamespacedPodDisruptionBudget(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_policy_v1beta1_pod_disruption_budget_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified PodDisruptionBudget
//
io_k8s_api_policy_v1beta1_pod_disruption_budget_t*
PolicyV1beta1API_replacePolicyV1beta1NamespacedPodDisruptionBudgetStatus(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_policy_v1beta1_pod_disruption_budget_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified PodSecurityPolicy
//
io_k8s_api_policy_v1beta1_pod_security_policy_t*
PolicyV1beta1API_replacePolicyV1beta1PodSecurityPolicy(apiClient_t *apiClient, char * name , io_k8s_api_policy_v1beta1_pod_security_policy_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch changes to an object of kind PodDisruptionBudget. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
PolicyV1beta1API_watchPolicyV1beta1NamespacedPodDisruptionBudget(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of PodDisruptionBudget. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
PolicyV1beta1API_watchPolicyV1beta1NamespacedPodDisruptionBudgetList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of PodDisruptionBudget. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
PolicyV1beta1API_watchPolicyV1beta1PodDisruptionBudgetListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind PodSecurityPolicy. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
PolicyV1beta1API_watchPolicyV1beta1PodSecurityPolicy(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of PodSecurityPolicy. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
PolicyV1beta1API_watchPolicyV1beta1PodSecurityPolicyList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


