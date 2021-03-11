/*
 * io_k8s_api_rbac_v1alpha1_subject.h
 *
 * Subject contains a reference to the object or user identities a role binding applies to.  This can either hold a direct API object reference, or a value for non-objects such as user and group names.
 */

#ifndef _io_k8s_api_rbac_v1alpha1_subject_H_
#define _io_k8s_api_rbac_v1alpha1_subject_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_rbac_v1alpha1_subject_t io_k8s_api_rbac_v1alpha1_subject_t;




typedef struct io_k8s_api_rbac_v1alpha1_subject_t {
    char *api_version; // string
    char *kind; // string
    char *name; // string
    char *_namespace; // string

} io_k8s_api_rbac_v1alpha1_subject_t;

io_k8s_api_rbac_v1alpha1_subject_t *io_k8s_api_rbac_v1alpha1_subject_create(
    char *api_version,
    char *kind,
    char *name,
    char *_namespace
);

void io_k8s_api_rbac_v1alpha1_subject_free(io_k8s_api_rbac_v1alpha1_subject_t *io_k8s_api_rbac_v1alpha1_subject);

io_k8s_api_rbac_v1alpha1_subject_t *io_k8s_api_rbac_v1alpha1_subject_parseFromJSON(cJSON *io_k8s_api_rbac_v1alpha1_subjectJSON);

cJSON *io_k8s_api_rbac_v1alpha1_subject_convertToJSON(io_k8s_api_rbac_v1alpha1_subject_t *io_k8s_api_rbac_v1alpha1_subject);

#endif /* _io_k8s_api_rbac_v1alpha1_subject_H_ */

