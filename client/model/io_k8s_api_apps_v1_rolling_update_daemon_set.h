/*
 * io_k8s_api_apps_v1_rolling_update_daemon_set.h
 *
 * Spec to control the desired behavior of daemon set rolling update.
 */

#ifndef _io_k8s_api_apps_v1_rolling_update_daemon_set_H_
#define _io_k8s_api_apps_v1_rolling_update_daemon_set_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_apps_v1_rolling_update_daemon_set_t io_k8s_api_apps_v1_rolling_update_daemon_set_t;




typedef struct io_k8s_api_apps_v1_rolling_update_daemon_set_t {
    char *max_surge; // string
    char *max_unavailable; // string

} io_k8s_api_apps_v1_rolling_update_daemon_set_t;

io_k8s_api_apps_v1_rolling_update_daemon_set_t *io_k8s_api_apps_v1_rolling_update_daemon_set_create(
    char *max_surge,
    char *max_unavailable
);

void io_k8s_api_apps_v1_rolling_update_daemon_set_free(io_k8s_api_apps_v1_rolling_update_daemon_set_t *io_k8s_api_apps_v1_rolling_update_daemon_set);

io_k8s_api_apps_v1_rolling_update_daemon_set_t *io_k8s_api_apps_v1_rolling_update_daemon_set_parseFromJSON(cJSON *io_k8s_api_apps_v1_rolling_update_daemon_setJSON);

cJSON *io_k8s_api_apps_v1_rolling_update_daemon_set_convertToJSON(io_k8s_api_apps_v1_rolling_update_daemon_set_t *io_k8s_api_apps_v1_rolling_update_daemon_set);

#endif /* _io_k8s_api_apps_v1_rolling_update_daemon_set_H_ */

