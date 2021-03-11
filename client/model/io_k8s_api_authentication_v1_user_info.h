/*
 * io_k8s_api_authentication_v1_user_info.h
 *
 * UserInfo holds the information about the user needed to implement the user.Info interface.
 */

#ifndef _io_k8s_api_authentication_v1_user_info_H_
#define _io_k8s_api_authentication_v1_user_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_authentication_v1_user_info_t io_k8s_api_authentication_v1_user_info_t;




typedef struct io_k8s_api_authentication_v1_user_info_t {
    list_t* extra; //map
    list_t *groups; //primitive container
    char *uid; // string
    char *username; // string

} io_k8s_api_authentication_v1_user_info_t;

io_k8s_api_authentication_v1_user_info_t *io_k8s_api_authentication_v1_user_info_create(
    list_t* extra,
    list_t *groups,
    char *uid,
    char *username
);

void io_k8s_api_authentication_v1_user_info_free(io_k8s_api_authentication_v1_user_info_t *io_k8s_api_authentication_v1_user_info);

io_k8s_api_authentication_v1_user_info_t *io_k8s_api_authentication_v1_user_info_parseFromJSON(cJSON *io_k8s_api_authentication_v1_user_infoJSON);

cJSON *io_k8s_api_authentication_v1_user_info_convertToJSON(io_k8s_api_authentication_v1_user_info_t *io_k8s_api_authentication_v1_user_info);

#endif /* _io_k8s_api_authentication_v1_user_info_H_ */

