/*
 * io_k8s_api_apps_v1_controller_revision.h
 *
 * ControllerRevision implements an immutable snapshot of state data. Clients are responsible for serializing and deserializing the objects that contain their internal state. Once a ControllerRevision has been successfully created, it can not be updated. The API Server will fail validation of all requests that attempt to mutate the Data field. ControllerRevisions may, however, be deleted. Note that, due to its use by both the DaemonSet and StatefulSet controllers for update and rollback, this object is beta. However, it may be subject to name and representation changes in future releases, and clients should not depend on its stability. It is primarily for internal use by controllers.
 */

#ifndef _io_k8s_api_apps_v1_controller_revision_H_
#define _io_k8s_api_apps_v1_controller_revision_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_apps_v1_controller_revision_t io_k8s_api_apps_v1_controller_revision_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"
#include "object.h"



typedef struct io_k8s_api_apps_v1_controller_revision_t {
    char *api_version; // string
    object_t *data; //object
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    long revision; //numeric

} io_k8s_api_apps_v1_controller_revision_t;

io_k8s_api_apps_v1_controller_revision_t *io_k8s_api_apps_v1_controller_revision_create(
    char *api_version,
    object_t *data,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    long revision
);

void io_k8s_api_apps_v1_controller_revision_free(io_k8s_api_apps_v1_controller_revision_t *io_k8s_api_apps_v1_controller_revision);

io_k8s_api_apps_v1_controller_revision_t *io_k8s_api_apps_v1_controller_revision_parseFromJSON(cJSON *io_k8s_api_apps_v1_controller_revisionJSON);

cJSON *io_k8s_api_apps_v1_controller_revision_convertToJSON(io_k8s_api_apps_v1_controller_revision_t *io_k8s_api_apps_v1_controller_revision);

#endif /* _io_k8s_api_apps_v1_controller_revision_H_ */

