/*
 * io_k8s_api_admissionregistration_v1beta1_validating_webhook.h
 *
 * ValidatingWebhook describes an admission webhook and the resources and operations it applies to.
 */

#ifndef _io_k8s_api_admissionregistration_v1beta1_validating_webhook_H_
#define _io_k8s_api_admissionregistration_v1beta1_validating_webhook_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_admissionregistration_v1beta1_validating_webhook_t io_k8s_api_admissionregistration_v1beta1_validating_webhook_t;

#include "io_k8s_api_admissionregistration_v1beta1_rule_with_operations.h"
#include "io_k8s_api_admissionregistration_v1beta1_webhook_client_config.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.h"



typedef struct io_k8s_api_admissionregistration_v1beta1_validating_webhook_t {
    list_t *admission_review_versions; //primitive container
    struct io_k8s_api_admissionregistration_v1beta1_webhook_client_config_t *client_config; //model
    char *failure_policy; // string
    char *match_policy; // string
    char *name; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *namespace_selector; //model
    struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *object_selector; //model
    list_t *rules; //nonprimitive container
    char *side_effects; // string
    int timeout_seconds; //numeric

} io_k8s_api_admissionregistration_v1beta1_validating_webhook_t;

io_k8s_api_admissionregistration_v1beta1_validating_webhook_t *io_k8s_api_admissionregistration_v1beta1_validating_webhook_create(
    list_t *admission_review_versions,
    io_k8s_api_admissionregistration_v1beta1_webhook_client_config_t *client_config,
    char *failure_policy,
    char *match_policy,
    char *name,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *namespace_selector,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *object_selector,
    list_t *rules,
    char *side_effects,
    int timeout_seconds
);

void io_k8s_api_admissionregistration_v1beta1_validating_webhook_free(io_k8s_api_admissionregistration_v1beta1_validating_webhook_t *io_k8s_api_admissionregistration_v1beta1_validating_webhook);

io_k8s_api_admissionregistration_v1beta1_validating_webhook_t *io_k8s_api_admissionregistration_v1beta1_validating_webhook_parseFromJSON(cJSON *io_k8s_api_admissionregistration_v1beta1_validating_webhookJSON);

cJSON *io_k8s_api_admissionregistration_v1beta1_validating_webhook_convertToJSON(io_k8s_api_admissionregistration_v1beta1_validating_webhook_t *io_k8s_api_admissionregistration_v1beta1_validating_webhook);

#endif /* _io_k8s_api_admissionregistration_v1beta1_validating_webhook_H_ */

