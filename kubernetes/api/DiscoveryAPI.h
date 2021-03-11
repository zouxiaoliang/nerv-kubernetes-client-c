#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_group.h"


// get information of a group
//
io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t*
DiscoveryAPI_getDiscoveryAPIGroup(apiClient_t *apiClient);


