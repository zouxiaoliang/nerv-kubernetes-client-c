#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_discovery_v1beta1_endpoint_slice.h"
#include "../model/io_k8s_api_discovery_v1beta1_endpoint_slice_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create an EndpointSlice
//
io_k8s_api_discovery_v1beta1_endpoint_slice_t*
DiscoveryV1beta1API_createDiscoveryV1beta1NamespacedEndpointSlice(apiClient_t *apiClient, char * _namespace , io_k8s_api_discovery_v1beta1_endpoint_slice_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete collection of EndpointSlice
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
DiscoveryV1beta1API_deleteDiscoveryV1beta1CollectionNamespacedEndpointSlice(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete an EndpointSlice
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
DiscoveryV1beta1API_deleteDiscoveryV1beta1NamespacedEndpointSlice(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
DiscoveryV1beta1API_getDiscoveryV1beta1APIResources(apiClient_t *apiClient);


// list or watch objects of kind EndpointSlice
//
io_k8s_api_discovery_v1beta1_endpoint_slice_list_t*
DiscoveryV1beta1API_listDiscoveryV1beta1EndpointSliceForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind EndpointSlice
//
io_k8s_api_discovery_v1beta1_endpoint_slice_list_t*
DiscoveryV1beta1API_listDiscoveryV1beta1NamespacedEndpointSlice(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified EndpointSlice
//
io_k8s_api_discovery_v1beta1_endpoint_slice_t*
DiscoveryV1beta1API_patchDiscoveryV1beta1NamespacedEndpointSlice(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified EndpointSlice
//
io_k8s_api_discovery_v1beta1_endpoint_slice_t*
DiscoveryV1beta1API_readDiscoveryV1beta1NamespacedEndpointSlice(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// replace the specified EndpointSlice
//
io_k8s_api_discovery_v1beta1_endpoint_slice_t*
DiscoveryV1beta1API_replaceDiscoveryV1beta1NamespacedEndpointSlice(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_discovery_v1beta1_endpoint_slice_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch individual changes to a list of EndpointSlice. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
DiscoveryV1beta1API_watchDiscoveryV1beta1EndpointSliceListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind EndpointSlice. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
DiscoveryV1beta1API_watchDiscoveryV1beta1NamespacedEndpointSlice(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of EndpointSlice. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
DiscoveryV1beta1API_watchDiscoveryV1beta1NamespacedEndpointSliceList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


