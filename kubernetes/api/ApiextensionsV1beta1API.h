#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition.h"
#include "../model/io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create a CustomResourceDefinition
//
io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_t*
ApiextensionsV1beta1API_createApiextensionsV1beta1CustomResourceDefinition(apiClient_t *apiClient, io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete collection of CustomResourceDefinition
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
ApiextensionsV1beta1API_deleteApiextensionsV1beta1CollectionCustomResourceDefinition(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a CustomResourceDefinition
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
ApiextensionsV1beta1API_deleteApiextensionsV1beta1CustomResourceDefinition(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
ApiextensionsV1beta1API_getApiextensionsV1beta1APIResources(apiClient_t *apiClient);


// list or watch objects of kind CustomResourceDefinition
//
io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_list_t*
ApiextensionsV1beta1API_listApiextensionsV1beta1CustomResourceDefinition(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified CustomResourceDefinition
//
io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_t*
ApiextensionsV1beta1API_patchApiextensionsV1beta1CustomResourceDefinition(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified CustomResourceDefinition
//
io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_t*
ApiextensionsV1beta1API_patchApiextensionsV1beta1CustomResourceDefinitionStatus(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified CustomResourceDefinition
//
io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_t*
ApiextensionsV1beta1API_readApiextensionsV1beta1CustomResourceDefinition(apiClient_t *apiClient, char * name , char * pretty );


// read status of the specified CustomResourceDefinition
//
io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_t*
ApiextensionsV1beta1API_readApiextensionsV1beta1CustomResourceDefinitionStatus(apiClient_t *apiClient, char * name , char * pretty );


// replace the specified CustomResourceDefinition
//
io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_t*
ApiextensionsV1beta1API_replaceApiextensionsV1beta1CustomResourceDefinition(apiClient_t *apiClient, char * name , io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified CustomResourceDefinition
//
io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_t*
ApiextensionsV1beta1API_replaceApiextensionsV1beta1CustomResourceDefinitionStatus(apiClient_t *apiClient, char * name , io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch changes to an object of kind CustomResourceDefinition. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
ApiextensionsV1beta1API_watchApiextensionsV1beta1CustomResourceDefinition(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of CustomResourceDefinition. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
ApiextensionsV1beta1API_watchApiextensionsV1beta1CustomResourceDefinitionList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


