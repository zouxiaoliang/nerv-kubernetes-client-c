#ifndef io_k8s_api_core_v1_limit_range_TEST
#define io_k8s_api_core_v1_limit_range_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_limit_range_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_limit_range.h"
io_k8s_api_core_v1_limit_range_t* instantiate_io_k8s_api_core_v1_limit_range(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"
#include "test_io_k8s_api_core_v1_limit_range_spec.c"


io_k8s_api_core_v1_limit_range_t* instantiate_io_k8s_api_core_v1_limit_range(int include_optional) {
  io_k8s_api_core_v1_limit_range_t* io_k8s_api_core_v1_limit_range = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_limit_range = io_k8s_api_core_v1_limit_range_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_limit_range_spec(0)
    );
  } else {
    io_k8s_api_core_v1_limit_range = io_k8s_api_core_v1_limit_range_create(
      "0",
      "0",
      NULL,
      NULL
    );
  }

  return io_k8s_api_core_v1_limit_range;
}


#ifdef io_k8s_api_core_v1_limit_range_MAIN

void test_io_k8s_api_core_v1_limit_range(int include_optional) {
    io_k8s_api_core_v1_limit_range_t* io_k8s_api_core_v1_limit_range_1 = instantiate_io_k8s_api_core_v1_limit_range(include_optional);

	cJSON* jsonio_k8s_api_core_v1_limit_range_1 = io_k8s_api_core_v1_limit_range_convertToJSON(io_k8s_api_core_v1_limit_range_1);
	printf("io_k8s_api_core_v1_limit_range :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_limit_range_1));
	io_k8s_api_core_v1_limit_range_t* io_k8s_api_core_v1_limit_range_2 = io_k8s_api_core_v1_limit_range_parseFromJSON(jsonio_k8s_api_core_v1_limit_range_1);
	cJSON* jsonio_k8s_api_core_v1_limit_range_2 = io_k8s_api_core_v1_limit_range_convertToJSON(io_k8s_api_core_v1_limit_range_2);
	printf("repeating io_k8s_api_core_v1_limit_range:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_limit_range_2));
}

int main() {
  test_io_k8s_api_core_v1_limit_range(1);
  test_io_k8s_api_core_v1_limit_range(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_limit_range_MAIN
#endif // io_k8s_api_core_v1_limit_range_TEST
