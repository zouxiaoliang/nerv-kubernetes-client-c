/*
 * io_k8s_api_scheduling_v1alpha1_priority_class.h
 *
 * DEPRECATED - This group version of PriorityClass is deprecated by scheduling.k8s.io/v1/PriorityClass. PriorityClass defines mapping from a priority class name to the priority integer value. The value can be any valid integer.
 */

#ifndef _io_k8s_api_scheduling_v1alpha1_priority_class_H_
#define _io_k8s_api_scheduling_v1alpha1_priority_class_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_scheduling_v1alpha1_priority_class_t io_k8s_api_scheduling_v1alpha1_priority_class_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_scheduling_v1alpha1_priority_class_t {
    char *api_version; // string
    char *description; // string
    int global_default; //boolean
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    char *preemption_policy; // string
    int value; //numeric

} io_k8s_api_scheduling_v1alpha1_priority_class_t;

io_k8s_api_scheduling_v1alpha1_priority_class_t *io_k8s_api_scheduling_v1alpha1_priority_class_create(
    char *api_version,
    char *description,
    int global_default,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    char *preemption_policy,
    int value
);

void io_k8s_api_scheduling_v1alpha1_priority_class_free(io_k8s_api_scheduling_v1alpha1_priority_class_t *io_k8s_api_scheduling_v1alpha1_priority_class);

io_k8s_api_scheduling_v1alpha1_priority_class_t *io_k8s_api_scheduling_v1alpha1_priority_class_parseFromJSON(cJSON *io_k8s_api_scheduling_v1alpha1_priority_classJSON);

cJSON *io_k8s_api_scheduling_v1alpha1_priority_class_convertToJSON(io_k8s_api_scheduling_v1alpha1_priority_class_t *io_k8s_api_scheduling_v1alpha1_priority_class);

#endif /* _io_k8s_api_scheduling_v1alpha1_priority_class_H_ */

