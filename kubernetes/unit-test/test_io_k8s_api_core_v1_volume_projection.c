#ifndef io_k8s_api_core_v1_volume_projection_TEST
#define io_k8s_api_core_v1_volume_projection_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_volume_projection_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_volume_projection.h"
io_k8s_api_core_v1_volume_projection_t* instantiate_io_k8s_api_core_v1_volume_projection(int include_optional);

#include "test_io_k8s_api_core_v1_config_map_projection.c"
#include "test_io_k8s_api_core_v1_downward_api_projection.c"
#include "test_io_k8s_api_core_v1_secret_projection.c"
#include "test_io_k8s_api_core_v1_service_account_token_projection.c"


io_k8s_api_core_v1_volume_projection_t* instantiate_io_k8s_api_core_v1_volume_projection(int include_optional) {
  io_k8s_api_core_v1_volume_projection_t* io_k8s_api_core_v1_volume_projection = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_volume_projection = io_k8s_api_core_v1_volume_projection_create(
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_config_map_projection(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_downward_api_projection(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_secret_projection(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_service_account_token_projection(0)
    );
  } else {
    io_k8s_api_core_v1_volume_projection = io_k8s_api_core_v1_volume_projection_create(
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return io_k8s_api_core_v1_volume_projection;
}


#ifdef io_k8s_api_core_v1_volume_projection_MAIN

void test_io_k8s_api_core_v1_volume_projection(int include_optional) {
    io_k8s_api_core_v1_volume_projection_t* io_k8s_api_core_v1_volume_projection_1 = instantiate_io_k8s_api_core_v1_volume_projection(include_optional);

	cJSON* jsonio_k8s_api_core_v1_volume_projection_1 = io_k8s_api_core_v1_volume_projection_convertToJSON(io_k8s_api_core_v1_volume_projection_1);
	printf("io_k8s_api_core_v1_volume_projection :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_volume_projection_1));
	io_k8s_api_core_v1_volume_projection_t* io_k8s_api_core_v1_volume_projection_2 = io_k8s_api_core_v1_volume_projection_parseFromJSON(jsonio_k8s_api_core_v1_volume_projection_1);
	cJSON* jsonio_k8s_api_core_v1_volume_projection_2 = io_k8s_api_core_v1_volume_projection_convertToJSON(io_k8s_api_core_v1_volume_projection_2);
	printf("repeating io_k8s_api_core_v1_volume_projection:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_volume_projection_2));
}

int main() {
  test_io_k8s_api_core_v1_volume_projection(1);
  test_io_k8s_api_core_v1_volume_projection(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_volume_projection_MAIN
#endif // io_k8s_api_core_v1_volume_projection_TEST
