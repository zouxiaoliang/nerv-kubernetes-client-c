/*
 * io_k8s_api_authorization_v1_self_subject_rules_review_spec.h
 *
 * 
 */

#ifndef _io_k8s_api_authorization_v1_self_subject_rules_review_spec_H_
#define _io_k8s_api_authorization_v1_self_subject_rules_review_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_authorization_v1_self_subject_rules_review_spec_t io_k8s_api_authorization_v1_self_subject_rules_review_spec_t;




typedef struct io_k8s_api_authorization_v1_self_subject_rules_review_spec_t {
    char *_namespace; // string

} io_k8s_api_authorization_v1_self_subject_rules_review_spec_t;

io_k8s_api_authorization_v1_self_subject_rules_review_spec_t *io_k8s_api_authorization_v1_self_subject_rules_review_spec_create(
    char *_namespace
);

void io_k8s_api_authorization_v1_self_subject_rules_review_spec_free(io_k8s_api_authorization_v1_self_subject_rules_review_spec_t *io_k8s_api_authorization_v1_self_subject_rules_review_spec);

io_k8s_api_authorization_v1_self_subject_rules_review_spec_t *io_k8s_api_authorization_v1_self_subject_rules_review_spec_parseFromJSON(cJSON *io_k8s_api_authorization_v1_self_subject_rules_review_specJSON);

cJSON *io_k8s_api_authorization_v1_self_subject_rules_review_spec_convertToJSON(io_k8s_api_authorization_v1_self_subject_rules_review_spec_t *io_k8s_api_authorization_v1_self_subject_rules_review_spec);

#endif /* _io_k8s_api_authorization_v1_self_subject_rules_review_spec_H_ */

