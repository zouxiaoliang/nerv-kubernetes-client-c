/*
 * io_k8s_api_flowcontrol_v1beta1_service_account_subject.h
 *
 * ServiceAccountSubject holds detailed information for service-account-kind subject.
 */

#ifndef _io_k8s_api_flowcontrol_v1beta1_service_account_subject_H_
#define _io_k8s_api_flowcontrol_v1beta1_service_account_subject_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_flowcontrol_v1beta1_service_account_subject_t io_k8s_api_flowcontrol_v1beta1_service_account_subject_t;




typedef struct io_k8s_api_flowcontrol_v1beta1_service_account_subject_t {
    char *name; // string
    char *_namespace; // string

} io_k8s_api_flowcontrol_v1beta1_service_account_subject_t;

io_k8s_api_flowcontrol_v1beta1_service_account_subject_t *io_k8s_api_flowcontrol_v1beta1_service_account_subject_create(
    char *name,
    char *_namespace
);

void io_k8s_api_flowcontrol_v1beta1_service_account_subject_free(io_k8s_api_flowcontrol_v1beta1_service_account_subject_t *io_k8s_api_flowcontrol_v1beta1_service_account_subject);

io_k8s_api_flowcontrol_v1beta1_service_account_subject_t *io_k8s_api_flowcontrol_v1beta1_service_account_subject_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_service_account_subjectJSON);

cJSON *io_k8s_api_flowcontrol_v1beta1_service_account_subject_convertToJSON(io_k8s_api_flowcontrol_v1beta1_service_account_subject_t *io_k8s_api_flowcontrol_v1beta1_service_account_subject);

#endif /* _io_k8s_api_flowcontrol_v1beta1_service_account_subject_H_ */

