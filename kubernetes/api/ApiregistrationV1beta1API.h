#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"
#include "../model/io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service.h"
#include "../model/io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_list.h"


// create an APIService
//
io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_t*
ApiregistrationV1beta1API_createApiregistrationV1beta1APIService(apiClient_t *apiClient, io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete an APIService
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
ApiregistrationV1beta1API_deleteApiregistrationV1beta1APIService(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of APIService
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
ApiregistrationV1beta1API_deleteApiregistrationV1beta1CollectionAPIService(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
ApiregistrationV1beta1API_getApiregistrationV1beta1APIResources(apiClient_t *apiClient);


// list or watch objects of kind APIService
//
io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_list_t*
ApiregistrationV1beta1API_listApiregistrationV1beta1APIService(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified APIService
//
io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_t*
ApiregistrationV1beta1API_patchApiregistrationV1beta1APIService(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified APIService
//
io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_t*
ApiregistrationV1beta1API_patchApiregistrationV1beta1APIServiceStatus(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified APIService
//
io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_t*
ApiregistrationV1beta1API_readApiregistrationV1beta1APIService(apiClient_t *apiClient, char * name , char * pretty );


// read status of the specified APIService
//
io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_t*
ApiregistrationV1beta1API_readApiregistrationV1beta1APIServiceStatus(apiClient_t *apiClient, char * name , char * pretty );


// replace the specified APIService
//
io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_t*
ApiregistrationV1beta1API_replaceApiregistrationV1beta1APIService(apiClient_t *apiClient, char * name , io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified APIService
//
io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_t*
ApiregistrationV1beta1API_replaceApiregistrationV1beta1APIServiceStatus(apiClient_t *apiClient, char * name , io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch changes to an object of kind APIService. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
ApiregistrationV1beta1API_watchApiregistrationV1beta1APIService(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of APIService. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
ApiregistrationV1beta1API_watchApiregistrationV1beta1APIServiceList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


