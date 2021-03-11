#ifndef io_k8s_api_core_v1_capabilities_TEST
#define io_k8s_api_core_v1_capabilities_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_capabilities_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_capabilities.h"
io_k8s_api_core_v1_capabilities_t* instantiate_io_k8s_api_core_v1_capabilities(int include_optional);



io_k8s_api_core_v1_capabilities_t* instantiate_io_k8s_api_core_v1_capabilities(int include_optional) {
  io_k8s_api_core_v1_capabilities_t* io_k8s_api_core_v1_capabilities = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_capabilities = io_k8s_api_core_v1_capabilities_create(
      list_create(),
      list_create()
    );
  } else {
    io_k8s_api_core_v1_capabilities = io_k8s_api_core_v1_capabilities_create(
      list_create(),
      list_create()
    );
  }

  return io_k8s_api_core_v1_capabilities;
}


#ifdef io_k8s_api_core_v1_capabilities_MAIN

void test_io_k8s_api_core_v1_capabilities(int include_optional) {
    io_k8s_api_core_v1_capabilities_t* io_k8s_api_core_v1_capabilities_1 = instantiate_io_k8s_api_core_v1_capabilities(include_optional);

	cJSON* jsonio_k8s_api_core_v1_capabilities_1 = io_k8s_api_core_v1_capabilities_convertToJSON(io_k8s_api_core_v1_capabilities_1);
	printf("io_k8s_api_core_v1_capabilities :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_capabilities_1));
	io_k8s_api_core_v1_capabilities_t* io_k8s_api_core_v1_capabilities_2 = io_k8s_api_core_v1_capabilities_parseFromJSON(jsonio_k8s_api_core_v1_capabilities_1);
	cJSON* jsonio_k8s_api_core_v1_capabilities_2 = io_k8s_api_core_v1_capabilities_convertToJSON(io_k8s_api_core_v1_capabilities_2);
	printf("repeating io_k8s_api_core_v1_capabilities:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_capabilities_2));
}

int main() {
  test_io_k8s_api_core_v1_capabilities(1);
  test_io_k8s_api_core_v1_capabilities(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_capabilities_MAIN
#endif // io_k8s_api_core_v1_capabilities_TEST
