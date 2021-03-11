#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_flowcontrol_v1beta1_flow_schema.h"
#include "../model/io_k8s_api_flowcontrol_v1beta1_flow_schema_list.h"
#include "../model/io_k8s_api_flowcontrol_v1beta1_priority_level_configuration.h"
#include "../model/io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create a FlowSchema
//
io_k8s_api_flowcontrol_v1beta1_flow_schema_t*
FlowcontrolApiserverV1beta1API_createFlowcontrolApiserverV1beta1FlowSchema(apiClient_t *apiClient, io_k8s_api_flowcontrol_v1beta1_flow_schema_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a PriorityLevelConfiguration
//
io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_t*
FlowcontrolApiserverV1beta1API_createFlowcontrolApiserverV1beta1PriorityLevelConfiguration(apiClient_t *apiClient, io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete collection of FlowSchema
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
FlowcontrolApiserverV1beta1API_deleteFlowcontrolApiserverV1beta1CollectionFlowSchema(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of PriorityLevelConfiguration
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
FlowcontrolApiserverV1beta1API_deleteFlowcontrolApiserverV1beta1CollectionPriorityLevelConfiguration(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a FlowSchema
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
FlowcontrolApiserverV1beta1API_deleteFlowcontrolApiserverV1beta1FlowSchema(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a PriorityLevelConfiguration
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
FlowcontrolApiserverV1beta1API_deleteFlowcontrolApiserverV1beta1PriorityLevelConfiguration(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
FlowcontrolApiserverV1beta1API_getFlowcontrolApiserverV1beta1APIResources(apiClient_t *apiClient);


// list or watch objects of kind FlowSchema
//
io_k8s_api_flowcontrol_v1beta1_flow_schema_list_t*
FlowcontrolApiserverV1beta1API_listFlowcontrolApiserverV1beta1FlowSchema(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind PriorityLevelConfiguration
//
io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_list_t*
FlowcontrolApiserverV1beta1API_listFlowcontrolApiserverV1beta1PriorityLevelConfiguration(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified FlowSchema
//
io_k8s_api_flowcontrol_v1beta1_flow_schema_t*
FlowcontrolApiserverV1beta1API_patchFlowcontrolApiserverV1beta1FlowSchema(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified FlowSchema
//
io_k8s_api_flowcontrol_v1beta1_flow_schema_t*
FlowcontrolApiserverV1beta1API_patchFlowcontrolApiserverV1beta1FlowSchemaStatus(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified PriorityLevelConfiguration
//
io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_t*
FlowcontrolApiserverV1beta1API_patchFlowcontrolApiserverV1beta1PriorityLevelConfiguration(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified PriorityLevelConfiguration
//
io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_t*
FlowcontrolApiserverV1beta1API_patchFlowcontrolApiserverV1beta1PriorityLevelConfigurationStatus(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified FlowSchema
//
io_k8s_api_flowcontrol_v1beta1_flow_schema_t*
FlowcontrolApiserverV1beta1API_readFlowcontrolApiserverV1beta1FlowSchema(apiClient_t *apiClient, char * name , char * pretty );


// read status of the specified FlowSchema
//
io_k8s_api_flowcontrol_v1beta1_flow_schema_t*
FlowcontrolApiserverV1beta1API_readFlowcontrolApiserverV1beta1FlowSchemaStatus(apiClient_t *apiClient, char * name , char * pretty );


// read the specified PriorityLevelConfiguration
//
io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_t*
FlowcontrolApiserverV1beta1API_readFlowcontrolApiserverV1beta1PriorityLevelConfiguration(apiClient_t *apiClient, char * name , char * pretty );


// read status of the specified PriorityLevelConfiguration
//
io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_t*
FlowcontrolApiserverV1beta1API_readFlowcontrolApiserverV1beta1PriorityLevelConfigurationStatus(apiClient_t *apiClient, char * name , char * pretty );


// replace the specified FlowSchema
//
io_k8s_api_flowcontrol_v1beta1_flow_schema_t*
FlowcontrolApiserverV1beta1API_replaceFlowcontrolApiserverV1beta1FlowSchema(apiClient_t *apiClient, char * name , io_k8s_api_flowcontrol_v1beta1_flow_schema_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified FlowSchema
//
io_k8s_api_flowcontrol_v1beta1_flow_schema_t*
FlowcontrolApiserverV1beta1API_replaceFlowcontrolApiserverV1beta1FlowSchemaStatus(apiClient_t *apiClient, char * name , io_k8s_api_flowcontrol_v1beta1_flow_schema_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified PriorityLevelConfiguration
//
io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_t*
FlowcontrolApiserverV1beta1API_replaceFlowcontrolApiserverV1beta1PriorityLevelConfiguration(apiClient_t *apiClient, char * name , io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified PriorityLevelConfiguration
//
io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_t*
FlowcontrolApiserverV1beta1API_replaceFlowcontrolApiserverV1beta1PriorityLevelConfigurationStatus(apiClient_t *apiClient, char * name , io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch changes to an object of kind FlowSchema. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
FlowcontrolApiserverV1beta1API_watchFlowcontrolApiserverV1beta1FlowSchema(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of FlowSchema. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
FlowcontrolApiserverV1beta1API_watchFlowcontrolApiserverV1beta1FlowSchemaList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind PriorityLevelConfiguration. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
FlowcontrolApiserverV1beta1API_watchFlowcontrolApiserverV1beta1PriorityLevelConfiguration(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of PriorityLevelConfiguration. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
FlowcontrolApiserverV1beta1API_watchFlowcontrolApiserverV1beta1PriorityLevelConfigurationList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


