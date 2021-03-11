/*
 * io_k8s_api_certificates_v1_certificate_signing_request.h
 *
 * CertificateSigningRequest objects provide a mechanism to obtain x509 certificates by submitting a certificate signing request, and having it asynchronously approved and issued.  Kubelets use this API to obtain:  1. client certificates to authenticate to kube-apiserver (with the \&quot;kubernetes.io/kube-apiserver-client-kubelet\&quot; signerName).  2. serving certificates for TLS endpoints kube-apiserver can connect to securely (with the \&quot;kubernetes.io/kubelet-serving\&quot; signerName).  This API can be used to request client certificates to authenticate to kube-apiserver (with the \&quot;kubernetes.io/kube-apiserver-client\&quot; signerName), or to obtain certificates from custom non-Kubernetes signers.
 */

#ifndef _io_k8s_api_certificates_v1_certificate_signing_request_H_
#define _io_k8s_api_certificates_v1_certificate_signing_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_certificates_v1_certificate_signing_request_t io_k8s_api_certificates_v1_certificate_signing_request_t;

#include "io_k8s_api_certificates_v1_certificate_signing_request_spec.h"
#include "io_k8s_api_certificates_v1_certificate_signing_request_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_certificates_v1_certificate_signing_request_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_certificates_v1_certificate_signing_request_spec_t *spec; //model
    struct io_k8s_api_certificates_v1_certificate_signing_request_status_t *status; //model

} io_k8s_api_certificates_v1_certificate_signing_request_t;

io_k8s_api_certificates_v1_certificate_signing_request_t *io_k8s_api_certificates_v1_certificate_signing_request_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_certificates_v1_certificate_signing_request_spec_t *spec,
    io_k8s_api_certificates_v1_certificate_signing_request_status_t *status
);

void io_k8s_api_certificates_v1_certificate_signing_request_free(io_k8s_api_certificates_v1_certificate_signing_request_t *io_k8s_api_certificates_v1_certificate_signing_request);

io_k8s_api_certificates_v1_certificate_signing_request_t *io_k8s_api_certificates_v1_certificate_signing_request_parseFromJSON(cJSON *io_k8s_api_certificates_v1_certificate_signing_requestJSON);

cJSON *io_k8s_api_certificates_v1_certificate_signing_request_convertToJSON(io_k8s_api_certificates_v1_certificate_signing_request_t *io_k8s_api_certificates_v1_certificate_signing_request);

#endif /* _io_k8s_api_certificates_v1_certificate_signing_request_H_ */

