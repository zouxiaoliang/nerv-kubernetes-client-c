/*
 * io_k8s_api_flowcontrol_v1beta1_user_subject.h
 *
 * UserSubject holds detailed information for user-kind subject.
 */

#ifndef _io_k8s_api_flowcontrol_v1beta1_user_subject_H_
#define _io_k8s_api_flowcontrol_v1beta1_user_subject_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_flowcontrol_v1beta1_user_subject_t io_k8s_api_flowcontrol_v1beta1_user_subject_t;




typedef struct io_k8s_api_flowcontrol_v1beta1_user_subject_t {
    char *name; // string

} io_k8s_api_flowcontrol_v1beta1_user_subject_t;

io_k8s_api_flowcontrol_v1beta1_user_subject_t *io_k8s_api_flowcontrol_v1beta1_user_subject_create(
    char *name
);

void io_k8s_api_flowcontrol_v1beta1_user_subject_free(io_k8s_api_flowcontrol_v1beta1_user_subject_t *io_k8s_api_flowcontrol_v1beta1_user_subject);

io_k8s_api_flowcontrol_v1beta1_user_subject_t *io_k8s_api_flowcontrol_v1beta1_user_subject_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_user_subjectJSON);

cJSON *io_k8s_api_flowcontrol_v1beta1_user_subject_convertToJSON(io_k8s_api_flowcontrol_v1beta1_user_subject_t *io_k8s_api_flowcontrol_v1beta1_user_subject);

#endif /* _io_k8s_api_flowcontrol_v1beta1_user_subject_H_ */

