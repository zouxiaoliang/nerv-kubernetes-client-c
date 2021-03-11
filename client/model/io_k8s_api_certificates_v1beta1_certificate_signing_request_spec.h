/*
 * io_k8s_api_certificates_v1beta1_certificate_signing_request_spec.h
 *
 * This information is immutable after the request is created. Only the Request and Usages fields can be set on creation, other fields are derived by Kubernetes and cannot be modified by users.
 */

#ifndef _io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_H_
#define _io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_t io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_t;




typedef struct io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_t {
    list_t* extra; //map
    list_t *groups; //primitive container
    char request; //Byte
    char *signer_name; // string
    char *uid; // string
    list_t *usages; //primitive container
    char *username; // string

} io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_t;

io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_t *io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_create(
    list_t* extra,
    list_t *groups,
    char request,
    char *signer_name,
    char *uid,
    list_t *usages,
    char *username
);

void io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_free(io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_t *io_k8s_api_certificates_v1beta1_certificate_signing_request_spec);

io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_t *io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_parseFromJSON(cJSON *io_k8s_api_certificates_v1beta1_certificate_signing_request_specJSON);

cJSON *io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_convertToJSON(io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_t *io_k8s_api_certificates_v1beta1_certificate_signing_request_spec);

#endif /* _io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_H_ */

