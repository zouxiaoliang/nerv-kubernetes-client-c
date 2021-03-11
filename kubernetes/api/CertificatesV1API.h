#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_certificates_v1_certificate_signing_request.h"
#include "../model/io_k8s_api_certificates_v1_certificate_signing_request_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"


// create a CertificateSigningRequest
//
io_k8s_api_certificates_v1_certificate_signing_request_t*
CertificatesV1API_createCertificatesV1CertificateSigningRequest(apiClient_t *apiClient, io_k8s_api_certificates_v1_certificate_signing_request_t * body , char * pretty , char * dryRun , char * fieldManager );


// delete a CertificateSigningRequest
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CertificatesV1API_deleteCertificatesV1CertificateSigningRequest(apiClient_t *apiClient, char * name , char * pretty , char * dryRun , int gracePeriodSeconds , int orphanDependents , char * propagationPolicy , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// delete collection of CertificateSigningRequest
//
io_k8s_apimachinery_pkg_apis_meta_v1_status_t*
CertificatesV1API_deleteCertificatesV1CollectionCertificateSigningRequest(apiClient_t *apiClient, char * pretty , char * _continue , char * dryRun , char * fieldSelector , int gracePeriodSeconds , char * labelSelector , int limit , int orphanDependents , char * propagationPolicy , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t * body );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
CertificatesV1API_getCertificatesV1APIResources(apiClient_t *apiClient);


// list or watch objects of kind CertificateSigningRequest
//
io_k8s_api_certificates_v1_certificate_signing_request_list_t*
CertificatesV1API_listCertificatesV1CertificateSigningRequest(apiClient_t *apiClient, char * pretty , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// partially update the specified CertificateSigningRequest
//
io_k8s_api_certificates_v1_certificate_signing_request_t*
CertificatesV1API_patchCertificatesV1CertificateSigningRequest(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update approval of the specified CertificateSigningRequest
//
io_k8s_api_certificates_v1_certificate_signing_request_t*
CertificatesV1API_patchCertificatesV1CertificateSigningRequestApproval(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// partially update status of the specified CertificateSigningRequest
//
io_k8s_api_certificates_v1_certificate_signing_request_t*
CertificatesV1API_patchCertificatesV1CertificateSigningRequestStatus(apiClient_t *apiClient, char * name , object_t * body , char * pretty , char * dryRun , char * fieldManager , int force );


// read the specified CertificateSigningRequest
//
io_k8s_api_certificates_v1_certificate_signing_request_t*
CertificatesV1API_readCertificatesV1CertificateSigningRequest(apiClient_t *apiClient, char * name , char * pretty );


// read approval of the specified CertificateSigningRequest
//
io_k8s_api_certificates_v1_certificate_signing_request_t*
CertificatesV1API_readCertificatesV1CertificateSigningRequestApproval(apiClient_t *apiClient, char * name , char * pretty );


// read status of the specified CertificateSigningRequest
//
io_k8s_api_certificates_v1_certificate_signing_request_t*
CertificatesV1API_readCertificatesV1CertificateSigningRequestStatus(apiClient_t *apiClient, char * name , char * pretty );


// replace the specified CertificateSigningRequest
//
io_k8s_api_certificates_v1_certificate_signing_request_t*
CertificatesV1API_replaceCertificatesV1CertificateSigningRequest(apiClient_t *apiClient, char * name , io_k8s_api_certificates_v1_certificate_signing_request_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace approval of the specified CertificateSigningRequest
//
io_k8s_api_certificates_v1_certificate_signing_request_t*
CertificatesV1API_replaceCertificatesV1CertificateSigningRequestApproval(apiClient_t *apiClient, char * name , io_k8s_api_certificates_v1_certificate_signing_request_t * body , char * pretty , char * dryRun , char * fieldManager );


// replace status of the specified CertificateSigningRequest
//
io_k8s_api_certificates_v1_certificate_signing_request_t*
CertificatesV1API_replaceCertificatesV1CertificateSigningRequestStatus(apiClient_t *apiClient, char * name , io_k8s_api_certificates_v1_certificate_signing_request_t * body , char * pretty , char * dryRun , char * fieldManager );


// watch changes to an object of kind CertificateSigningRequest. deprecated: use the 'watch' parameter with a list operation instead, filtered to a single item with the 'fieldSelector' parameter.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CertificatesV1API_watchCertificatesV1CertificateSigningRequest(apiClient_t *apiClient, char * name , int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


// watch individual changes to a list of CertificateSigningRequest. deprecated: use the 'watch' parameter with a list operation instead.
//
io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t*
CertificatesV1API_watchCertificatesV1CertificateSigningRequestList(apiClient_t *apiClient, int allowWatchBookmarks , char * _continue , char * fieldSelector , char * labelSelector , int limit , char * pretty , char * resourceVersion , char * resourceVersionMatch , int timeoutSeconds , int watch );


