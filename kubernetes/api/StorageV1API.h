#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_storage_v1_csi_driver.h"
#include "../model/io_k8s_api_storage_v1_csi_driver_list.h"
#include "../model/io_k8s_api_storage_v1_csi_node.h"
#include "../model/io_k8s_api_storage_v1_csi_node_list.h"
#include "../model/io_k8s_api_storage_v1_storage_class.h"
#include "../model/io_k8s_api_storage_v1_storage_class_list.h"
#include "../model/io_k8s_api_storage_v1_volume_attachment.h"
#include "../model/io_k8s_api_storage_v1_volume_attachment_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create a CSIDriver
//
io_k8s_api_storage_v1_csi_driver_t*
StorageV1API_createStorageV1CSIDriver(apiClient_t *apiClient, io_k8s_api_storage_v1_csi_driver_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a CSINode
//
io_k8s_api_storage_v1_csi_node_t*
StorageV1API_createStorageV1CSINode(apiClient_t *apiClient, io_k8s_api_storage_v1_csi_node_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a StorageClass
//
io_k8s_api_storage_v1_storage_class_t*
StorageV1API_createStorageV1StorageClass(apiClient_t *apiClient, io_k8s_api_storage_v1_storage_class_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a VolumeAttachment
//
io_k8s_api_storage_v1_volume_attachment_t*
StorageV1API_createStorageV1VolumeAttachment(apiClient_t *apiClient, io_k8s_api_storage_v1_volume_attachment_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete a CSIDriver
//
io_k8s_api_storage_v1_csi_driver_t*
StorageV1API_deleteStorageV1CSIDriver(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a CSINode
//
io_k8s_api_storage_v1_csi_node_t*
StorageV1API_deleteStorageV1CSINode(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of CSIDriver
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
StorageV1API_deleteStorageV1CollectionCSIDriver(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of CSINode
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
StorageV1API_deleteStorageV1CollectionCSINode(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of StorageClass
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
StorageV1API_deleteStorageV1CollectionStorageClass(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of VolumeAttachment
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
StorageV1API_deleteStorageV1CollectionVolumeAttachment(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a StorageClass
//
io_k8s_api_storage_v1_storage_class_t*
StorageV1API_deleteStorageV1StorageClass(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a VolumeAttachment
//
io_k8s_api_storage_v1_volume_attachment_t*
StorageV1API_deleteStorageV1VolumeAttachment(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
StorageV1API_getStorageV1APIResources(apiClient_t *apiClient);


// list or watch objects of kind CSIDriver
//
io_k8s_api_storage_v1_csi_driver_list_t*
StorageV1API_listStorageV1CSIDriver(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind CSINode
//
io_k8s_api_storage_v1_csi_node_list_t*
StorageV1API_listStorageV1CSINode(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind StorageClass
//
io_k8s_api_storage_v1_storage_class_list_t*
StorageV1API_listStorageV1StorageClass(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind VolumeAttachment
//
io_k8s_api_storage_v1_volume_attachment_list_t*
StorageV1API_listStorageV1VolumeAttachment(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified CSIDriver
//
io_k8s_api_storage_v1_csi_driver_t*
StorageV1API_patchStorageV1CSIDriver(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified CSINode
//
io_k8s_api_storage_v1_csi_node_t*
StorageV1API_patchStorageV1CSINode(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified StorageClass
//
io_k8s_api_storage_v1_storage_class_t*
StorageV1API_patchStorageV1StorageClass(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified VolumeAttachment
//
io_k8s_api_storage_v1_volume_attachment_t*
StorageV1API_patchStorageV1VolumeAttachment(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified VolumeAttachment
//
io_k8s_api_storage_v1_volume_attachment_t*
StorageV1API_patchStorageV1VolumeAttachmentStatus(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified CSIDriver
//
io_k8s_api_storage_v1_csi_driver_t*
StorageV1API_readStorageV1CSIDriver(apiClient_t *apiClient, char * name , char * pretty );


// read the specified CSINode
//
io_k8s_api_storage_v1_csi_node_t*
StorageV1API_readStorageV1CSINode(apiClient_t *apiClient, char * name , char * pretty );


// read the specified StorageClass
//
io_k8s_api_storage_v1_storage_class_t*
StorageV1API_readStorageV1StorageClass(apiClient_t *apiClient, char * name , char * pretty );


// read the specified VolumeAttachment
//
io_k8s_api_storage_v1_volume_attachment_t*
StorageV1API_readStorageV1VolumeAttachment(apiClient_t *apiClient, char * name , char * pretty );


// read status of the specified VolumeAttachment
//
io_k8s_api_storage_v1_volume_attachment_t*
StorageV1API_readStorageV1VolumeAttachmentStatus(apiClient_t *apiClient, char * name , char * pretty );


// replace the specified CSIDriver
//
io_k8s_api_storage_v1_csi_driver_t*
StorageV1API_replaceStorageV1CSIDriver(apiClient_t *apiClient, char * name , io_k8s_api_storage_v1_csi_driver_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified CSINode
//
io_k8s_api_storage_v1_csi_node_t*
StorageV1API_replaceStorageV1CSINode(apiClient_t *apiClient, char * name , io_k8s_api_storage_v1_csi_node_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified StorageClass
//
io_k8s_api_storage_v1_storage_class_t*
StorageV1API_replaceStorageV1StorageClass(apiClient_t *apiClient, char * name , io_k8s_api_storage_v1_storage_class_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified VolumeAttachment
//
io_k8s_api_storage_v1_volume_attachment_t*
StorageV1API_replaceStorageV1VolumeAttachment(apiClient_t *apiClient, char * name , io_k8s_api_storage_v1_volume_attachment_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified VolumeAttachment
//
io_k8s_api_storage_v1_volume_attachment_t*
StorageV1API_replaceStorageV1VolumeAttachmentStatus(apiClient_t *apiClient, char * name , io_k8s_api_storage_v1_volume_attachment_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch changes to an object of kind CSIDriver. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1API_watchStorageV1CSIDriver(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of CSIDriver. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1API_watchStorageV1CSIDriverList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind CSINode. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1API_watchStorageV1CSINode(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of CSINode. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1API_watchStorageV1CSINodeList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind StorageClass. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1API_watchStorageV1StorageClass(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of StorageClass. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1API_watchStorageV1StorageClassList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind VolumeAttachment. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1API_watchStorageV1VolumeAttachment(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of VolumeAttachment. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
StorageV1API_watchStorageV1VolumeAttachmentList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


