#ifndef io_k8s_api_core_v1_config_map_projection_TEST
#define io_k8s_api_core_v1_config_map_projection_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_config_map_projection_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_config_map_projection.h"
io_k8s_api_core_v1_config_map_projection_t* instantiate_io_k8s_api_core_v1_config_map_projection(int include_optional);



io_k8s_api_core_v1_config_map_projection_t* instantiate_io_k8s_api_core_v1_config_map_projection(int include_optional) {
  io_k8s_api_core_v1_config_map_projection_t* io_k8s_api_core_v1_config_map_projection = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_config_map_projection = io_k8s_api_core_v1_config_map_projection_create(
      list_create(),
      "0",
      1
    );
  } else {
    io_k8s_api_core_v1_config_map_projection = io_k8s_api_core_v1_config_map_projection_create(
      list_create(),
      "0",
      1
    );
  }

  return io_k8s_api_core_v1_config_map_projection;
}


#ifdef io_k8s_api_core_v1_config_map_projection_MAIN

void test_io_k8s_api_core_v1_config_map_projection(int include_optional) {
    io_k8s_api_core_v1_config_map_projection_t* io_k8s_api_core_v1_config_map_projection_1 = instantiate_io_k8s_api_core_v1_config_map_projection(include_optional);

	cJSON* jsonio_k8s_api_core_v1_config_map_projection_1 = io_k8s_api_core_v1_config_map_projection_convertToJSON(io_k8s_api_core_v1_config_map_projection_1);
	printf("io_k8s_api_core_v1_config_map_projection :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_config_map_projection_1));
	io_k8s_api_core_v1_config_map_projection_t* io_k8s_api_core_v1_config_map_projection_2 = io_k8s_api_core_v1_config_map_projection_parseFromJSON(jsonio_k8s_api_core_v1_config_map_projection_1);
	cJSON* jsonio_k8s_api_core_v1_config_map_projection_2 = io_k8s_api_core_v1_config_map_projection_convertToJSON(io_k8s_api_core_v1_config_map_projection_2);
	printf("repeating io_k8s_api_core_v1_config_map_projection:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_config_map_projection_2));
}

int main() {
  test_io_k8s_api_core_v1_config_map_projection(1);
  test_io_k8s_api_core_v1_config_map_projection(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_config_map_projection_MAIN
#endif // io_k8s_api_core_v1_config_map_projection_TEST
