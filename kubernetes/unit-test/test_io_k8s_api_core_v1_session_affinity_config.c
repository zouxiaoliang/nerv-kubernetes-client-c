#ifndef io_k8s_api_core_v1_session_affinity_config_TEST
#define io_k8s_api_core_v1_session_affinity_config_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_session_affinity_config_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_session_affinity_config.h"
io_k8s_api_core_v1_session_affinity_config_t* instantiate_io_k8s_api_core_v1_session_affinity_config(int include_optional);

#include "test_io_k8s_api_core_v1_client_ip_config.c"


io_k8s_api_core_v1_session_affinity_config_t* instantiate_io_k8s_api_core_v1_session_affinity_config(int include_optional) {
  io_k8s_api_core_v1_session_affinity_config_t* io_k8s_api_core_v1_session_affinity_config = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_session_affinity_config = io_k8s_api_core_v1_session_affinity_config_create(
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_client_ip_config(0)
    );
  } else {
    io_k8s_api_core_v1_session_affinity_config = io_k8s_api_core_v1_session_affinity_config_create(
      NULL
    );
  }

  return io_k8s_api_core_v1_session_affinity_config;
}


#ifdef io_k8s_api_core_v1_session_affinity_config_MAIN

void test_io_k8s_api_core_v1_session_affinity_config(int include_optional) {
    io_k8s_api_core_v1_session_affinity_config_t* io_k8s_api_core_v1_session_affinity_config_1 = instantiate_io_k8s_api_core_v1_session_affinity_config(include_optional);

	cJSON* jsonio_k8s_api_core_v1_session_affinity_config_1 = io_k8s_api_core_v1_session_affinity_config_convertToJSON(io_k8s_api_core_v1_session_affinity_config_1);
	printf("io_k8s_api_core_v1_session_affinity_config :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_session_affinity_config_1));
	io_k8s_api_core_v1_session_affinity_config_t* io_k8s_api_core_v1_session_affinity_config_2 = io_k8s_api_core_v1_session_affinity_config_parseFromJSON(jsonio_k8s_api_core_v1_session_affinity_config_1);
	cJSON* jsonio_k8s_api_core_v1_session_affinity_config_2 = io_k8s_api_core_v1_session_affinity_config_convertToJSON(io_k8s_api_core_v1_session_affinity_config_2);
	printf("repeating io_k8s_api_core_v1_session_affinity_config:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_session_affinity_config_2));
}

int main() {
  test_io_k8s_api_core_v1_session_affinity_config(1);
  test_io_k8s_api_core_v1_session_affinity_config(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_session_affinity_config_MAIN
#endif // io_k8s_api_core_v1_session_affinity_config_TEST
