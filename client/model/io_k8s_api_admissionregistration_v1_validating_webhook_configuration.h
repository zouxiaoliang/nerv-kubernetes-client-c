/*
 * io_k8s_api_admissionregistration_v1_validating_webhook_configuration.h
 *
 * ValidatingWebhookConfiguration describes the configuration of and admission webhook that accept or reject and object without changing it.
 */

#ifndef _io_k8s_api_admissionregistration_v1_validating_webhook_configuration_H_
#define _io_k8s_api_admissionregistration_v1_validating_webhook_configuration_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t;

#include "io_k8s_api_admissionregistration_v1_validating_webhook.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    list_t *webhooks; //nonprimitive container

} io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t;

io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t *io_k8s_api_admissionregistration_v1_validating_webhook_configuration_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    list_t *webhooks
);

void io_k8s_api_admissionregistration_v1_validating_webhook_configuration_free(io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t *io_k8s_api_admissionregistration_v1_validating_webhook_configuration);

io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t *io_k8s_api_admissionregistration_v1_validating_webhook_configuration_parseFromJSON(cJSON *io_k8s_api_admissionregistration_v1_validating_webhook_configurationJSON);

cJSON *io_k8s_api_admissionregistration_v1_validating_webhook_configuration_convertToJSON(io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t *io_k8s_api_admissionregistration_v1_validating_webhook_configuration);

#endif /* _io_k8s_api_admissionregistration_v1_validating_webhook_configuration_H_ */

