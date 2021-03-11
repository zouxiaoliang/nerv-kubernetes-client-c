/*
 * io_k8s_api_authorization_v1_subject_access_review.h
 *
 * SubjectAccessReview checks whether or not a user or group can perform an action.
 */

#ifndef _io_k8s_api_authorization_v1_subject_access_review_H_
#define _io_k8s_api_authorization_v1_subject_access_review_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_authorization_v1_subject_access_review_t io_k8s_api_authorization_v1_subject_access_review_t;

#include "io_k8s_api_authorization_v1_subject_access_review_spec.h"
#include "io_k8s_api_authorization_v1_subject_access_review_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_authorization_v1_subject_access_review_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_authorization_v1_subject_access_review_spec_t *spec; //model
    struct io_k8s_api_authorization_v1_subject_access_review_status_t *status; //model

} io_k8s_api_authorization_v1_subject_access_review_t;

io_k8s_api_authorization_v1_subject_access_review_t *io_k8s_api_authorization_v1_subject_access_review_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_authorization_v1_subject_access_review_spec_t *spec,
    io_k8s_api_authorization_v1_subject_access_review_status_t *status
);

void io_k8s_api_authorization_v1_subject_access_review_free(io_k8s_api_authorization_v1_subject_access_review_t *io_k8s_api_authorization_v1_subject_access_review);

io_k8s_api_authorization_v1_subject_access_review_t *io_k8s_api_authorization_v1_subject_access_review_parseFromJSON(cJSON *io_k8s_api_authorization_v1_subject_access_reviewJSON);

cJSON *io_k8s_api_authorization_v1_subject_access_review_convertToJSON(io_k8s_api_authorization_v1_subject_access_review_t *io_k8s_api_authorization_v1_subject_access_review);

#endif /* _io_k8s_api_authorization_v1_subject_access_review_H_ */

