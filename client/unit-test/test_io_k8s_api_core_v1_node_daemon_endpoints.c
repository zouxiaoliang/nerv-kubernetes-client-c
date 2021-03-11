#ifndef io_k8s_api_core_v1_node_daemon_endpoints_TEST
#define io_k8s_api_core_v1_node_daemon_endpoints_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_node_daemon_endpoints_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_node_daemon_endpoints.h"
io_k8s_api_core_v1_node_daemon_endpoints_t* instantiate_io_k8s_api_core_v1_node_daemon_endpoints(int include_optional);

#include "test_io_k8s_api_core_v1_daemon_endpoint.c"


io_k8s_api_core_v1_node_daemon_endpoints_t* instantiate_io_k8s_api_core_v1_node_daemon_endpoints(int include_optional) {
  io_k8s_api_core_v1_node_daemon_endpoints_t* io_k8s_api_core_v1_node_daemon_endpoints = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_node_daemon_endpoints = io_k8s_api_core_v1_node_daemon_endpoints_create(
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_daemon_endpoint(0)
    );
  } else {
    io_k8s_api_core_v1_node_daemon_endpoints = io_k8s_api_core_v1_node_daemon_endpoints_create(
      NULL
    );
  }

  return io_k8s_api_core_v1_node_daemon_endpoints;
}


#ifdef io_k8s_api_core_v1_node_daemon_endpoints_MAIN

void test_io_k8s_api_core_v1_node_daemon_endpoints(int include_optional) {
    io_k8s_api_core_v1_node_daemon_endpoints_t* io_k8s_api_core_v1_node_daemon_endpoints_1 = instantiate_io_k8s_api_core_v1_node_daemon_endpoints(include_optional);

	cJSON* jsonio_k8s_api_core_v1_node_daemon_endpoints_1 = io_k8s_api_core_v1_node_daemon_endpoints_convertToJSON(io_k8s_api_core_v1_node_daemon_endpoints_1);
	printf("io_k8s_api_core_v1_node_daemon_endpoints :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_node_daemon_endpoints_1));
	io_k8s_api_core_v1_node_daemon_endpoints_t* io_k8s_api_core_v1_node_daemon_endpoints_2 = io_k8s_api_core_v1_node_daemon_endpoints_parseFromJSON(jsonio_k8s_api_core_v1_node_daemon_endpoints_1);
	cJSON* jsonio_k8s_api_core_v1_node_daemon_endpoints_2 = io_k8s_api_core_v1_node_daemon_endpoints_convertToJSON(io_k8s_api_core_v1_node_daemon_endpoints_2);
	printf("repeating io_k8s_api_core_v1_node_daemon_endpoints:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_node_daemon_endpoints_2));
}

int main() {
  test_io_k8s_api_core_v1_node_daemon_endpoints(1);
  test_io_k8s_api_core_v1_node_daemon_endpoints(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_node_daemon_endpoints_MAIN
#endif // io_k8s_api_core_v1_node_daemon_endpoints_TEST
