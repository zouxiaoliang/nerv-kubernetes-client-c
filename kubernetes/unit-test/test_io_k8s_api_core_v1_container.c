#ifndef io_k8s_api_core_v1_container_TEST
#define io_k8s_api_core_v1_container_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_container_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_container.h"
io_k8s_api_core_v1_container_t* instantiate_io_k8s_api_core_v1_container(int include_optional);

#include "test_io_k8s_api_core_v1_lifecycle.c"
#include "test_io_k8s_api_core_v1_probe.c"
#include "test_io_k8s_api_core_v1_probe.c"
#include "test_io_k8s_api_core_v1_resource_requirements.c"
#include "test_io_k8s_api_core_v1_security_context.c"
#include "test_io_k8s_api_core_v1_probe.c"


io_k8s_api_core_v1_container_t* instantiate_io_k8s_api_core_v1_container(int include_optional) {
  io_k8s_api_core_v1_container_t* io_k8s_api_core_v1_container = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_container = io_k8s_api_core_v1_container_create(
      list_create(),
      list_create(),
      list_create(),
      list_create(),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_lifecycle(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_probe(0),
      "0",
      list_create(),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_probe(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_resource_requirements(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_security_context(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_probe(0),
      1,
      1,
      "0",
      "0",
      1,
      list_create(),
      list_create(),
      "0"
    );
  } else {
    io_k8s_api_core_v1_container = io_k8s_api_core_v1_container_create(
      list_create(),
      list_create(),
      list_create(),
      list_create(),
      "0",
      "0",
      NULL,
      NULL,
      "0",
      list_create(),
      NULL,
      NULL,
      NULL,
      NULL,
      1,
      1,
      "0",
      "0",
      1,
      list_create(),
      list_create(),
      "0"
    );
  }

  return io_k8s_api_core_v1_container;
}


#ifdef io_k8s_api_core_v1_container_MAIN

void test_io_k8s_api_core_v1_container(int include_optional) {
    io_k8s_api_core_v1_container_t* io_k8s_api_core_v1_container_1 = instantiate_io_k8s_api_core_v1_container(include_optional);

	cJSON* jsonio_k8s_api_core_v1_container_1 = io_k8s_api_core_v1_container_convertToJSON(io_k8s_api_core_v1_container_1);
	printf("io_k8s_api_core_v1_container :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_container_1));
	io_k8s_api_core_v1_container_t* io_k8s_api_core_v1_container_2 = io_k8s_api_core_v1_container_parseFromJSON(jsonio_k8s_api_core_v1_container_1);
	cJSON* jsonio_k8s_api_core_v1_container_2 = io_k8s_api_core_v1_container_convertToJSON(io_k8s_api_core_v1_container_2);
	printf("repeating io_k8s_api_core_v1_container:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_container_2));
}

int main() {
  test_io_k8s_api_core_v1_container(1);
  test_io_k8s_api_core_v1_container(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_container_MAIN
#endif // io_k8s_api_core_v1_container_TEST
