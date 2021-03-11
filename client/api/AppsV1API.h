#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_apps_v1_controller_revision.h"
#include "../model/io_k8s_api_apps_v1_controller_revision_list.h"
#include "../model/io_k8s_api_apps_v1_daemon_set.h"
#include "../model/io_k8s_api_apps_v1_daemon_set_list.h"
#include "../model/io_k8s_api_apps_v1_deployment.h"
#include "../model/io_k8s_api_apps_v1_deployment_list.h"
#include "../model/io_k8s_api_apps_v1_replica_set.h"
#include "../model/io_k8s_api_apps_v1_replica_set_list.h"
#include "../model/io_k8s_api_apps_v1_stateful_set.h"
#include "../model/io_k8s_api_apps_v1_stateful_set_list.h"
#include "../model/io_k8s_api_autoscaling_v1_scale.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create a ControllerRevision
//
io_k8s_api_apps_v1_controller_revision_t*
AppsV1API_createAppsV1NamespacedControllerRevision(apiClient_t *apiClient, char * _namespace , io_k8s_api_apps_v1_controller_revision_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a DaemonSet
//
io_k8s_api_apps_v1_daemon_set_t*
AppsV1API_createAppsV1NamespacedDaemonSet(apiClient_t *apiClient, char * _namespace , io_k8s_api_apps_v1_daemon_set_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a Deployment
//
io_k8s_api_apps_v1_deployment_t*
AppsV1API_createAppsV1NamespacedDeployment(apiClient_t *apiClient, char * _namespace , io_k8s_api_apps_v1_deployment_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a ReplicaSet
//
io_k8s_api_apps_v1_replica_set_t*
AppsV1API_createAppsV1NamespacedReplicaSet(apiClient_t *apiClient, char * _namespace , io_k8s_api_apps_v1_replica_set_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a StatefulSet
//
io_k8s_api_apps_v1_stateful_set_t*
AppsV1API_createAppsV1NamespacedStatefulSet(apiClient_t *apiClient, char * _namespace , io_k8s_api_apps_v1_stateful_set_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete collection of ControllerRevision
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
AppsV1API_deleteAppsV1CollectionNamespacedControllerRevision(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of DaemonSet
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
AppsV1API_deleteAppsV1CollectionNamespacedDaemonSet(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of Deployment
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
AppsV1API_deleteAppsV1CollectionNamespacedDeployment(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of ReplicaSet
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
AppsV1API_deleteAppsV1CollectionNamespacedReplicaSet(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of StatefulSet
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
AppsV1API_deleteAppsV1CollectionNamespacedStatefulSet(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a ControllerRevision
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
AppsV1API_deleteAppsV1NamespacedControllerRevision(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a DaemonSet
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
AppsV1API_deleteAppsV1NamespacedDaemonSet(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a Deployment
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
AppsV1API_deleteAppsV1NamespacedDeployment(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a ReplicaSet
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
AppsV1API_deleteAppsV1NamespacedReplicaSet(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a StatefulSet
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
AppsV1API_deleteAppsV1NamespacedStatefulSet(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
AppsV1API_getAppsV1APIResources(apiClient_t *apiClient);


// list or watch objects of kind ControllerRevision
//
io_k8s_api_apps_v1_controller_revision_list_t*
AppsV1API_listAppsV1ControllerRevisionForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind DaemonSet
//
io_k8s_api_apps_v1_daemon_set_list_t*
AppsV1API_listAppsV1DaemonSetForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Deployment
//
io_k8s_api_apps_v1_deployment_list_t*
AppsV1API_listAppsV1DeploymentForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind ControllerRevision
//
io_k8s_api_apps_v1_controller_revision_list_t*
AppsV1API_listAppsV1NamespacedControllerRevision(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind DaemonSet
//
io_k8s_api_apps_v1_daemon_set_list_t*
AppsV1API_listAppsV1NamespacedDaemonSet(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind Deployment
//
io_k8s_api_apps_v1_deployment_list_t*
AppsV1API_listAppsV1NamespacedDeployment(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind ReplicaSet
//
io_k8s_api_apps_v1_replica_set_list_t*
AppsV1API_listAppsV1NamespacedReplicaSet(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind StatefulSet
//
io_k8s_api_apps_v1_stateful_set_list_t*
AppsV1API_listAppsV1NamespacedStatefulSet(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind ReplicaSet
//
io_k8s_api_apps_v1_replica_set_list_t*
AppsV1API_listAppsV1ReplicaSetForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind StatefulSet
//
io_k8s_api_apps_v1_stateful_set_list_t*
AppsV1API_listAppsV1StatefulSetForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified ControllerRevision
//
io_k8s_api_apps_v1_controller_revision_t*
AppsV1API_patchAppsV1NamespacedControllerRevision(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified DaemonSet
//
io_k8s_api_apps_v1_daemon_set_t*
AppsV1API_patchAppsV1NamespacedDaemonSet(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified DaemonSet
//
io_k8s_api_apps_v1_daemon_set_t*
AppsV1API_patchAppsV1NamespacedDaemonSetStatus(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified Deployment
//
io_k8s_api_apps_v1_deployment_t*
AppsV1API_patchAppsV1NamespacedDeployment(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update scale of the specified Deployment
//
io_k8s_api_autoscaling_v1_scale_t*
AppsV1API_patchAppsV1NamespacedDeploymentScale(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified Deployment
//
io_k8s_api_apps_v1_deployment_t*
AppsV1API_patchAppsV1NamespacedDeploymentStatus(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified ReplicaSet
//
io_k8s_api_apps_v1_replica_set_t*
AppsV1API_patchAppsV1NamespacedReplicaSet(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update scale of the specified ReplicaSet
//
io_k8s_api_autoscaling_v1_scale_t*
AppsV1API_patchAppsV1NamespacedReplicaSetScale(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified ReplicaSet
//
io_k8s_api_apps_v1_replica_set_t*
AppsV1API_patchAppsV1NamespacedReplicaSetStatus(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified StatefulSet
//
io_k8s_api_apps_v1_stateful_set_t*
AppsV1API_patchAppsV1NamespacedStatefulSet(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update scale of the specified StatefulSet
//
io_k8s_api_autoscaling_v1_scale_t*
AppsV1API_patchAppsV1NamespacedStatefulSetScale(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified StatefulSet
//
io_k8s_api_apps_v1_stateful_set_t*
AppsV1API_patchAppsV1NamespacedStatefulSetStatus(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified ControllerRevision
//
io_k8s_api_apps_v1_controller_revision_t*
AppsV1API_readAppsV1NamespacedControllerRevision(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified DaemonSet
//
io_k8s_api_apps_v1_daemon_set_t*
AppsV1API_readAppsV1NamespacedDaemonSet(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read status of the specified DaemonSet
//
io_k8s_api_apps_v1_daemon_set_t*
AppsV1API_readAppsV1NamespacedDaemonSetStatus(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified Deployment
//
io_k8s_api_apps_v1_deployment_t*
AppsV1API_readAppsV1NamespacedDeployment(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read scale of the specified Deployment
//
io_k8s_api_autoscaling_v1_scale_t*
AppsV1API_readAppsV1NamespacedDeploymentScale(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read status of the specified Deployment
//
io_k8s_api_apps_v1_deployment_t*
AppsV1API_readAppsV1NamespacedDeploymentStatus(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified ReplicaSet
//
io_k8s_api_apps_v1_replica_set_t*
AppsV1API_readAppsV1NamespacedReplicaSet(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read scale of the specified ReplicaSet
//
io_k8s_api_autoscaling_v1_scale_t*
AppsV1API_readAppsV1NamespacedReplicaSetScale(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read status of the specified ReplicaSet
//
io_k8s_api_apps_v1_replica_set_t*
AppsV1API_readAppsV1NamespacedReplicaSetStatus(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read the specified StatefulSet
//
io_k8s_api_apps_v1_stateful_set_t*
AppsV1API_readAppsV1NamespacedStatefulSet(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read scale of the specified StatefulSet
//
io_k8s_api_autoscaling_v1_scale_t*
AppsV1API_readAppsV1NamespacedStatefulSetScale(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read status of the specified StatefulSet
//
io_k8s_api_apps_v1_stateful_set_t*
AppsV1API_readAppsV1NamespacedStatefulSetStatus(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// replace the specified ControllerRevision
//
io_k8s_api_apps_v1_controller_revision_t*
AppsV1API_replaceAppsV1NamespacedControllerRevision(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_apps_v1_controller_revision_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified DaemonSet
//
io_k8s_api_apps_v1_daemon_set_t*
AppsV1API_replaceAppsV1NamespacedDaemonSet(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_apps_v1_daemon_set_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified DaemonSet
//
io_k8s_api_apps_v1_daemon_set_t*
AppsV1API_replaceAppsV1NamespacedDaemonSetStatus(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_apps_v1_daemon_set_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified Deployment
//
io_k8s_api_apps_v1_deployment_t*
AppsV1API_replaceAppsV1NamespacedDeployment(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_apps_v1_deployment_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace scale of the specified Deployment
//
io_k8s_api_autoscaling_v1_scale_t*
AppsV1API_replaceAppsV1NamespacedDeploymentScale(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_autoscaling_v1_scale_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified Deployment
//
io_k8s_api_apps_v1_deployment_t*
AppsV1API_replaceAppsV1NamespacedDeploymentStatus(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_apps_v1_deployment_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified ReplicaSet
//
io_k8s_api_apps_v1_replica_set_t*
AppsV1API_replaceAppsV1NamespacedReplicaSet(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_apps_v1_replica_set_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace scale of the specified ReplicaSet
//
io_k8s_api_autoscaling_v1_scale_t*
AppsV1API_replaceAppsV1NamespacedReplicaSetScale(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_autoscaling_v1_scale_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified ReplicaSet
//
io_k8s_api_apps_v1_replica_set_t*
AppsV1API_replaceAppsV1NamespacedReplicaSetStatus(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_apps_v1_replica_set_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified StatefulSet
//
io_k8s_api_apps_v1_stateful_set_t*
AppsV1API_replaceAppsV1NamespacedStatefulSet(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_apps_v1_stateful_set_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace scale of the specified StatefulSet
//
io_k8s_api_autoscaling_v1_scale_t*
AppsV1API_replaceAppsV1NamespacedStatefulSetScale(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_autoscaling_v1_scale_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified StatefulSet
//
io_k8s_api_apps_v1_stateful_set_t*
AppsV1API_replaceAppsV1NamespacedStatefulSetStatus(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_apps_v1_stateful_set_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch individual changes to a list of ControllerRevision. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AppsV1API_watchAppsV1ControllerRevisionListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of DaemonSet. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AppsV1API_watchAppsV1DaemonSetListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Deployment. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AppsV1API_watchAppsV1DeploymentListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind ControllerRevision. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AppsV1API_watchAppsV1NamespacedControllerRevision(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of ControllerRevision. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AppsV1API_watchAppsV1NamespacedControllerRevisionList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind DaemonSet. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AppsV1API_watchAppsV1NamespacedDaemonSet(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of DaemonSet. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AppsV1API_watchAppsV1NamespacedDaemonSetList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind Deployment. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AppsV1API_watchAppsV1NamespacedDeployment(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of Deployment. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AppsV1API_watchAppsV1NamespacedDeploymentList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind ReplicaSet. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AppsV1API_watchAppsV1NamespacedReplicaSet(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of ReplicaSet. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AppsV1API_watchAppsV1NamespacedReplicaSetList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind StatefulSet. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AppsV1API_watchAppsV1NamespacedStatefulSet(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of StatefulSet. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AppsV1API_watchAppsV1NamespacedStatefulSetList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of ReplicaSet. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AppsV1API_watchAppsV1ReplicaSetListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of StatefulSet. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AppsV1API_watchAppsV1StatefulSetListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


