#ifndef io_k8s_api_core_v1_container_state_TEST
#define io_k8s_api_core_v1_container_state_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_container_state_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_container_state.h"
io_k8s_api_core_v1_container_state_t* instantiate_io_k8s_api_core_v1_container_state(int include_optional);

#include "test_io_k8s_api_core_v1_container_state_running.c"
#include "test_io_k8s_api_core_v1_container_state_terminated.c"
#include "test_io_k8s_api_core_v1_container_state_waiting.c"


io_k8s_api_core_v1_container_state_t* instantiate_io_k8s_api_core_v1_container_state(int include_optional) {
  io_k8s_api_core_v1_container_state_t* io_k8s_api_core_v1_container_state = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_container_state = io_k8s_api_core_v1_container_state_create(
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_container_state_running(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_container_state_terminated(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_container_state_waiting(0)
    );
  } else {
    io_k8s_api_core_v1_container_state = io_k8s_api_core_v1_container_state_create(
      NULL,
      NULL,
      NULL
    );
  }

  return io_k8s_api_core_v1_container_state;
}


#ifdef io_k8s_api_core_v1_container_state_MAIN

void test_io_k8s_api_core_v1_container_state(int include_optional) {
    io_k8s_api_core_v1_container_state_t* io_k8s_api_core_v1_container_state_1 = instantiate_io_k8s_api_core_v1_container_state(include_optional);

	cJSON* jsonio_k8s_api_core_v1_container_state_1 = io_k8s_api_core_v1_container_state_convertToJSON(io_k8s_api_core_v1_container_state_1);
	printf("io_k8s_api_core_v1_container_state :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_container_state_1));
	io_k8s_api_core_v1_container_state_t* io_k8s_api_core_v1_container_state_2 = io_k8s_api_core_v1_container_state_parseFromJSON(jsonio_k8s_api_core_v1_container_state_1);
	cJSON* jsonio_k8s_api_core_v1_container_state_2 = io_k8s_api_core_v1_container_state_convertToJSON(io_k8s_api_core_v1_container_state_2);
	printf("repeating io_k8s_api_core_v1_container_state:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_container_state_2));
}

int main() {
  test_io_k8s_api_core_v1_container_state(1);
  test_io_k8s_api_core_v1_container_state(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_container_state_MAIN
#endif // io_k8s_api_core_v1_container_state_TEST
