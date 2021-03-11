#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_authorization_v1beta1_local_subject_access_review.h"
#include "../model/io_k8s_api_authorization_v1beta1_self_subject_access_review.h"
#include "../model/io_k8s_api_authorization_v1beta1_self_subject_rules_review.h"
#include "../model/io_k8s_api_authorization_v1beta1_subject_access_review.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"


// create a LocalSubjectAccessReview
//
io_k8s_api_authorization_v1beta1_local_subject_access_review_t*
AuthorizationV1beta1API_createAuthorizationV1beta1NamespacedLocalSubjectAccessReview(apiClient_t *apiClient, char * _namespace , io_k8s_api_authorization_v1beta1_local_subject_access_review_t * body , char * dryRun , char * fieldManager , char * pretty );


// create a SelfSubjectAccessReview
//
io_k8s_api_authorization_v1beta1_self_subject_access_review_t*
AuthorizationV1beta1API_createAuthorizationV1beta1SelfSubjectAccessReview(apiClient_t *apiClient, io_k8s_api_authorization_v1beta1_self_subject_access_review_t * body , char * dryRun , char * fieldManager , char * pretty );


// create a SelfSubjectRulesReview
//
io_k8s_api_authorization_v1beta1_self_subject_rules_review_t*
AuthorizationV1beta1API_createAuthorizationV1beta1SelfSubjectRulesReview(apiClient_t *apiClient, io_k8s_api_authorization_v1beta1_self_subject_rules_review_t * body , char * dryRun , char * fieldManager , char * pretty );


// create a SubjectAccessReview
//
io_k8s_api_authorization_v1beta1_subject_access_review_t*
AuthorizationV1beta1API_createAuthorizationV1beta1SubjectAccessReview(apiClient_t *apiClient, io_k8s_api_authorization_v1beta1_subject_access_review_t * body , char * dryRun , char * fieldManager , char * pretty );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
AuthorizationV1beta1API_getAuthorizationV1beta1APIResources(apiClient_t *apiClient);


