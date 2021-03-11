/*
 * io_k8s_api_certificates_v1_certificate_signing_request_status.h
 *
 * CertificateSigningRequestStatus contains conditions used to indicate approved/denied/failed status of the request, and the issued certificate.
 */

#ifndef _io_k8s_api_certificates_v1_certificate_signing_request_status_H_
#define _io_k8s_api_certificates_v1_certificate_signing_request_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_certificates_v1_certificate_signing_request_status_t io_k8s_api_certificates_v1_certificate_signing_request_status_t;

#include "io_k8s_api_certificates_v1_certificate_signing_request_condition.h"



typedef struct io_k8s_api_certificates_v1_certificate_signing_request_status_t {
    char certificate; //Byte
    list_t *conditions; //nonprimitive container

} io_k8s_api_certificates_v1_certificate_signing_request_status_t;

io_k8s_api_certificates_v1_certificate_signing_request_status_t *io_k8s_api_certificates_v1_certificate_signing_request_status_create(
    char certificate,
    list_t *conditions
);

void io_k8s_api_certificates_v1_certificate_signing_request_status_free(io_k8s_api_certificates_v1_certificate_signing_request_status_t *io_k8s_api_certificates_v1_certificate_signing_request_status);

io_k8s_api_certificates_v1_certificate_signing_request_status_t *io_k8s_api_certificates_v1_certificate_signing_request_status_parseFromJSON(cJSON *io_k8s_api_certificates_v1_certificate_signing_request_statusJSON);

cJSON *io_k8s_api_certificates_v1_certificate_signing_request_status_convertToJSON(io_k8s_api_certificates_v1_certificate_signing_request_status_t *io_k8s_api_certificates_v1_certificate_signing_request_status);

#endif /* _io_k8s_api_certificates_v1_certificate_signing_request_status_H_ */

