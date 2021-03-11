#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_storage_v1alpha1_csi_storage_capacity.h"
#include "../model/io_k8s_api_storage_v1alpha1_csi_storage_capacity_list.h"
#include "../model/io_k8s_api_storage_v1alpha1_volume_attachment.h"
#include "../model/io_k8s_api_storage_v1alpha1_volume_attachment_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create a CSIStorageCapacity
//
io_k8s_api_storage_v1alpha1_csi_storage_capacity_t*
StorageV1alpha1API_createStorageV1alpha1NamespacedCSIStorageCapacity(apiClient_t *apiClient, char * _namespace , io_k8s_api_storage_v1alpha1_csi_storage_capacity_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a VolumeAttachment
//
io_k8s_api_storage_v1alpha1_volume_attachment_t*
StorageV1alpha1API_createStorageV1alpha1VolumeAttachment(apiClient_t *apiClient, io_k8s_api_storage_v1alpha1_volume_attachment_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete collection of CSIStorageCapacity
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
StorageV1alpha1API_deleteStorageV1alpha1CollectionNamespacedCSIStorageCapacity(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of VolumeAttachment
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
StorageV1alpha1API_deleteStorageV1alpha1CollectionVolumeAttachment(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a CSIStorageCapacity
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
StorageV1alpha1API_deleteStorageV1alpha1NamespacedCSIStorageCapacity(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a VolumeAttachment
//
io_k8s_api_storage_v1alpha1_volume_attachment_t*
StorageV1alpha1API_deleteStorageV1alpha1VolumeAttachment(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
StorageV1alpha1API_getStorageV1alpha1APIResources(apiClient_t *apiClient);


// list or watch objects of kind CSIStorageCapacity
//
io_k8s_api_storage_v1alpha1_csi_storage_capacity_list_t*
StorageV1alpha1API_listStorageV1alpha1CSIStorageCapacityForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind CSIStorageCapacity
//
io_k8s_api_storage_v1alpha1_csi_storage_capacity_list_t*
StorageV1alpha1API_listStorageV1alpha1NamespacedCSIStorageCapacity(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind VolumeAttachment
//
io_k8s_api_storage_v1alpha1_volume_attachment_list_t*
StorageV1alpha1API_listStorageV1alpha1VolumeAttachment(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified CSIStorageCapacity
//
io_k8s_api_storage_v1alpha1_csi_storage_capacity_t*
StorageV1alpha1API_patchStorageV1alpha1NamespacedCSIStorageCapacity(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified VolumeAttachment
//
io_k8s_api_storage_v1alpha1_volume_attachment_t*
StorageV1alpha1API_patchStorageV1alpha1VolumeAttachment(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified CSIStorageCapacity
//
io_k8s_api_storage_v1alpha1_csi_storage_capacity_t*
StorageV1alpha1API_readStorageV1alpha1NamespacedCSIStorageCapacity(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified VolumeAttachment
//
io_k8s_api_storage_v1alpha1_volume_attachment_t*
StorageV1alpha1API_readStorageV1alpha1VolumeAttachment(apiClient_t *apiClient, char * name , char * pretty );


// replace the specified CSIStorageCapacity
//
io_k8s_api_storage_v1alpha1_csi_storage_capacity_t*
StorageV1alpha1API_replaceStorageV1alpha1NamespacedCSIStorageCapacity(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_storage_v1alpha1_csi_storage_capacity_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified VolumeAttachment
//
io_k8s_api_storage_v1alpha1_volume_attachment_t*
StorageV1alpha1API_replaceStorageV1alpha1VolumeAttachment(apiClient_t *apiClient, char * name , io_k8s_api_storage_v1alpha1_volume_attachment_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch individual changes to a list of CSIStorageCapacity. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1alpha1API_watchStorageV1alpha1CSIStorageCapacityListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind CSIStorageCapacity. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1alpha1API_watchStorageV1alpha1NamespacedCSIStorageCapacity(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of CSIStorageCapacity. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1alpha1API_watchStorageV1alpha1NamespacedCSIStorageCapacityList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind VolumeAttachment. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1alpha1API_watchStorageV1alpha1VolumeAttachment(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of VolumeAttachment. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1alpha1API_watchStorageV1alpha1VolumeAttachmentList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


