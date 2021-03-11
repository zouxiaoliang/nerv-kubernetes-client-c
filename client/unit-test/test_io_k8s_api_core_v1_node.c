#ifndef io_k8s_api_core_v1_node_TEST
#define io_k8s_api_core_v1_node_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_node_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_node.h"
io_k8s_api_core_v1_node_t* instantiate_io_k8s_api_core_v1_node(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"
#include "test_io_k8s_api_core_v1_node_spec.c"
#include "test_io_k8s_api_core_v1_node_status.c"


io_k8s_api_core_v1_node_t* instantiate_io_k8s_api_core_v1_node(int include_optional) {
  io_k8s_api_core_v1_node_t* io_k8s_api_core_v1_node = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_node = io_k8s_api_core_v1_node_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_node_spec(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_node_status(0)
    );
  } else {
    io_k8s_api_core_v1_node = io_k8s_api_core_v1_node_create(
      "0",
      "0",
      NULL,
      NULL,
      NULL
    );
  }

  return io_k8s_api_core_v1_node;
}


#ifdef io_k8s_api_core_v1_node_MAIN

void test_io_k8s_api_core_v1_node(int include_optional) {
    io_k8s_api_core_v1_node_t* io_k8s_api_core_v1_node_1 = instantiate_io_k8s_api_core_v1_node(include_optional);

	cJSON* jsonio_k8s_api_core_v1_node_1 = io_k8s_api_core_v1_node_convertToJSON(io_k8s_api_core_v1_node_1);
	printf("io_k8s_api_core_v1_node :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_node_1));
	io_k8s_api_core_v1_node_t* io_k8s_api_core_v1_node_2 = io_k8s_api_core_v1_node_parseFromJSON(jsonio_k8s_api_core_v1_node_1);
	cJSON* jsonio_k8s_api_core_v1_node_2 = io_k8s_api_core_v1_node_convertToJSON(io_k8s_api_core_v1_node_2);
	printf("repeating io_k8s_api_core_v1_node:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_node_2));
}

int main() {
  test_io_k8s_api_core_v1_node(1);
  test_io_k8s_api_core_v1_node(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_node_MAIN
#endif // io_k8s_api_core_v1_node_TEST
