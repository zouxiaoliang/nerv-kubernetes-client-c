#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_rbac_v1alpha1_cluster_role.h"
#include "../model/io_k8s_api_rbac_v1alpha1_cluster_role_binding.h"
#include "../model/io_k8s_api_rbac_v1alpha1_cluster_role_binding_list.h"
#include "../model/io_k8s_api_rbac_v1alpha1_cluster_role_list.h"
#include "../model/io_k8s_api_rbac_v1alpha1_role.h"
#include "../model/io_k8s_api_rbac_v1alpha1_role_binding.h"
#include "../model/io_k8s_api_rbac_v1alpha1_role_binding_list.h"
#include "../model/io_k8s_api_rbac_v1alpha1_role_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create a ClusterRole
//
io_k8s_api_rbac_v1alpha1_cluster_role_t*
RbacAuthorizationV1alpha1API_createRbacAuthorizationV1alpha1ClusterRole(apiClient_t *apiClient, io_k8s_api_rbac_v1alpha1_cluster_role_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a ClusterRoleBinding
//
io_k8s_api_rbac_v1alpha1_cluster_role_binding_t*
RbacAuthorizationV1alpha1API_createRbacAuthorizationV1alpha1ClusterRoleBinding(apiClient_t *apiClient, io_k8s_api_rbac_v1alpha1_cluster_role_binding_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a Role
//
io_k8s_api_rbac_v1alpha1_role_t*
RbacAuthorizationV1alpha1API_createRbacAuthorizationV1alpha1NamespacedRole(apiClient_t *apiClient, char * _namespace , io_k8s_api_rbac_v1alpha1_role_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a RoleBinding
//
io_k8s_api_rbac_v1alpha1_role_binding_t*
RbacAuthorizationV1alpha1API_createRbacAuthorizationV1alpha1NamespacedRoleBinding(apiClient_t *apiClient, char * _namespace , io_k8s_api_rbac_v1alpha1_role_binding_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete a ClusterRole
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
RbacAuthorizationV1alpha1API_deleteRbacAuthorizationV1alpha1ClusterRole(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a ClusterRoleBinding
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
RbacAuthorizationV1alpha1API_deleteRbacAuthorizationV1alpha1ClusterRoleBinding(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of ClusterRole
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
RbacAuthorizationV1alpha1API_deleteRbacAuthorizationV1alpha1CollectionClusterRole(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of ClusterRoleBinding
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
RbacAuthorizationV1alpha1API_deleteRbacAuthorizationV1alpha1CollectionClusterRoleBinding(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of Role
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
RbacAuthorizationV1alpha1API_deleteRbacAuthorizationV1alpha1CollectionNamespacedRole(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of RoleBinding
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
RbacAuthorizationV1alpha1API_deleteRbacAuthorizationV1alpha1CollectionNamespacedRoleBinding(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a Role
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
RbacAuthorizationV1alpha1API_deleteRbacAuthorizationV1alpha1NamespacedRole(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a RoleBinding
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
RbacAuthorizationV1alpha1API_deleteRbacAuthorizationV1alpha1NamespacedRoleBinding(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
RbacAuthorizationV1alpha1API_getRbacAuthorizationV1alpha1APIResources(apiClient_t *apiClient);


// list or watch objects of kind ClusterRole
//
io_k8s_api_rbac_v1alpha1_cluster_role_list_t*
RbacAuthorizationV1alpha1API_listRbacAuthorizationV1alpha1ClusterRole(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind ClusterRoleBinding
//
io_k8s_api_rbac_v1alpha1_cluster_role_binding_list_t*
RbacAuthorizationV1alpha1API_listRbacAuthorizationV1alpha1ClusterRoleBinding(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Role
//
io_k8s_api_rbac_v1alpha1_role_list_t*
RbacAuthorizationV1alpha1API_listRbacAuthorizationV1alpha1NamespacedRole(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind RoleBinding
//
io_k8s_api_rbac_v1alpha1_role_binding_list_t*
RbacAuthorizationV1alpha1API_listRbacAuthorizationV1alpha1NamespacedRoleBinding(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind RoleBinding
//
io_k8s_api_rbac_v1alpha1_role_binding_list_t*
RbacAuthorizationV1alpha1API_listRbacAuthorizationV1alpha1RoleBindingForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Role
//
io_k8s_api_rbac_v1alpha1_role_list_t*
RbacAuthorizationV1alpha1API_listRbacAuthorizationV1alpha1RoleForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified ClusterRole
//
io_k8s_api_rbac_v1alpha1_cluster_role_t*
RbacAuthorizationV1alpha1API_patchRbacAuthorizationV1alpha1ClusterRole(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified ClusterRoleBinding
//
io_k8s_api_rbac_v1alpha1_cluster_role_binding_t*
RbacAuthorizationV1alpha1API_patchRbacAuthorizationV1alpha1ClusterRoleBinding(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified Role
//
io_k8s_api_rbac_v1alpha1_role_t*
RbacAuthorizationV1alpha1API_patchRbacAuthorizationV1alpha1NamespacedRole(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified RoleBinding
//
io_k8s_api_rbac_v1alpha1_role_binding_t*
RbacAuthorizationV1alpha1API_patchRbacAuthorizationV1alpha1NamespacedRoleBinding(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified ClusterRole
//
io_k8s_api_rbac_v1alpha1_cluster_role_t*
RbacAuthorizationV1alpha1API_readRbacAuthorizationV1alpha1ClusterRole(apiClient_t *apiClient, char * name , char * pretty );


// read the specified ClusterRoleBinding
//
io_k8s_api_rbac_v1alpha1_cluster_role_binding_t*
RbacAuthorizationV1alpha1API_readRbacAuthorizationV1alpha1ClusterRoleBinding(apiClient_t *apiClient, char * name , char * pretty );


// read the specified Role
//
io_k8s_api_rbac_v1alpha1_role_t*
RbacAuthorizationV1alpha1API_readRbacAuthorizationV1alpha1NamespacedRole(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified RoleBinding
//
io_k8s_api_rbac_v1alpha1_role_binding_t*
RbacAuthorizationV1alpha1API_readRbacAuthorizationV1alpha1NamespacedRoleBinding(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// replace the specified ClusterRole
//
io_k8s_api_rbac_v1alpha1_cluster_role_t*
RbacAuthorizationV1alpha1API_replaceRbacAuthorizationV1alpha1ClusterRole(apiClient_t *apiClient, char * name , io_k8s_api_rbac_v1alpha1_cluster_role_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified ClusterRoleBinding
//
io_k8s_api_rbac_v1alpha1_cluster_role_binding_t*
RbacAuthorizationV1alpha1API_replaceRbacAuthorizationV1alpha1ClusterRoleBinding(apiClient_t *apiClient, char * name , io_k8s_api_rbac_v1alpha1_cluster_role_binding_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified Role
//
io_k8s_api_rbac_v1alpha1_role_t*
RbacAuthorizationV1alpha1API_replaceRbacAuthorizationV1alpha1NamespacedRole(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_rbac_v1alpha1_role_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified RoleBinding
//
io_k8s_api_rbac_v1alpha1_role_binding_t*
RbacAuthorizationV1alpha1API_replaceRbacAuthorizationV1alpha1NamespacedRoleBinding(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_rbac_v1alpha1_role_binding_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch changes to an object of kind ClusterRole. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
RbacAuthorizationV1alpha1API_watchRbacAuthorizationV1alpha1ClusterRole(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind ClusterRoleBinding. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
RbacAuthorizationV1alpha1API_watchRbacAuthorizationV1alpha1ClusterRoleBinding(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of ClusterRoleBinding. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
RbacAuthorizationV1alpha1API_watchRbacAuthorizationV1alpha1ClusterRoleBindingList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of ClusterRole. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
RbacAuthorizationV1alpha1API_watchRbacAuthorizationV1alpha1ClusterRoleList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind Role. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
RbacAuthorizationV1alpha1API_watchRbacAuthorizationV1alpha1NamespacedRole(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind RoleBinding. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
RbacAuthorizationV1alpha1API_watchRbacAuthorizationV1alpha1NamespacedRoleBinding(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of RoleBinding. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
RbacAuthorizationV1alpha1API_watchRbacAuthorizationV1alpha1NamespacedRoleBindingList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Role. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
RbacAuthorizationV1alpha1API_watchRbacAuthorizationV1alpha1NamespacedRoleList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of RoleBinding. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
RbacAuthorizationV1alpha1API_watchRbacAuthorizationV1alpha1RoleBindingListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Role. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
RbacAuthorizationV1alpha1API_watchRbacAuthorizationV1alpha1RoleListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


