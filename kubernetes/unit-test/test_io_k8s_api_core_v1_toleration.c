#ifndef io_k8s_api_core_v1_toleration_TEST
#define io_k8s_api_core_v1_toleration_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_toleration_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_toleration.h"
io_k8s_api_core_v1_toleration_t* instantiate_io_k8s_api_core_v1_toleration(int include_optional);



io_k8s_api_core_v1_toleration_t* instantiate_io_k8s_api_core_v1_toleration(int include_optional) {
  io_k8s_api_core_v1_toleration_t* io_k8s_api_core_v1_toleration = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_toleration = io_k8s_api_core_v1_toleration_create(
      "0",
      "0",
      "0",
      56,
      "0"
    );
  } else {
    io_k8s_api_core_v1_toleration = io_k8s_api_core_v1_toleration_create(
      "0",
      "0",
      "0",
      56,
      "0"
    );
  }

  return io_k8s_api_core_v1_toleration;
}


#ifdef io_k8s_api_core_v1_toleration_MAIN

void test_io_k8s_api_core_v1_toleration(int include_optional) {
    io_k8s_api_core_v1_toleration_t* io_k8s_api_core_v1_toleration_1 = instantiate_io_k8s_api_core_v1_toleration(include_optional);

	cJSON* jsonio_k8s_api_core_v1_toleration_1 = io_k8s_api_core_v1_toleration_convertToJSON(io_k8s_api_core_v1_toleration_1);
	printf("io_k8s_api_core_v1_toleration :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_toleration_1));
	io_k8s_api_core_v1_toleration_t* io_k8s_api_core_v1_toleration_2 = io_k8s_api_core_v1_toleration_parseFromJSON(jsonio_k8s_api_core_v1_toleration_1);
	cJSON* jsonio_k8s_api_core_v1_toleration_2 = io_k8s_api_core_v1_toleration_convertToJSON(io_k8s_api_core_v1_toleration_2);
	printf("repeating io_k8s_api_core_v1_toleration:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_toleration_2));
}

int main() {
  test_io_k8s_api_core_v1_toleration(1);
  test_io_k8s_api_core_v1_toleration(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_toleration_MAIN
#endif // io_k8s_api_core_v1_toleration_TEST
