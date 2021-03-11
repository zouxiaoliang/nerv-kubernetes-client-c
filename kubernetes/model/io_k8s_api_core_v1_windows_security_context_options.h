/*
 * io_k8s_api_core_v1_windows_security_context_options.h
 *
 * WindowsSecurityContextOptions contain Windows-specific options and credentials.
 */

#ifndef _io_k8s_api_core_v1_windows_security_context_options_H_
#define _io_k8s_api_core_v1_windows_security_context_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_windows_security_context_options_t io_k8s_api_core_v1_windows_security_context_options_t;




typedef struct io_k8s_api_core_v1_windows_security_context_options_t {
    char *gmsa_credential_spec; // string
    char *gmsa_credential_spec_name; // string
    char *run_as_user_name; // string

} io_k8s_api_core_v1_windows_security_context_options_t;

io_k8s_api_core_v1_windows_security_context_options_t *io_k8s_api_core_v1_windows_security_context_options_create(
    char *gmsa_credential_spec,
    char *gmsa_credential_spec_name,
    char *run_as_user_name
);

void io_k8s_api_core_v1_windows_security_context_options_free(io_k8s_api_core_v1_windows_security_context_options_t *io_k8s_api_core_v1_windows_security_context_options);

io_k8s_api_core_v1_windows_security_context_options_t *io_k8s_api_core_v1_windows_security_context_options_parseFromJSON(cJSON *io_k8s_api_core_v1_windows_security_context_optionsJSON);

cJSON *io_k8s_api_core_v1_windows_security_context_options_convertToJSON(io_k8s_api_core_v1_windows_security_context_options_t *io_k8s_api_core_v1_windows_security_context_options);

#endif /* _io_k8s_api_core_v1_windows_security_context_options_H_ */

