#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_api_authentication_v1_token_review.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"


// create a TokenReview
//
io_k8s_api_authentication_v1_token_review_t*
AuthenticationV1API_createAuthenticationV1TokenReview(apiClient_t *apiClient, io_k8s_api_authentication_v1_token_review_t * body , char * dryRun , char * fieldManager , char * pretty );


// get available resources
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t*
AuthenticationV1API_getAuthenticationV1APIResources(apiClient_t *apiClient);


