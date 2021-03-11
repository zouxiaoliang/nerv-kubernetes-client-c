/*
 * io_k8s_api_admissionregistration_v1_webhook_client_config.h
 *
 * WebhookClientConfig contains the information to make a TLS connection with the webhook
 */

#ifndef _io_k8s_api_admissionregistration_v1_webhook_client_config_H_
#define _io_k8s_api_admissionregistration_v1_webhook_client_config_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_admissionregistration_v1_webhook_client_config_t io_k8s_api_admissionregistration_v1_webhook_client_config_t;

#include "io_k8s_api_admissionregistration_v1_service_reference.h"



typedef struct io_k8s_api_admissionregistration_v1_webhook_client_config_t {
    char ca_bundle; //Byte
    struct io_k8s_api_admissionregistration_v1_service_reference_t *service; //model
    char *url; // string

} io_k8s_api_admissionregistration_v1_webhook_client_config_t;

io_k8s_api_admissionregistration_v1_webhook_client_config_t *io_k8s_api_admissionregistration_v1_webhook_client_config_create(
    char ca_bundle,
    io_k8s_api_admissionregistration_v1_service_reference_t *service,
    char *url
);

void io_k8s_api_admissionregistration_v1_webhook_client_config_free(io_k8s_api_admissionregistration_v1_webhook_client_config_t *io_k8s_api_admissionregistration_v1_webhook_client_config);

io_k8s_api_admissionregistration_v1_webhook_client_config_t *io_k8s_api_admissionregistration_v1_webhook_client_config_parseFromJSON(cJSON *io_k8s_api_admissionregistration_v1_webhook_client_configJSON);

cJSON *io_k8s_api_admissionregistration_v1_webhook_client_config_convertToJSON(io_k8s_api_admissionregistration_v1_webhook_client_config_t *io_k8s_api_admissionregistration_v1_webhook_client_config);

#endif /* _io_k8s_api_admissionregistration_v1_webhook_client_config_H_ */

