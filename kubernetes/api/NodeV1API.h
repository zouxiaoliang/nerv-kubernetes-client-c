#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_node_v1_runtime_class.h"
#include "../model/io_k8s_api_node_v1_runtime_class_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create a RuntimeClass
//
io_k8s_api_node_v1_runtime_class_t*
NodeV1API_createNodeV1RuntimeClass(apiClient_t *apiClient, io_k8s_api_node_v1_runtime_class_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete collection of RuntimeClass
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
NodeV1API_deleteNodeV1CollectionRuntimeClass(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a RuntimeClass
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
NodeV1API_deleteNodeV1RuntimeClass(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
NodeV1API_getNodeV1APIResources(apiClient_t *apiClient);


// list or watch objects of kind RuntimeClass
//
io_k8s_api_node_v1_runtime_class_list_t*
NodeV1API_listNodeV1RuntimeClass(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified RuntimeClass
//
io_k8s_api_node_v1_runtime_class_t*
NodeV1API_patchNodeV1RuntimeClass(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified RuntimeClass
//
io_k8s_api_node_v1_runtime_class_t*
NodeV1API_readNodeV1RuntimeClass(apiClient_t *apiClient, char * name , char * pretty );


// replace the specified RuntimeClass
//
io_k8s_api_node_v1_runtime_class_t*
NodeV1API_replaceNodeV1RuntimeClass(apiClient_t *apiClient, char * name , io_k8s_api_node_v1_runtime_class_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch changes to an object of kind RuntimeClass. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
NodeV1API_watchNodeV1RuntimeClass(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of RuntimeClass. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
NodeV1API_watchNodeV1RuntimeClassList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


