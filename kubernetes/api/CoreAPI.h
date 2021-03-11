#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_versions.h"


// get available API versions
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t*
CoreAPI_getCoreAPIVersions(apiClient_t *apiClient);


