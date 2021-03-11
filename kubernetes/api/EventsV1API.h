#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_events_v1_event.h"
#include "../model/io_k8s_api_events_v1_event_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create an Event
//
io_k8s_api_events_v1_event_t*
EventsV1API_createEventsV1NamespacedEvent(apiClient_t *apiClient, char * _namespace , io_k8s_api_events_v1_event_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete collection of Event
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
EventsV1API_deleteEventsV1CollectionNamespacedEvent(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete an Event
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
EventsV1API_deleteEventsV1NamespacedEvent(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
EventsV1API_getEventsV1APIResources(apiClient_t *apiClient);


// list or watch objects of kind Event
//
io_k8s_api_events_v1_event_list_t*
EventsV1API_listEventsV1EventForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Event
//
io_k8s_api_events_v1_event_list_t*
EventsV1API_listEventsV1NamespacedEvent(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified Event
//
io_k8s_api_events_v1_event_t*
EventsV1API_patchEventsV1NamespacedEvent(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified Event
//
io_k8s_api_events_v1_event_t*
EventsV1API_readEventsV1NamespacedEvent(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// replace the specified Event
//
io_k8s_api_events_v1_event_t*
EventsV1API_replaceEventsV1NamespacedEvent(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_events_v1_event_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch individual changes to a list of Event. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
EventsV1API_watchEventsV1EventListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind Event. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
EventsV1API_watchEventsV1NamespacedEvent(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Event. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
EventsV1API_watchEventsV1NamespacedEventList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


