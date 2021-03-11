#ifndef io_k8s_api_core_v1_endpoint_subset_TEST
#define io_k8s_api_core_v1_endpoint_subset_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_endpoint_subset_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_endpoint_subset.h"
io_k8s_api_core_v1_endpoint_subset_t* instantiate_io_k8s_api_core_v1_endpoint_subset(int include_optional);



io_k8s_api_core_v1_endpoint_subset_t* instantiate_io_k8s_api_core_v1_endpoint_subset(int include_optional) {
  io_k8s_api_core_v1_endpoint_subset_t* io_k8s_api_core_v1_endpoint_subset = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_endpoint_subset = io_k8s_api_core_v1_endpoint_subset_create(
      list_create(),
      list_create(),
      list_create()
    );
  } else {
    io_k8s_api_core_v1_endpoint_subset = io_k8s_api_core_v1_endpoint_subset_create(
      list_create(),
      list_create(),
      list_create()
    );
  }

  return io_k8s_api_core_v1_endpoint_subset;
}


#ifdef io_k8s_api_core_v1_endpoint_subset_MAIN

void test_io_k8s_api_core_v1_endpoint_subset(int include_optional) {
    io_k8s_api_core_v1_endpoint_subset_t* io_k8s_api_core_v1_endpoint_subset_1 = instantiate_io_k8s_api_core_v1_endpoint_subset(include_optional);

	cJSON* jsonio_k8s_api_core_v1_endpoint_subset_1 = io_k8s_api_core_v1_endpoint_subset_convertToJSON(io_k8s_api_core_v1_endpoint_subset_1);
	printf("io_k8s_api_core_v1_endpoint_subset :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_endpoint_subset_1));
	io_k8s_api_core_v1_endpoint_subset_t* io_k8s_api_core_v1_endpoint_subset_2 = io_k8s_api_core_v1_endpoint_subset_parseFromJSON(jsonio_k8s_api_core_v1_endpoint_subset_1);
	cJSON* jsonio_k8s_api_core_v1_endpoint_subset_2 = io_k8s_api_core_v1_endpoint_subset_convertToJSON(io_k8s_api_core_v1_endpoint_subset_2);
	printf("repeating io_k8s_api_core_v1_endpoint_subset:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_endpoint_subset_2));
}

int main() {
  test_io_k8s_api_core_v1_endpoint_subset(1);
  test_io_k8s_api_core_v1_endpoint_subset(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_endpoint_subset_MAIN
#endif // io_k8s_api_core_v1_endpoint_subset_TEST
