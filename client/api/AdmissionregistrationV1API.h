#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_admissionregistration_v1_mutating_webhook_configuration.h"
#include "../model/io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_list.h"
#include "../model/io_k8s_api_admissionregistration_v1_validating_webhook_configuration.h"
#include "../model/io_k8s_api_admissionregistration_v1_validating_webhook_configuration_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create a MutatingWebhookConfiguration
//
io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_t*
AdmissionregistrationV1API_createAdmissionregistrationV1MutatingWebhookConfiguration(apiClient_t *apiClient, io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_t * body , char * pretty , char * dryRun , char * fieldManager );


// create a ValidatingWebhookConfiguration
//
io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t*
AdmissionregistrationV1API_createAdmissionregistrationV1ValidatingWebhookConfiguration(apiClient_t *apiClient, io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete collection of MutatingWebhookConfiguration
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
AdmissionregistrationV1API_deleteAdmissionregistrationV1CollectionMutatingWebhookConfiguration(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of ValidatingWebhookConfiguration
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
AdmissionregistrationV1API_deleteAdmissionregistrationV1CollectionValidatingWebhookConfiguration(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a MutatingWebhookConfiguration
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
AdmissionregistrationV1API_deleteAdmissionregistrationV1MutatingWebhookConfiguration(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete a ValidatingWebhookConfiguration
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
AdmissionregistrationV1API_deleteAdmissionregistrationV1ValidatingWebhookConfiguration(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
AdmissionregistrationV1API_getAdmissionregistrationV1APIResources(apiClient_t *apiClient);


// list or watch objects of kind MutatingWebhookConfiguration
//
io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_list_t*
AdmissionregistrationV1API_listAdmissionregistrationV1MutatingWebhookConfiguration(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// list or watch objects of kind ValidatingWebhookConfiguration
//
io_k8s_api_admissionregistration_v1_validating_webhook_configuration_list_t*
AdmissionregistrationV1API_listAdmissionregistrationV1ValidatingWebhookConfiguration(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified MutatingWebhookConfiguration
//
io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_t*
AdmissionregistrationV1API_patchAdmissionregistrationV1MutatingWebhookConfiguration(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update the specified ValidatingWebhookConfiguration
//
io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t*
AdmissionregistrationV1API_patchAdmissionregistrationV1ValidatingWebhookConfiguration(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified MutatingWebhookConfiguration
//
io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_t*
AdmissionregistrationV1API_readAdmissionregistrationV1MutatingWebhookConfiguration(apiClient_t *apiClient, char * name , char * pretty );


// read the specified ValidatingWebhookConfiguration
//
io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t*
AdmissionregistrationV1API_readAdmissionregistrationV1ValidatingWebhookConfiguration(apiClient_t *apiClient, char * name , char * pretty );


// replace the specified MutatingWebhookConfiguration
//
io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_t*
AdmissionregistrationV1API_replaceAdmissionregistrationV1MutatingWebhookConfiguration(apiClient_t *apiClient, char * name , io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace the specified ValidatingWebhookConfiguration
//
io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t*
AdmissionregistrationV1API_replaceAdmissionregistrationV1ValidatingWebhookConfiguration(apiClient_t *apiClient, char * name , io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch changes to an object of kind MutatingWebhookConfiguration. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AdmissionregistrationV1API_watchAdmissionregistrationV1MutatingWebhookConfiguration(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of MutatingWebhookConfiguration. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AdmissionregistrationV1API_watchAdmissionregistrationV1MutatingWebhookConfigurationList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch changes to an object of kind ValidatingWebhookConfiguration. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AdmissionregistrationV1API_watchAdmissionregistrationV1ValidatingWebhookConfiguration(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of ValidatingWebhookConfiguration. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
AdmissionregistrationV1API_watchAdmissionregistrationV1ValidatingWebhookConfigurationList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


