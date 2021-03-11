#ifndef io_k8s_api_core_v1_env_var_source_TEST
#define io_k8s_api_core_v1_env_var_source_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_env_var_source_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_env_var_source.h"
io_k8s_api_core_v1_env_var_source_t* instantiate_io_k8s_api_core_v1_env_var_source(int include_optional);

#include "test_io_k8s_api_core_v1_config_map_key_selector.c"
#include "test_io_k8s_api_core_v1_object_field_selector.c"
#include "test_io_k8s_api_core_v1_resource_field_selector.c"
#include "test_io_k8s_api_core_v1_secret_key_selector.c"


io_k8s_api_core_v1_env_var_source_t* instantiate_io_k8s_api_core_v1_env_var_source(int include_optional) {
  io_k8s_api_core_v1_env_var_source_t* io_k8s_api_core_v1_env_var_source = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_env_var_source = io_k8s_api_core_v1_env_var_source_create(
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_config_map_key_selector(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_object_field_selector(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_resource_field_selector(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_secret_key_selector(0)
    );
  } else {
    io_k8s_api_core_v1_env_var_source = io_k8s_api_core_v1_env_var_source_create(
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return io_k8s_api_core_v1_env_var_source;
}


#ifdef io_k8s_api_core_v1_env_var_source_MAIN

void test_io_k8s_api_core_v1_env_var_source(int include_optional) {
    io_k8s_api_core_v1_env_var_source_t* io_k8s_api_core_v1_env_var_source_1 = instantiate_io_k8s_api_core_v1_env_var_source(include_optional);

	cJSON* jsonio_k8s_api_core_v1_env_var_source_1 = io_k8s_api_core_v1_env_var_source_convertToJSON(io_k8s_api_core_v1_env_var_source_1);
	printf("io_k8s_api_core_v1_env_var_source :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_env_var_source_1));
	io_k8s_api_core_v1_env_var_source_t* io_k8s_api_core_v1_env_var_source_2 = io_k8s_api_core_v1_env_var_source_parseFromJSON(jsonio_k8s_api_core_v1_env_var_source_1);
	cJSON* jsonio_k8s_api_core_v1_env_var_source_2 = io_k8s_api_core_v1_env_var_source_convertToJSON(io_k8s_api_core_v1_env_var_source_2);
	printf("repeating io_k8s_api_core_v1_env_var_source:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_env_var_source_2));
}

int main() {
  test_io_k8s_api_core_v1_env_var_source(1);
  test_io_k8s_api_core_v1_env_var_source(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_env_var_source_MAIN
#endif // io_k8s_api_core_v1_env_var_source_TEST
