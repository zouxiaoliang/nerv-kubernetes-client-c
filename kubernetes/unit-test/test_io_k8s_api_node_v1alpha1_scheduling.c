#ifndef io_k8s_api_node_v1alpha1_scheduling_TEST
#define io_k8s_api_node_v1alpha1_scheduling_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_node_v1alpha1_scheduling_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_node_v1alpha1_scheduling.h"
io_k8s_api_node_v1alpha1_scheduling_t* instantiate_io_k8s_api_node_v1alpha1_scheduling(int include_optional);



io_k8s_api_node_v1alpha1_scheduling_t* instantiate_io_k8s_api_node_v1alpha1_scheduling(int include_optional) {
  io_k8s_api_node_v1alpha1_scheduling_t* io_k8s_api_node_v1alpha1_scheduling = NULL;
  if (include_optional) {
    io_k8s_api_node_v1alpha1_scheduling = io_k8s_api_node_v1alpha1_scheduling_create(
      list_create(),
      list_create()
    );
  } else {
    io_k8s_api_node_v1alpha1_scheduling = io_k8s_api_node_v1alpha1_scheduling_create(
      list_create(),
      list_create()
    );
  }

  return io_k8s_api_node_v1alpha1_scheduling;
}


#ifdef io_k8s_api_node_v1alpha1_scheduling_MAIN

void test_io_k8s_api_node_v1alpha1_scheduling(int include_optional) {
    io_k8s_api_node_v1alpha1_scheduling_t* io_k8s_api_node_v1alpha1_scheduling_1 = instantiate_io_k8s_api_node_v1alpha1_scheduling(include_optional);

	cJSON* jsonio_k8s_api_node_v1alpha1_scheduling_1 = io_k8s_api_node_v1alpha1_scheduling_convertToJSON(io_k8s_api_node_v1alpha1_scheduling_1);
	printf("io_k8s_api_node_v1alpha1_scheduling :\n%s\n", cJSON_Print(jsonio_k8s_api_node_v1alpha1_scheduling_1));
	io_k8s_api_node_v1alpha1_scheduling_t* io_k8s_api_node_v1alpha1_scheduling_2 = io_k8s_api_node_v1alpha1_scheduling_parseFromJSON(jsonio_k8s_api_node_v1alpha1_scheduling_1);
	cJSON* jsonio_k8s_api_node_v1alpha1_scheduling_2 = io_k8s_api_node_v1alpha1_scheduling_convertToJSON(io_k8s_api_node_v1alpha1_scheduling_2);
	printf("repeating io_k8s_api_node_v1alpha1_scheduling:\n%s\n", cJSON_Print(jsonio_k8s_api_node_v1alpha1_scheduling_2));
}

int main() {
  test_io_k8s_api_node_v1alpha1_scheduling(1);
  test_io_k8s_api_node_v1alpha1_scheduling(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_node_v1alpha1_scheduling_MAIN
#endif // io_k8s_api_node_v1alpha1_scheduling_TEST
