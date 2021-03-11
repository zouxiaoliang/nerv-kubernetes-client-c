#ifndef io_k8s_api_core_v1_ephemeral_containers_TEST
#define io_k8s_api_core_v1_ephemeral_containers_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_ephemeral_containers_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_ephemeral_containers.h"
io_k8s_api_core_v1_ephemeral_containers_t* instantiate_io_k8s_api_core_v1_ephemeral_containers(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"


io_k8s_api_core_v1_ephemeral_containers_t* instantiate_io_k8s_api_core_v1_ephemeral_containers(int include_optional) {
  io_k8s_api_core_v1_ephemeral_containers_t* io_k8s_api_core_v1_ephemeral_containers = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_ephemeral_containers = io_k8s_api_core_v1_ephemeral_containers_create(
      "0",
      list_create(),
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0)
    );
  } else {
    io_k8s_api_core_v1_ephemeral_containers = io_k8s_api_core_v1_ephemeral_containers_create(
      "0",
      list_create(),
      "0",
      NULL
    );
  }

  return io_k8s_api_core_v1_ephemeral_containers;
}


#ifdef io_k8s_api_core_v1_ephemeral_containers_MAIN

void test_io_k8s_api_core_v1_ephemeral_containers(int include_optional) {
    io_k8s_api_core_v1_ephemeral_containers_t* io_k8s_api_core_v1_ephemeral_containers_1 = instantiate_io_k8s_api_core_v1_ephemeral_containers(include_optional);

	cJSON* jsonio_k8s_api_core_v1_ephemeral_containers_1 = io_k8s_api_core_v1_ephemeral_containers_convertToJSON(io_k8s_api_core_v1_ephemeral_containers_1);
	printf("io_k8s_api_core_v1_ephemeral_containers :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_ephemeral_containers_1));
	io_k8s_api_core_v1_ephemeral_containers_t* io_k8s_api_core_v1_ephemeral_containers_2 = io_k8s_api_core_v1_ephemeral_containers_parseFromJSON(jsonio_k8s_api_core_v1_ephemeral_containers_1);
	cJSON* jsonio_k8s_api_core_v1_ephemeral_containers_2 = io_k8s_api_core_v1_ephemeral_containers_convertToJSON(io_k8s_api_core_v1_ephemeral_containers_2);
	printf("repeating io_k8s_api_core_v1_ephemeral_containers:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_ephemeral_containers_2));
}

int main() {
  test_io_k8s_api_core_v1_ephemeral_containers(1);
  test_io_k8s_api_core_v1_ephemeral_containers(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_ephemeral_containers_MAIN
#endif // io_k8s_api_core_v1_ephemeral_containers_TEST
