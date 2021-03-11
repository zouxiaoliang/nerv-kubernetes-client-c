/*
 * io_k8s_api_flowcontrol_v1beta1_subject.h
 *
 * Subject matches the originator of a request, as identified by the request authentication system. There are three ways of matching an originator; by user, group, or service account.
 */

#ifndef _io_k8s_api_flowcontrol_v1beta1_subject_H_
#define _io_k8s_api_flowcontrol_v1beta1_subject_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_flowcontrol_v1beta1_subject_t io_k8s_api_flowcontrol_v1beta1_subject_t;

#include "io_k8s_api_flowcontrol_v1beta1_group_subject.h"
#include "io_k8s_api_flowcontrol_v1beta1_service_account_subject.h"
#include "io_k8s_api_flowcontrol_v1beta1_user_subject.h"



typedef struct io_k8s_api_flowcontrol_v1beta1_subject_t {
    struct io_k8s_api_flowcontrol_v1beta1_group_subject_t *group; //model
    char *kind; // string
    struct io_k8s_api_flowcontrol_v1beta1_service_account_subject_t *service_account; //model
    struct io_k8s_api_flowcontrol_v1beta1_user_subject_t *user; //model

} io_k8s_api_flowcontrol_v1beta1_subject_t;

io_k8s_api_flowcontrol_v1beta1_subject_t *io_k8s_api_flowcontrol_v1beta1_subject_create(
    io_k8s_api_flowcontrol_v1beta1_group_subject_t *group,
    char *kind,
    io_k8s_api_flowcontrol_v1beta1_service_account_subject_t *service_account,
    io_k8s_api_flowcontrol_v1beta1_user_subject_t *user
);

void io_k8s_api_flowcontrol_v1beta1_subject_free(io_k8s_api_flowcontrol_v1beta1_subject_t *io_k8s_api_flowcontrol_v1beta1_subject);

io_k8s_api_flowcontrol_v1beta1_subject_t *io_k8s_api_flowcontrol_v1beta1_subject_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_subjectJSON);

cJSON *io_k8s_api_flowcontrol_v1beta1_subject_convertToJSON(io_k8s_api_flowcontrol_v1beta1_subject_t *io_k8s_api_flowcontrol_v1beta1_subject);

#endif /* _io_k8s_api_flowcontrol_v1beta1_subject_H_ */

