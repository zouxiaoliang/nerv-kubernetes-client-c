/*
 * io_k8s_api_authorization_v1_subject_access_review_spec.h
 *
 * SubjectAccessReviewSpec is a description of the access request.  Exactly one of ResourceAuthorizationAttributes and NonResourceAuthorizationAttributes must be set
 */

#ifndef _io_k8s_api_authorization_v1_subject_access_review_spec_H_
#define _io_k8s_api_authorization_v1_subject_access_review_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_authorization_v1_subject_access_review_spec_t io_k8s_api_authorization_v1_subject_access_review_spec_t;

#include "io_k8s_api_authorization_v1_non_resource_attributes.h"
#include "io_k8s_api_authorization_v1_resource_attributes.h"



typedef struct io_k8s_api_authorization_v1_subject_access_review_spec_t {
    list_t* extra; //map
    list_t *groups; //primitive container
    struct io_k8s_api_authorization_v1_non_resource_attributes_t *non_resource_attributes; //model
    struct io_k8s_api_authorization_v1_resource_attributes_t *resource_attributes; //model
    char *uid; // string
    char *user; // string

} io_k8s_api_authorization_v1_subject_access_review_spec_t;

io_k8s_api_authorization_v1_subject_access_review_spec_t *io_k8s_api_authorization_v1_subject_access_review_spec_create(
    list_t* extra,
    list_t *groups,
    io_k8s_api_authorization_v1_non_resource_attributes_t *non_resource_attributes,
    io_k8s_api_authorization_v1_resource_attributes_t *resource_attributes,
    char *uid,
    char *user
);

void io_k8s_api_authorization_v1_subject_access_review_spec_free(io_k8s_api_authorization_v1_subject_access_review_spec_t *io_k8s_api_authorization_v1_subject_access_review_spec);

io_k8s_api_authorization_v1_subject_access_review_spec_t *io_k8s_api_authorization_v1_subject_access_review_spec_parseFromJSON(cJSON *io_k8s_api_authorization_v1_subject_access_review_specJSON);

cJSON *io_k8s_api_authorization_v1_subject_access_review_spec_convertToJSON(io_k8s_api_authorization_v1_subject_access_review_spec_t *io_k8s_api_authorization_v1_subject_access_review_spec);

#endif /* _io_k8s_api_authorization_v1_subject_access_review_spec_H_ */

