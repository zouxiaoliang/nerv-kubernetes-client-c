/*
 * io_k8s_api_core_v1_azure_file_volume_source.h
 *
 * AzureFile represents an Azure File Service mount on the host and bind mount to the pod.
 */

#ifndef _io_k8s_api_core_v1_azure_file_volume_source_H_
#define _io_k8s_api_core_v1_azure_file_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_azure_file_volume_source_t io_k8s_api_core_v1_azure_file_volume_source_t;




typedef struct io_k8s_api_core_v1_azure_file_volume_source_t {
    int read_only; //boolean
    char *secret_name; // string
    char *share_name; // string

} io_k8s_api_core_v1_azure_file_volume_source_t;

io_k8s_api_core_v1_azure_file_volume_source_t *io_k8s_api_core_v1_azure_file_volume_source_create(
    int read_only,
    char *secret_name,
    char *share_name
);

void io_k8s_api_core_v1_azure_file_volume_source_free(io_k8s_api_core_v1_azure_file_volume_source_t *io_k8s_api_core_v1_azure_file_volume_source);

io_k8s_api_core_v1_azure_file_volume_source_t *io_k8s_api_core_v1_azure_file_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_azure_file_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_azure_file_volume_source_convertToJSON(io_k8s_api_core_v1_azure_file_volume_source_t *io_k8s_api_core_v1_azure_file_volume_source);

#endif /* _io_k8s_api_core_v1_azure_file_volume_source_H_ */

