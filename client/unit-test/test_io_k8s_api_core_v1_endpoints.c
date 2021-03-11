#ifndef io_k8s_api_core_v1_endpoints_TEST
#define io_k8s_api_core_v1_endpoints_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_endpoints_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_endpoints.h"
io_k8s_api_core_v1_endpoints_t* instantiate_io_k8s_api_core_v1_endpoints(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"


io_k8s_api_core_v1_endpoints_t* instantiate_io_k8s_api_core_v1_endpoints(int include_optional) {
  io_k8s_api_core_v1_endpoints_t* io_k8s_api_core_v1_endpoints = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_endpoints = io_k8s_api_core_v1_endpoints_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
      list_create()
    );
  } else {
    io_k8s_api_core_v1_endpoints = io_k8s_api_core_v1_endpoints_create(
      "0",
      "0",
      NULL,
      list_create()
    );
  }

  return io_k8s_api_core_v1_endpoints;
}


#ifdef io_k8s_api_core_v1_endpoints_MAIN

void test_io_k8s_api_core_v1_endpoints(int include_optional) {
    io_k8s_api_core_v1_endpoints_t* io_k8s_api_core_v1_endpoints_1 = instantiate_io_k8s_api_core_v1_endpoints(include_optional);

	cJSON* jsonio_k8s_api_core_v1_endpoints_1 = io_k8s_api_core_v1_endpoints_convertToJSON(io_k8s_api_core_v1_endpoints_1);
	printf("io_k8s_api_core_v1_endpoints :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_endpoints_1));
	io_k8s_api_core_v1_endpoints_t* io_k8s_api_core_v1_endpoints_2 = io_k8s_api_core_v1_endpoints_parseFromJSON(jsonio_k8s_api_core_v1_endpoints_1);
	cJSON* jsonio_k8s_api_core_v1_endpoints_2 = io_k8s_api_core_v1_endpoints_convertToJSON(io_k8s_api_core_v1_endpoints_2);
	printf("repeating io_k8s_api_core_v1_endpoints:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_endpoints_2));
}

int main() {
  test_io_k8s_api_core_v1_endpoints(1);
  test_io_k8s_api_core_v1_endpoints(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_endpoints_MAIN
#endif // io_k8s_api_core_v1_endpoints_TEST
