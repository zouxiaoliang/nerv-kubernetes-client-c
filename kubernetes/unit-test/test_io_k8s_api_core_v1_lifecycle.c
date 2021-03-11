#ifndef io_k8s_api_core_v1_lifecycle_TEST
#define io_k8s_api_core_v1_lifecycle_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_lifecycle_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_lifecycle.h"
io_k8s_api_core_v1_lifecycle_t* instantiate_io_k8s_api_core_v1_lifecycle(int include_optional);

#include "test_io_k8s_api_core_v1_handler.c"
#include "test_io_k8s_api_core_v1_handler.c"


io_k8s_api_core_v1_lifecycle_t* instantiate_io_k8s_api_core_v1_lifecycle(int include_optional) {
  io_k8s_api_core_v1_lifecycle_t* io_k8s_api_core_v1_lifecycle = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_lifecycle = io_k8s_api_core_v1_lifecycle_create(
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_handler(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_handler(0)
    );
  } else {
    io_k8s_api_core_v1_lifecycle = io_k8s_api_core_v1_lifecycle_create(
      NULL,
      NULL
    );
  }

  return io_k8s_api_core_v1_lifecycle;
}


#ifdef io_k8s_api_core_v1_lifecycle_MAIN

void test_io_k8s_api_core_v1_lifecycle(int include_optional) {
    io_k8s_api_core_v1_lifecycle_t* io_k8s_api_core_v1_lifecycle_1 = instantiate_io_k8s_api_core_v1_lifecycle(include_optional);

	cJSON* jsonio_k8s_api_core_v1_lifecycle_1 = io_k8s_api_core_v1_lifecycle_convertToJSON(io_k8s_api_core_v1_lifecycle_1);
	printf("io_k8s_api_core_v1_lifecycle :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_lifecycle_1));
	io_k8s_api_core_v1_lifecycle_t* io_k8s_api_core_v1_lifecycle_2 = io_k8s_api_core_v1_lifecycle_parseFromJSON(jsonio_k8s_api_core_v1_lifecycle_1);
	cJSON* jsonio_k8s_api_core_v1_lifecycle_2 = io_k8s_api_core_v1_lifecycle_convertToJSON(io_k8s_api_core_v1_lifecycle_2);
	printf("repeating io_k8s_api_core_v1_lifecycle:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_lifecycle_2));
}

int main() {
  test_io_k8s_api_core_v1_lifecycle(1);
  test_io_k8s_api_core_v1_lifecycle(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_lifecycle_MAIN
#endif // io_k8s_api_core_v1_lifecycle_TEST
