#ifndef io_k8s_api_discovery_v1beta1_endpoint_TEST
#define io_k8s_api_discovery_v1beta1_endpoint_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_discovery_v1beta1_endpoint_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_discovery_v1beta1_endpoint.h"
io_k8s_api_discovery_v1beta1_endpoint_t* instantiate_io_k8s_api_discovery_v1beta1_endpoint(int include_optional);

#include "test_io_k8s_api_discovery_v1beta1_endpoint_conditions.c"
#include "test_io_k8s_api_core_v1_object_reference.c"


io_k8s_api_discovery_v1beta1_endpoint_t* instantiate_io_k8s_api_discovery_v1beta1_endpoint(int include_optional) {
  io_k8s_api_discovery_v1beta1_endpoint_t* io_k8s_api_discovery_v1beta1_endpoint = NULL;
  if (include_optional) {
    io_k8s_api_discovery_v1beta1_endpoint = io_k8s_api_discovery_v1beta1_endpoint_create(
      list_create(),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_discovery_v1beta1_endpoint_conditions(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_object_reference(0),
      list_create()
    );
  } else {
    io_k8s_api_discovery_v1beta1_endpoint = io_k8s_api_discovery_v1beta1_endpoint_create(
      list_create(),
      NULL,
      "0",
      "0",
      NULL,
      list_create()
    );
  }

  return io_k8s_api_discovery_v1beta1_endpoint;
}


#ifdef io_k8s_api_discovery_v1beta1_endpoint_MAIN

void test_io_k8s_api_discovery_v1beta1_endpoint(int include_optional) {
    io_k8s_api_discovery_v1beta1_endpoint_t* io_k8s_api_discovery_v1beta1_endpoint_1 = instantiate_io_k8s_api_discovery_v1beta1_endpoint(include_optional);

	cJSON* jsonio_k8s_api_discovery_v1beta1_endpoint_1 = io_k8s_api_discovery_v1beta1_endpoint_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint_1);
	printf("io_k8s_api_discovery_v1beta1_endpoint :\n%s\n", cJSON_Print(jsonio_k8s_api_discovery_v1beta1_endpoint_1));
	io_k8s_api_discovery_v1beta1_endpoint_t* io_k8s_api_discovery_v1beta1_endpoint_2 = io_k8s_api_discovery_v1beta1_endpoint_parseFromJSON(jsonio_k8s_api_discovery_v1beta1_endpoint_1);
	cJSON* jsonio_k8s_api_discovery_v1beta1_endpoint_2 = io_k8s_api_discovery_v1beta1_endpoint_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint_2);
	printf("repeating io_k8s_api_discovery_v1beta1_endpoint:\n%s\n", cJSON_Print(jsonio_k8s_api_discovery_v1beta1_endpoint_2));
}

int main() {
  test_io_k8s_api_discovery_v1beta1_endpoint(1);
  test_io_k8s_api_discovery_v1beta1_endpoint(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_discovery_v1beta1_endpoint_MAIN
#endif // io_k8s_api_discovery_v1beta1_endpoint_TEST
