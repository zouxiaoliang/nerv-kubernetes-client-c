#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_batch_v1beta1_cron_job.h"
#include "../model/io_k8s_api_batch_v1beta1_cron_job_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create a CronJob
//
io_k8s_api_batch_v1beta1_cron_job_t*
BatchV1beta1API_createBatchV1beta1NamespacedCronJob(apiClient_t *apiClient, char * _namespace , io_k8s_api_batch_v1beta1_cron_job_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete collection of CronJob
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
BatchV1beta1API_deleteBatchV1beta1CollectionNamespacedCronJob(apiClient_t *apiClient, char * _namespace , char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a CronJob
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
BatchV1beta1API_deleteBatchV1beta1NamespacedCronJob(apiClient_t *apiClient, char * name , char * _namespace , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
BatchV1beta1API_getBatchV1beta1APIResources(apiClient_t *apiClient);


// list or watch objects of kind CronJob
//
io_k8s_api_batch_v1beta1_cron_job_list_t*
BatchV1beta1API_listBatchV1beta1CronJobForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind CronJob
//
io_k8s_api_batch_v1beta1_cron_job_list_t*
BatchV1beta1API_listBatchV1beta1NamespacedCronJob(apiClient_t *apiClient, char * _namespace , char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified CronJob
//
io_k8s_api_batch_v1beta1_cron_job_t*
BatchV1beta1API_patchBatchV1beta1NamespacedCronJob(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified CronJob
//
io_k8s_api_batch_v1beta1_cron_job_t*
BatchV1beta1API_patchBatchV1beta1NamespacedCronJobStatus(apiClient_t *apiClient, char * name , char * _namespace , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified CronJob
//
io_k8s_api_batch_v1beta1_cron_job_t*
BatchV1beta1API_readBatchV1beta1NamespacedCronJob(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// read status of the specified CronJob
//
io_k8s_api_batch_v1beta1_cron_job_t*
BatchV1beta1API_readBatchV1beta1NamespacedCronJobStatus(apiClient_t *apiClient, char * name , char * _namespace , char * pretty );


// replace the specified CronJob
//
io_k8s_api_batch_v1beta1_cron_job_t*
BatchV1beta1API_replaceBatchV1beta1NamespacedCronJob(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_batch_v1beta1_cron_job_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified CronJob
//
io_k8s_api_batch_v1beta1_cron_job_t*
BatchV1beta1API_replaceBatchV1beta1NamespacedCronJobStatus(apiClient_t *apiClient, char * name , char * _namespace , io_k8s_api_batch_v1beta1_cron_job_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch individual changes to a list of CronJob. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
BatchV1beta1API_watchBatchV1beta1CronJobListForAllNamespaces(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind CronJob. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
BatchV1beta1API_watchBatchV1beta1NamespacedCronJob(apiClient_t *apiClient, char * name , char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of CronJob. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
BatchV1beta1API_watchBatchV1beta1NamespacedCronJobList(apiClient_t *apiClient, char * _namespace , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


