/*
 * io_k8s_api_flowcontrol_v1beta1_priority_level_configuration.h
 *
 * PriorityLevelConfiguration represents the configuration of a priority level.
 */

#ifndef _io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_H_
#define _io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_t io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_t;

#include "io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec.h"
#include "io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_t *spec; //model
    struct io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_t *status; //model

} io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_t;

io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_t *spec,
    io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_status_t *status
);

void io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_free(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration);

io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_priority_level_configurationJSON);

cJSON *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_convertToJSON(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration);

#endif /* _io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_H_ */

