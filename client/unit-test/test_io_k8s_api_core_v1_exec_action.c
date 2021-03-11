#ifndef io_k8s_api_core_v1_exec_action_TEST
#define io_k8s_api_core_v1_exec_action_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_exec_action_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_exec_action.h"
io_k8s_api_core_v1_exec_action_t* instantiate_io_k8s_api_core_v1_exec_action(int include_optional);



io_k8s_api_core_v1_exec_action_t* instantiate_io_k8s_api_core_v1_exec_action(int include_optional) {
  io_k8s_api_core_v1_exec_action_t* io_k8s_api_core_v1_exec_action = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_exec_action = io_k8s_api_core_v1_exec_action_create(
      list_create()
    );
  } else {
    io_k8s_api_core_v1_exec_action = io_k8s_api_core_v1_exec_action_create(
      list_create()
    );
  }

  return io_k8s_api_core_v1_exec_action;
}


#ifdef io_k8s_api_core_v1_exec_action_MAIN

void test_io_k8s_api_core_v1_exec_action(int include_optional) {
    io_k8s_api_core_v1_exec_action_t* io_k8s_api_core_v1_exec_action_1 = instantiate_io_k8s_api_core_v1_exec_action(include_optional);

	cJSON* jsonio_k8s_api_core_v1_exec_action_1 = io_k8s_api_core_v1_exec_action_convertToJSON(io_k8s_api_core_v1_exec_action_1);
	printf("io_k8s_api_core_v1_exec_action :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_exec_action_1));
	io_k8s_api_core_v1_exec_action_t* io_k8s_api_core_v1_exec_action_2 = io_k8s_api_core_v1_exec_action_parseFromJSON(jsonio_k8s_api_core_v1_exec_action_1);
	cJSON* jsonio_k8s_api_core_v1_exec_action_2 = io_k8s_api_core_v1_exec_action_convertToJSON(io_k8s_api_core_v1_exec_action_2);
	printf("repeating io_k8s_api_core_v1_exec_action:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_exec_action_2));
}

int main() {
  test_io_k8s_api_core_v1_exec_action(1);
  test_io_k8s_api_core_v1_exec_action(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_exec_action_MAIN
#endif // io_k8s_api_core_v1_exec_action_TEST
