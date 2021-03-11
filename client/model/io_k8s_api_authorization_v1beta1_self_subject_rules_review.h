/*
 * io_k8s_api_authorization_v1beta1_self_subject_rules_review.h
 *
 * SelfSubjectRulesReview enumerates the set of actions the current user can perform within a namespace. The returned list of actions may be incomplete depending on the server&#39;s authorization mode, and any errors experienced during the evaluation. SelfSubjectRulesReview should be used by UIs to show/hide actions, or to quickly let an end user reason about their permissions. It should NOT Be used by external systems to drive authorization decisions as this raises confused deputy, cache lifetime/revocation, and correctness concerns. SubjectAccessReview, and LocalAccessReview are the correct way to defer authorization decisions to the API server.
 */

#ifndef _io_k8s_api_authorization_v1beta1_self_subject_rules_review_H_
#define _io_k8s_api_authorization_v1beta1_self_subject_rules_review_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_authorization_v1beta1_self_subject_rules_review_t io_k8s_api_authorization_v1beta1_self_subject_rules_review_t;

#include "io_k8s_api_authorization_v1beta1_self_subject_rules_review_spec.h"
#include "io_k8s_api_authorization_v1beta1_subject_rules_review_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_authorization_v1beta1_self_subject_rules_review_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_authorization_v1beta1_self_subject_rules_review_spec_t *spec; //model
    struct io_k8s_api_authorization_v1beta1_subject_rules_review_status_t *status; //model

} io_k8s_api_authorization_v1beta1_self_subject_rules_review_t;

io_k8s_api_authorization_v1beta1_self_subject_rules_review_t *io_k8s_api_authorization_v1beta1_self_subject_rules_review_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_authorization_v1beta1_self_subject_rules_review_spec_t *spec,
    io_k8s_api_authorization_v1beta1_subject_rules_review_status_t *status
);

void io_k8s_api_authorization_v1beta1_self_subject_rules_review_free(io_k8s_api_authorization_v1beta1_self_subject_rules_review_t *io_k8s_api_authorization_v1beta1_self_subject_rules_review);

io_k8s_api_authorization_v1beta1_self_subject_rules_review_t *io_k8s_api_authorization_v1beta1_self_subject_rules_review_parseFromJSON(cJSON *io_k8s_api_authorization_v1beta1_self_subject_rules_reviewJSON);

cJSON *io_k8s_api_authorization_v1beta1_self_subject_rules_review_convertToJSON(io_k8s_api_authorization_v1beta1_self_subject_rules_review_t *io_k8s_api_authorization_v1beta1_self_subject_rules_review);

#endif /* _io_k8s_api_authorization_v1beta1_self_subject_rules_review_H_ */

