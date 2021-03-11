#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_extensions_v1beta1_ingress.h"
#include "../model/io_k8s_api_extensions_v1beta1_ingress_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create an Ingress
//
io_k8s_api_extensions_v1beta1_ingress_t*
ExtensionsV1beta1API_createExtensionsV1beta1NamespacedIngress(apiClient_t *apiClient, char * _namespace , io_k8s_api_extensions_v1beta1_ingress_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete collection of Ingress
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
ExtensionsV1beta1API_deleteExtensionsV1beta1CollectionNamespacedIngress(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete an Ingress
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
ExtensionsV1beta1API_deleteExtensionsV1beta1NamespacedIngress(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
ExtensionsV1beta1API_getExtensionsV1beta1APIResources(apiClient_t *apiClient);


// list or watch objects of kind Ingress
//
io_k8s_api_extensions_v1beta1_ingress_list_t*
ExtensionsV1beta1API_listExtensionsV1beta1IngressForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Ingress
//
io_k8s_api_extensions_v1beta1_ingress_list_t*
ExtensionsV1beta1API_listExtensionsV1beta1NamespacedIngress(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified Ingress
//
io_k8s_api_extensions_v1beta1_ingress_t*
ExtensionsV1beta1API_patchExtensionsV1beta1NamespacedIngress(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified Ingress
//
io_k8s_api_extensions_v1beta1_ingress_t*
ExtensionsV1beta1API_patchExtensionsV1beta1NamespacedIngressStatus(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified Ingress
//
io_k8s_api_extensions_v1beta1_ingress_t*
ExtensionsV1beta1API_readExtensionsV1beta1NamespacedIngress(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read status of the specified Ingress
//
io_k8s_api_extensions_v1beta1_ingress_t*
ExtensionsV1beta1API_readExtensionsV1beta1NamespacedIngressStatus(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// replace the specified Ingress
//
io_k8s_api_extensions_v1beta1_ingress_t*
ExtensionsV1beta1API_replaceExtensionsV1beta1NamespacedIngress(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_extensions_v1beta1_ingress_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified Ingress
//
io_k8s_api_extensions_v1beta1_ingress_t*
ExtensionsV1beta1API_replaceExtensionsV1beta1NamespacedIngressStatus(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_extensions_v1beta1_ingress_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch individual changes to a list of Ingress. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
ExtensionsV1beta1API_watchExtensionsV1beta1IngressListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind Ingress. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
ExtensionsV1beta1API_watchExtensionsV1beta1NamespacedIngress(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Ingress. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
ExtensionsV1beta1API_watchExtensionsV1beta1NamespacedIngressList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


