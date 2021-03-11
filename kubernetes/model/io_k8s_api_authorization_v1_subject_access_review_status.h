/*
 * io_k8s_api_authorization_v1_subject_access_review_status.h
 *
 * SubjectAccessReviewStatus
 */

#ifndef _io_k8s_api_authorization_v1_subject_access_review_status_H_
#define _io_k8s_api_authorization_v1_subject_access_review_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_authorization_v1_subject_access_review_status_t io_k8s_api_authorization_v1_subject_access_review_status_t;




typedef struct io_k8s_api_authorization_v1_subject_access_review_status_t {
    int allowed; //boolean
    int denied; //boolean
    char *evaluation_error; // string
    char *reason; // string

} io_k8s_api_authorization_v1_subject_access_review_status_t;

io_k8s_api_authorization_v1_subject_access_review_status_t *io_k8s_api_authorization_v1_subject_access_review_status_create(
    int allowed,
    int denied,
    char *evaluation_error,
    char *reason
);

void io_k8s_api_authorization_v1_subject_access_review_status_free(io_k8s_api_authorization_v1_subject_access_review_status_t *io_k8s_api_authorization_v1_subject_access_review_status);

io_k8s_api_authorization_v1_subject_access_review_status_t *io_k8s_api_authorization_v1_subject_access_review_status_parseFromJSON(cJSON *io_k8s_api_authorization_v1_subject_access_review_statusJSON);

cJSON *io_k8s_api_authorization_v1_subject_access_review_status_convertToJSON(io_k8s_api_authorization_v1_subject_access_review_status_t *io_k8s_api_authorization_v1_subject_access_review_status);

#endif /* _io_k8s_api_authorization_v1_subject_access_review_status_H_ */

