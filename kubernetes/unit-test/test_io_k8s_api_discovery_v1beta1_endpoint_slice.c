#ifndef io_k8s_api_discovery_v1beta1_endpoint_slice_TEST
#define io_k8s_api_discovery_v1beta1_endpoint_slice_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_discovery_v1beta1_endpoint_slice_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_discovery_v1beta1_endpoint_slice.h"
io_k8s_api_discovery_v1beta1_endpoint_slice_t* instantiate_io_k8s_api_discovery_v1beta1_endpoint_slice(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"


io_k8s_api_discovery_v1beta1_endpoint_slice_t* instantiate_io_k8s_api_discovery_v1beta1_endpoint_slice(int include_optional) {
  io_k8s_api_discovery_v1beta1_endpoint_slice_t* io_k8s_api_discovery_v1beta1_endpoint_slice = NULL;
  if (include_optional) {
    io_k8s_api_discovery_v1beta1_endpoint_slice = io_k8s_api_discovery_v1beta1_endpoint_slice_create(
      "0",
      "0",
      list_create(),
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
      list_create()
    );
  } else {
    io_k8s_api_discovery_v1beta1_endpoint_slice = io_k8s_api_discovery_v1beta1_endpoint_slice_create(
      "0",
      "0",
      list_create(),
      "0",
      NULL,
      list_create()
    );
  }

  return io_k8s_api_discovery_v1beta1_endpoint_slice;
}


#ifdef io_k8s_api_discovery_v1beta1_endpoint_slice_MAIN

void test_io_k8s_api_discovery_v1beta1_endpoint_slice(int include_optional) {
    io_k8s_api_discovery_v1beta1_endpoint_slice_t* io_k8s_api_discovery_v1beta1_endpoint_slice_1 = instantiate_io_k8s_api_discovery_v1beta1_endpoint_slice(include_optional);

	cJSON* jsonio_k8s_api_discovery_v1beta1_endpoint_slice_1 = io_k8s_api_discovery_v1beta1_endpoint_slice_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint_slice_1);
	printf("io_k8s_api_discovery_v1beta1_endpoint_slice :\n%s\n", cJSON_Print(jsonio_k8s_api_discovery_v1beta1_endpoint_slice_1));
	io_k8s_api_discovery_v1beta1_endpoint_slice_t* io_k8s_api_discovery_v1beta1_endpoint_slice_2 = io_k8s_api_discovery_v1beta1_endpoint_slice_parseFromJSON(jsonio_k8s_api_discovery_v1beta1_endpoint_slice_1);
	cJSON* jsonio_k8s_api_discovery_v1beta1_endpoint_slice_2 = io_k8s_api_discovery_v1beta1_endpoint_slice_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint_slice_2);
	printf("repeating io_k8s_api_discovery_v1beta1_endpoint_slice:\n%s\n", cJSON_Print(jsonio_k8s_api_discovery_v1beta1_endpoint_slice_2));
}

int main() {
  test_io_k8s_api_discovery_v1beta1_endpoint_slice(1);
  test_io_k8s_api_discovery_v1beta1_endpoint_slice(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_discovery_v1beta1_endpoint_slice_MAIN
#endif // io_k8s_api_discovery_v1beta1_endpoint_slice_TEST
