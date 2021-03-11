#ifndef io_k8s_api_core_v1_config_map_TEST
#define io_k8s_api_core_v1_config_map_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_config_map_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_config_map.h"
io_k8s_api_core_v1_config_map_t* instantiate_io_k8s_api_core_v1_config_map(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"


io_k8s_api_core_v1_config_map_t* instantiate_io_k8s_api_core_v1_config_map(int include_optional) {
  io_k8s_api_core_v1_config_map_t* io_k8s_api_core_v1_config_map = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_config_map = io_k8s_api_core_v1_config_map_create(
      "0",
      list_create(),
      list_create(),
      1,
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0)
    );
  } else {
    io_k8s_api_core_v1_config_map = io_k8s_api_core_v1_config_map_create(
      "0",
      list_create(),
      list_create(),
      1,
      "0",
      NULL
    );
  }

  return io_k8s_api_core_v1_config_map;
}


#ifdef io_k8s_api_core_v1_config_map_MAIN

void test_io_k8s_api_core_v1_config_map(int include_optional) {
    io_k8s_api_core_v1_config_map_t* io_k8s_api_core_v1_config_map_1 = instantiate_io_k8s_api_core_v1_config_map(include_optional);

	cJSON* jsonio_k8s_api_core_v1_config_map_1 = io_k8s_api_core_v1_config_map_convertToJSON(io_k8s_api_core_v1_config_map_1);
	printf("io_k8s_api_core_v1_config_map :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_config_map_1));
	io_k8s_api_core_v1_config_map_t* io_k8s_api_core_v1_config_map_2 = io_k8s_api_core_v1_config_map_parseFromJSON(jsonio_k8s_api_core_v1_config_map_1);
	cJSON* jsonio_k8s_api_core_v1_config_map_2 = io_k8s_api_core_v1_config_map_convertToJSON(io_k8s_api_core_v1_config_map_2);
	printf("repeating io_k8s_api_core_v1_config_map:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_config_map_2));
}

int main() {
  test_io_k8s_api_core_v1_config_map(1);
  test_io_k8s_api_core_v1_config_map(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_config_map_MAIN
#endif // io_k8s_api_core_v1_config_map_TEST
