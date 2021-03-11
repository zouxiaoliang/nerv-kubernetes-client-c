#ifndef io_k8s_api_node_v1beta1_overhead_TEST
#define io_k8s_api_node_v1beta1_overhead_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_node_v1beta1_overhead_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_node_v1beta1_overhead.h"
io_k8s_api_node_v1beta1_overhead_t* instantiate_io_k8s_api_node_v1beta1_overhead(int include_optional);



io_k8s_api_node_v1beta1_overhead_t* instantiate_io_k8s_api_node_v1beta1_overhead(int include_optional) {
  io_k8s_api_node_v1beta1_overhead_t* io_k8s_api_node_v1beta1_overhead = NULL;
  if (include_optional) {
    io_k8s_api_node_v1beta1_overhead = io_k8s_api_node_v1beta1_overhead_create(
      list_create()
    );
  } else {
    io_k8s_api_node_v1beta1_overhead = io_k8s_api_node_v1beta1_overhead_create(
      list_create()
    );
  }

  return io_k8s_api_node_v1beta1_overhead;
}


#ifdef io_k8s_api_node_v1beta1_overhead_MAIN

void test_io_k8s_api_node_v1beta1_overhead(int include_optional) {
    io_k8s_api_node_v1beta1_overhead_t* io_k8s_api_node_v1beta1_overhead_1 = instantiate_io_k8s_api_node_v1beta1_overhead(include_optional);

	cJSON* jsonio_k8s_api_node_v1beta1_overhead_1 = io_k8s_api_node_v1beta1_overhead_convertToJSON(io_k8s_api_node_v1beta1_overhead_1);
	printf("io_k8s_api_node_v1beta1_overhead :\n%s\n", cJSON_Print(jsonio_k8s_api_node_v1beta1_overhead_1));
	io_k8s_api_node_v1beta1_overhead_t* io_k8s_api_node_v1beta1_overhead_2 = io_k8s_api_node_v1beta1_overhead_parseFromJSON(jsonio_k8s_api_node_v1beta1_overhead_1);
	cJSON* jsonio_k8s_api_node_v1beta1_overhead_2 = io_k8s_api_node_v1beta1_overhead_convertToJSON(io_k8s_api_node_v1beta1_overhead_2);
	printf("repeating io_k8s_api_node_v1beta1_overhead:\n%s\n", cJSON_Print(jsonio_k8s_api_node_v1beta1_overhead_2));
}

int main() {
  test_io_k8s_api_node_v1beta1_overhead(1);
  test_io_k8s_api_node_v1beta1_overhead(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_node_v1beta1_overhead_MAIN
#endif // io_k8s_api_node_v1beta1_overhead_TEST
