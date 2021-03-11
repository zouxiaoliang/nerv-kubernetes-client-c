#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_coordination_v1_lease.h"
#include "../model/io_k8s_api_coordination_v1_lease_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create a Lease
//
io_k8s_api_coordination_v1_lease_t*
CoordinationV1API_createCoordinationV1NamespacedLease(apiClient_t *apiClient, char * _namespace , io_k8s_api_coordination_v1_lease_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete collection of Lease
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoordinationV1API_deleteCoordinationV1CollectionNamespacedLease(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a Lease
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CoordinationV1API_deleteCoordinationV1NamespacedLease(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
CoordinationV1API_getCoordinationV1APIResources(apiClient_t *apiClient);


// list or watch objects of kind Lease
//
io_k8s_api_coordination_v1_lease_list_t*
CoordinationV1API_listCoordinationV1LeaseForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Lease
//
io_k8s_api_coordination_v1_lease_list_t*
CoordinationV1API_listCoordinationV1NamespacedLease(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified Lease
//
io_k8s_api_coordination_v1_lease_t*
CoordinationV1API_patchCoordinationV1NamespacedLease(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified Lease
//
io_k8s_api_coordination_v1_lease_t*
CoordinationV1API_readCoordinationV1NamespacedLease(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// replace the specified Lease
//
io_k8s_api_coordination_v1_lease_t*
CoordinationV1API_replaceCoordinationV1NamespacedLease(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_coordination_v1_lease_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch individual changes to a list of Lease. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoordinationV1API_watchCoordinationV1LeaseListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind Lease. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoordinationV1API_watchCoordinationV1NamespacedLease(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Lease. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CoordinationV1API_watchCoordinationV1NamespacedLeaseList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


