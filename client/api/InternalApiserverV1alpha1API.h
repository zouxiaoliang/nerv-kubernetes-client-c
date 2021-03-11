#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_apiserverinternal_v1alpha1_storage_version.h"
#include "../model/io_k8s_api_apiserverinternal_v1alpha1_storage_version_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create a StorageVersion
//
io_k8s_api_apiserverinternal_v1alpha1_storage_version_t*
InternalApiserverV1alpha1API_createInternalApiserverV1alpha1StorageVersion(apiClient_t *apiClient, io_k8s_api_apiserverinternal_v1alpha1_storage_version_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete collection of StorageVersion
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
InternalApiserverV1alpha1API_deleteInternalApiserverV1alpha1CollectionStorageVersion(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a StorageVersion
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
InternalApiserverV1alpha1API_deleteInternalApiserverV1alpha1StorageVersion(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
InternalApiserverV1alpha1API_getInternalApiserverV1alpha1APIResources(apiClient_t *apiClient);


// list or watch objects of kind StorageVersion
//
io_k8s_api_apiserverinternal_v1alpha1_storage_version_list_t*
InternalApiserverV1alpha1API_listInternalApiserverV1alpha1StorageVersion(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified StorageVersion
//
io_k8s_api_apiserverinternal_v1alpha1_storage_version_t*
InternalApiserverV1alpha1API_patchInternalApiserverV1alpha1StorageVersion(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified StorageVersion
//
io_k8s_api_apiserverinternal_v1alpha1_storage_version_t*
InternalApiserverV1alpha1API_patchInternalApiserverV1alpha1StorageVersionStatus(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified StorageVersion
//
io_k8s_api_apiserverinternal_v1alpha1_storage_version_t*
InternalApiserverV1alpha1API_readInternalApiserverV1alpha1StorageVersion(apiClient_t *apiClient, char * name , char * pretty );


// read status of the specified StorageVersion
//
io_k8s_api_apiserverinternal_v1alpha1_storage_version_t*
InternalApiserverV1alpha1API_readInternalApiserverV1alpha1StorageVersionStatus(apiClient_t *apiClient, char * name , char * pretty );


// replace the specified StorageVersion
//
io_k8s_api_apiserverinternal_v1alpha1_storage_version_t*
InternalApiserverV1alpha1API_replaceInternalApiserverV1alpha1StorageVersion(apiClient_t *apiClient, char * name , io_k8s_api_apiserverinternal_v1alpha1_storage_version_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified StorageVersion
//
io_k8s_api_apiserverinternal_v1alpha1_storage_version_t*
InternalApiserverV1alpha1API_replaceInternalApiserverV1alpha1StorageVersionStatus(apiClient_t *apiClient, char * name , io_k8s_api_apiserverinternal_v1alpha1_storage_version_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch changes to an object of kind StorageVersion. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
InternalApiserverV1alpha1API_watchInternalApiserverV1alpha1StorageVersion(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of StorageVersion. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
InternalApiserverV1alpha1API_watchInternalApiserverV1alpha1StorageVersionList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


