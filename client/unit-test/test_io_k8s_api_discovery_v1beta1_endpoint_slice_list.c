#ifndef io_k8s_api_discovery_v1beta1_endpoint_slice_list_TEST
#define io_k8s_api_discovery_v1beta1_endpoint_slice_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_discovery_v1beta1_endpoint_slice_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_discovery_v1beta1_endpoint_slice_list.h"
io_k8s_api_discovery_v1beta1_endpoint_slice_list_t* instantiate_io_k8s_api_discovery_v1beta1_endpoint_slice_list(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_list_meta.c"


io_k8s_api_discovery_v1beta1_endpoint_slice_list_t* instantiate_io_k8s_api_discovery_v1beta1_endpoint_slice_list(int include_optional) {
  io_k8s_api_discovery_v1beta1_endpoint_slice_list_t* io_k8s_api_discovery_v1beta1_endpoint_slice_list = NULL;
  if (include_optional) {
    io_k8s_api_discovery_v1beta1_endpoint_slice_list = io_k8s_api_discovery_v1beta1_endpoint_slice_list_create(
      "0",
      list_create(),
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_list_meta(0)
    );
  } else {
    io_k8s_api_discovery_v1beta1_endpoint_slice_list = io_k8s_api_discovery_v1beta1_endpoint_slice_list_create(
      "0",
      list_create(),
      "0",
      NULL
    );
  }

  return io_k8s_api_discovery_v1beta1_endpoint_slice_list;
}


#ifdef io_k8s_api_discovery_v1beta1_endpoint_slice_list_MAIN

void test_io_k8s_api_discovery_v1beta1_endpoint_slice_list(int include_optional) {
    io_k8s_api_discovery_v1beta1_endpoint_slice_list_t* io_k8s_api_discovery_v1beta1_endpoint_slice_list_1 = instantiate_io_k8s_api_discovery_v1beta1_endpoint_slice_list(include_optional);

	cJSON* jsonio_k8s_api_discovery_v1beta1_endpoint_slice_list_1 = io_k8s_api_discovery_v1beta1_endpoint_slice_list_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint_slice_list_1);
	printf("io_k8s_api_discovery_v1beta1_endpoint_slice_list :\n%s\n", cJSON_Print(jsonio_k8s_api_discovery_v1beta1_endpoint_slice_list_1));
	io_k8s_api_discovery_v1beta1_endpoint_slice_list_t* io_k8s_api_discovery_v1beta1_endpoint_slice_list_2 = io_k8s_api_discovery_v1beta1_endpoint_slice_list_parseFromJSON(jsonio_k8s_api_discovery_v1beta1_endpoint_slice_list_1);
	cJSON* jsonio_k8s_api_discovery_v1beta1_endpoint_slice_list_2 = io_k8s_api_discovery_v1beta1_endpoint_slice_list_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint_slice_list_2);
	printf("repeating io_k8s_api_discovery_v1beta1_endpoint_slice_list:\n%s\n", cJSON_Print(jsonio_k8s_api_discovery_v1beta1_endpoint_slice_list_2));
}

int main() {
  test_io_k8s_api_discovery_v1beta1_endpoint_slice_list(1);
  test_io_k8s_api_discovery_v1beta1_endpoint_slice_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_discovery_v1beta1_endpoint_slice_list_MAIN
#endif // io_k8s_api_discovery_v1beta1_endpoint_slice_list_TEST
