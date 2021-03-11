#ifndef io_k8s_api_core_v1_host_alias_TEST
#define io_k8s_api_core_v1_host_alias_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_host_alias_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_host_alias.h"
io_k8s_api_core_v1_host_alias_t* instantiate_io_k8s_api_core_v1_host_alias(int include_optional);



io_k8s_api_core_v1_host_alias_t* instantiate_io_k8s_api_core_v1_host_alias(int include_optional) {
  io_k8s_api_core_v1_host_alias_t* io_k8s_api_core_v1_host_alias = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_host_alias = io_k8s_api_core_v1_host_alias_create(
      list_create(),
      "0"
    );
  } else {
    io_k8s_api_core_v1_host_alias = io_k8s_api_core_v1_host_alias_create(
      list_create(),
      "0"
    );
  }

  return io_k8s_api_core_v1_host_alias;
}


#ifdef io_k8s_api_core_v1_host_alias_MAIN

void test_io_k8s_api_core_v1_host_alias(int include_optional) {
    io_k8s_api_core_v1_host_alias_t* io_k8s_api_core_v1_host_alias_1 = instantiate_io_k8s_api_core_v1_host_alias(include_optional);

	cJSON* jsonio_k8s_api_core_v1_host_alias_1 = io_k8s_api_core_v1_host_alias_convertToJSON(io_k8s_api_core_v1_host_alias_1);
	printf("io_k8s_api_core_v1_host_alias :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_host_alias_1));
	io_k8s_api_core_v1_host_alias_t* io_k8s_api_core_v1_host_alias_2 = io_k8s_api_core_v1_host_alias_parseFromJSON(jsonio_k8s_api_core_v1_host_alias_1);
	cJSON* jsonio_k8s_api_core_v1_host_alias_2 = io_k8s_api_core_v1_host_alias_convertToJSON(io_k8s_api_core_v1_host_alias_2);
	printf("repeating io_k8s_api_core_v1_host_alias:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_host_alias_2));
}

int main() {
  test_io_k8s_api_core_v1_host_alias(1);
  test_io_k8s_api_core_v1_host_alias(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_host_alias_MAIN
#endif // io_k8s_api_core_v1_host_alias_TEST
