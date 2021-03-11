#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/io_k8s_apimachinery_pkg_version_info.h"


// get the code version
//
io_k8s_apimachinery_pkg_version_info_t*
VersionAPI_getCodeVersion(apiClient_t *apiClient);


