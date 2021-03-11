#ifndef io_k8s_api_core_v1_affinity_TEST
#define io_k8s_api_core_v1_affinity_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_affinity_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_affinity.h"
io_k8s_api_core_v1_affinity_t* instantiate_io_k8s_api_core_v1_affinity(int include_optional);

#include "test_io_k8s_api_core_v1_node_affinity.c"
#include "test_io_k8s_api_core_v1_pod_affinity.c"
#include "test_io_k8s_api_core_v1_pod_anti_affinity.c"


io_k8s_api_core_v1_affinity_t* instantiate_io_k8s_api_core_v1_affinity(int include_optional) {
  io_k8s_api_core_v1_affinity_t* io_k8s_api_core_v1_affinity = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_affinity = io_k8s_api_core_v1_affinity_create(
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_node_affinity(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_pod_affinity(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_pod_anti_affinity(0)
    );
  } else {
    io_k8s_api_core_v1_affinity = io_k8s_api_core_v1_affinity_create(
      NULL,
      NULL,
      NULL
    );
  }

  return io_k8s_api_core_v1_affinity;
}


#ifdef io_k8s_api_core_v1_affinity_MAIN

void test_io_k8s_api_core_v1_affinity(int include_optional) {
    io_k8s_api_core_v1_affinity_t* io_k8s_api_core_v1_affinity_1 = instantiate_io_k8s_api_core_v1_affinity(include_optional);

	cJSON* jsonio_k8s_api_core_v1_affinity_1 = io_k8s_api_core_v1_affinity_convertToJSON(io_k8s_api_core_v1_affinity_1);
	printf("io_k8s_api_core_v1_affinity :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_affinity_1));
	io_k8s_api_core_v1_affinity_t* io_k8s_api_core_v1_affinity_2 = io_k8s_api_core_v1_affinity_parseFromJSON(jsonio_k8s_api_core_v1_affinity_1);
	cJSON* jsonio_k8s_api_core_v1_affinity_2 = io_k8s_api_core_v1_affinity_convertToJSON(io_k8s_api_core_v1_affinity_2);
	printf("repeating io_k8s_api_core_v1_affinity:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_affinity_2));
}

int main() {
  test_io_k8s_api_core_v1_affinity(1);
  test_io_k8s_api_core_v1_affinity(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_affinity_MAIN
#endif // io_k8s_api_core_v1_affinity_TEST
