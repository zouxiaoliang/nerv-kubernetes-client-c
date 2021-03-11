#ifndef io_k8s_api_core_v1_secret_env_source_TEST
#define io_k8s_api_core_v1_secret_env_source_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_secret_env_source_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_secret_env_source.h"
io_k8s_api_core_v1_secret_env_source_t* instantiate_io_k8s_api_core_v1_secret_env_source(int include_optional);



io_k8s_api_core_v1_secret_env_source_t* instantiate_io_k8s_api_core_v1_secret_env_source(int include_optional) {
  io_k8s_api_core_v1_secret_env_source_t* io_k8s_api_core_v1_secret_env_source = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_secret_env_source = io_k8s_api_core_v1_secret_env_source_create(
      "0",
      1
    );
  } else {
    io_k8s_api_core_v1_secret_env_source = io_k8s_api_core_v1_secret_env_source_create(
      "0",
      1
    );
  }

  return io_k8s_api_core_v1_secret_env_source;
}


#ifdef io_k8s_api_core_v1_secret_env_source_MAIN

void test_io_k8s_api_core_v1_secret_env_source(int include_optional) {
    io_k8s_api_core_v1_secret_env_source_t* io_k8s_api_core_v1_secret_env_source_1 = instantiate_io_k8s_api_core_v1_secret_env_source(include_optional);

	cJSON* jsonio_k8s_api_core_v1_secret_env_source_1 = io_k8s_api_core_v1_secret_env_source_convertToJSON(io_k8s_api_core_v1_secret_env_source_1);
	printf("io_k8s_api_core_v1_secret_env_source :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_secret_env_source_1));
	io_k8s_api_core_v1_secret_env_source_t* io_k8s_api_core_v1_secret_env_source_2 = io_k8s_api_core_v1_secret_env_source_parseFromJSON(jsonio_k8s_api_core_v1_secret_env_source_1);
	cJSON* jsonio_k8s_api_core_v1_secret_env_source_2 = io_k8s_api_core_v1_secret_env_source_convertToJSON(io_k8s_api_core_v1_secret_env_source_2);
	printf("repeating io_k8s_api_core_v1_secret_env_source:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_secret_env_source_2));
}

int main() {
  test_io_k8s_api_core_v1_secret_env_source(1);
  test_io_k8s_api_core_v1_secret_env_source(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_secret_env_source_MAIN
#endif // io_k8s_api_core_v1_secret_env_source_TEST
