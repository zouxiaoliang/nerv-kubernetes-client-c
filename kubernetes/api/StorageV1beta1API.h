#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_storage_v1beta1_csi_driver.h"
#include "../model/io_k8s_api_storage_v1beta1_csi_driver_list.h"
#include "../model/io_k8s_api_storage_v1beta1_csi_node.h"
#include "../model/io_k8s_api_storage_v1beta1_csi_node_list.h"
#include "../model/io_k8s_api_storage_v1beta1_storage_class.h"
#include "../model/io_k8s_api_storage_v1beta1_storage_class_list.h"
#include "../model/io_k8s_api_storage_v1beta1_volume_attachment.h"
#include "../model/io_k8s_api_storage_v1beta1_volume_attachment_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create a CSIDriver
//
io_k8s_api_storage_v1beta1_csi_driver_t*
StorageV1beta1API_createStorageV1beta1CSIDriver(apiClient_t *apiClient, io_k8s_api_storage_v1beta1_csi_driver_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a CSINode
//
io_k8s_api_storage_v1beta1_csi_node_t*
StorageV1beta1API_createStorageV1beta1CSINode(apiClient_t *apiClient, io_k8s_api_storage_v1beta1_csi_node_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a StorageClass
//
io_k8s_api_storage_v1beta1_storage_class_t*
StorageV1beta1API_createStorageV1beta1StorageClass(apiClient_t *apiClient, io_k8s_api_storage_v1beta1_storage_class_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a VolumeAttachment
//
io_k8s_api_storage_v1beta1_volume_attachment_t*
StorageV1beta1API_createStorageV1beta1VolumeAttachment(apiClient_t *apiClient, io_k8s_api_storage_v1beta1_volume_attachment_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete a CSIDriver
//
io_k8s_api_storage_v1beta1_csi_driver_t*
StorageV1beta1API_deleteStorageV1beta1CSIDriver(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a CSINode
//
io_k8s_api_storage_v1beta1_csi_node_t*
StorageV1beta1API_deleteStorageV1beta1CSINode(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of CSIDriver
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
StorageV1beta1API_deleteStorageV1beta1CollectionCSIDriver(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of CSINode
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
StorageV1beta1API_deleteStorageV1beta1CollectionCSINode(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of StorageClass
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
StorageV1beta1API_deleteStorageV1beta1CollectionStorageClass(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of VolumeAttachment
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
StorageV1beta1API_deleteStorageV1beta1CollectionVolumeAttachment(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a StorageClass
//
io_k8s_api_storage_v1beta1_storage_class_t*
StorageV1beta1API_deleteStorageV1beta1StorageClass(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a VolumeAttachment
//
io_k8s_api_storage_v1beta1_volume_attachment_t*
StorageV1beta1API_deleteStorageV1beta1VolumeAttachment(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
StorageV1beta1API_getStorageV1beta1APIResources(apiClient_t *apiClient);


// list or watch objects of kind CSIDriver
//
io_k8s_api_storage_v1beta1_csi_driver_list_t*
StorageV1beta1API_listStorageV1beta1CSIDriver(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind CSINode
//
io_k8s_api_storage_v1beta1_csi_node_list_t*
StorageV1beta1API_listStorageV1beta1CSINode(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind StorageClass
//
io_k8s_api_storage_v1beta1_storage_class_list_t*
StorageV1beta1API_listStorageV1beta1StorageClass(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind VolumeAttachment
//
io_k8s_api_storage_v1beta1_volume_attachment_list_t*
StorageV1beta1API_listStorageV1beta1VolumeAttachment(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified CSIDriver
//
io_k8s_api_storage_v1beta1_csi_driver_t*
StorageV1beta1API_patchStorageV1beta1CSIDriver(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified CSINode
//
io_k8s_api_storage_v1beta1_csi_node_t*
StorageV1beta1API_patchStorageV1beta1CSINode(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified StorageClass
//
io_k8s_api_storage_v1beta1_storage_class_t*
StorageV1beta1API_patchStorageV1beta1StorageClass(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified VolumeAttachment
//
io_k8s_api_storage_v1beta1_volume_attachment_t*
StorageV1beta1API_patchStorageV1beta1VolumeAttachment(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified CSIDriver
//
io_k8s_api_storage_v1beta1_csi_driver_t*
StorageV1beta1API_readStorageV1beta1CSIDriver(apiClient_t *apiClient, char * name , char * pretty );


// read the specified CSINode
//
io_k8s_api_storage_v1beta1_csi_node_t*
StorageV1beta1API_readStorageV1beta1CSINode(apiClient_t *apiClient, char * name , char * pretty );


// read the specified StorageClass
//
io_k8s_api_storage_v1beta1_storage_class_t*
StorageV1beta1API_readStorageV1beta1StorageClass(apiClient_t *apiClient, char * name , char * pretty );


// read the specified VolumeAttachment
//
io_k8s_api_storage_v1beta1_volume_attachment_t*
StorageV1beta1API_readStorageV1beta1VolumeAttachment(apiClient_t *apiClient, char * name , char * pretty );


// replace the specified CSIDriver
//
io_k8s_api_storage_v1beta1_csi_driver_t*
StorageV1beta1API_replaceStorageV1beta1CSIDriver(apiClient_t *apiClient, char * name , io_k8s_api_storage_v1beta1_csi_driver_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified CSINode
//
io_k8s_api_storage_v1beta1_csi_node_t*
StorageV1beta1API_replaceStorageV1beta1CSINode(apiClient_t *apiClient, char * name , io_k8s_api_storage_v1beta1_csi_node_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified StorageClass
//
io_k8s_api_storage_v1beta1_storage_class_t*
StorageV1beta1API_replaceStorageV1beta1StorageClass(apiClient_t *apiClient, char * name , io_k8s_api_storage_v1beta1_storage_class_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified VolumeAttachment
//
io_k8s_api_storage_v1beta1_volume_attachment_t*
StorageV1beta1API_replaceStorageV1beta1VolumeAttachment(apiClient_t *apiClient, char * name , io_k8s_api_storage_v1beta1_volume_attachment_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch changes to an object of kind CSIDriver. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1beta1API_watchStorageV1beta1CSIDriver(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of CSIDriver. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1beta1API_watchStorageV1beta1CSIDriverList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind CSINode. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1beta1API_watchStorageV1beta1CSINode(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of CSINode. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1beta1API_watchStorageV1beta1CSINodeList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind StorageClass. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1beta1API_watchStorageV1beta1StorageClass(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of StorageClass. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1beta1API_watchStorageV1beta1StorageClassList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind VolumeAttachment. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1beta1API_watchStorageV1beta1VolumeAttachment(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of VolumeAttachment. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1beta1API_watchStorageV1beta1VolumeAttachmentList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


