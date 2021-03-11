#ifndef io_k8s_api_core_v1_env_var_TEST
#define io_k8s_api_core_v1_env_var_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_env_var_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_env_var.h"
io_k8s_api_core_v1_env_var_t* instantiate_io_k8s_api_core_v1_env_var(int include_optional);

#include "test_io_k8s_api_core_v1_env_var_source.c"


io_k8s_api_core_v1_env_var_t* instantiate_io_k8s_api_core_v1_env_var(int include_optional) {
  io_k8s_api_core_v1_env_var_t* io_k8s_api_core_v1_env_var = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_env_var = io_k8s_api_core_v1_env_var_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_env_var_source(0)
    );
  } else {
    io_k8s_api_core_v1_env_var = io_k8s_api_core_v1_env_var_create(
      "0",
      "0",
      NULL
    );
  }

  return io_k8s_api_core_v1_env_var;
}


#ifdef io_k8s_api_core_v1_env_var_MAIN

void test_io_k8s_api_core_v1_env_var(int include_optional) {
    io_k8s_api_core_v1_env_var_t* io_k8s_api_core_v1_env_var_1 = instantiate_io_k8s_api_core_v1_env_var(include_optional);

	cJSON* jsonio_k8s_api_core_v1_env_var_1 = io_k8s_api_core_v1_env_var_convertToJSON(io_k8s_api_core_v1_env_var_1);
	printf("io_k8s_api_core_v1_env_var :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_env_var_1));
	io_k8s_api_core_v1_env_var_t* io_k8s_api_core_v1_env_var_2 = io_k8s_api_core_v1_env_var_parseFromJSON(jsonio_k8s_api_core_v1_env_var_1);
	cJSON* jsonio_k8s_api_core_v1_env_var_2 = io_k8s_api_core_v1_env_var_convertToJSON(io_k8s_api_core_v1_env_var_2);
	printf("repeating io_k8s_api_core_v1_env_var:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_env_var_2));
}

int main() {
  test_io_k8s_api_core_v1_env_var(1);
  test_io_k8s_api_core_v1_env_var(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_env_var_MAIN
#endif // io_k8s_api_core_v1_env_var_TEST
