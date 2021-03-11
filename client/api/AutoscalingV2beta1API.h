#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler.h"
#include "../model/io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create a HorizontalPodAutoscaler
//
io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_t*
AutoscalingV2beta1API_createAutoscalingV2beta1NamespacedHorizontalPodAutoscaler(apiClient_t *apiClient, char * _namespace , io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete collection of HorizontalPodAutoscaler
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
AutoscalingV2beta1API_deleteAutoscalingV2beta1CollectionNamespacedHorizontalPodAutoscaler(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a HorizontalPodAutoscaler
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
AutoscalingV2beta1API_deleteAutoscalingV2beta1NamespacedHorizontalPodAutoscaler(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
AutoscalingV2beta1API_getAutoscalingV2beta1APIResources(apiClient_t *apiClient);


// list or watch objects of kind HorizontalPodAutoscaler
//
io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_list_t*
AutoscalingV2beta1API_listAutoscalingV2beta1HorizontalPodAutoscalerForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind HorizontalPodAutoscaler
//
io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_list_t*
AutoscalingV2beta1API_listAutoscalingV2beta1NamespacedHorizontalPodAutoscaler(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified HorizontalPodAutoscaler
//
io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_t*
AutoscalingV2beta1API_patchAutoscalingV2beta1NamespacedHorizontalPodAutoscaler(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified HorizontalPodAutoscaler
//
io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_t*
AutoscalingV2beta1API_patchAutoscalingV2beta1NamespacedHorizontalPodAutoscalerStatus(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified HorizontalPodAutoscaler
//
io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_t*
AutoscalingV2beta1API_readAutoscalingV2beta1NamespacedHorizontalPodAutoscaler(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read status of the specified HorizontalPodAutoscaler
//
io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_t*
AutoscalingV2beta1API_readAutoscalingV2beta1NamespacedHorizontalPodAutoscalerStatus(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// replace the specified HorizontalPodAutoscaler
//
io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_t*
AutoscalingV2beta1API_replaceAutoscalingV2beta1NamespacedHorizontalPodAutoscaler(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified HorizontalPodAutoscaler
//
io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_t*
AutoscalingV2beta1API_replaceAutoscalingV2beta1NamespacedHorizontalPodAutoscalerStatus(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch individual changes to a list of HorizontalPodAutoscaler. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AutoscalingV2beta1API_watchAutoscalingV2beta1HorizontalPodAutoscalerListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind HorizontalPodAutoscaler. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AutoscalingV2beta1API_watchAutoscalingV2beta1NamespacedHorizontalPodAutoscaler(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of HorizontalPodAutoscaler. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AutoscalingV2beta1API_watchAutoscalingV2beta1NamespacedHorizontalPodAutoscalerList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


