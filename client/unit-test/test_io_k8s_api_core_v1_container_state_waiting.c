#ifndef io_k8s_api_core_v1_container_state_waiting_TEST
#define io_k8s_api_core_v1_container_state_waiting_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_container_state_waiting_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_container_state_waiting.h"
io_k8s_api_core_v1_container_state_waiting_t* instantiate_io_k8s_api_core_v1_container_state_waiting(int include_optional);



io_k8s_api_core_v1_container_state_waiting_t* instantiate_io_k8s_api_core_v1_container_state_waiting(int include_optional) {
  io_k8s_api_core_v1_container_state_waiting_t* io_k8s_api_core_v1_container_state_waiting = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_container_state_waiting = io_k8s_api_core_v1_container_state_waiting_create(
      "0",
      "0"
    );
  } else {
    io_k8s_api_core_v1_container_state_waiting = io_k8s_api_core_v1_container_state_waiting_create(
      "0",
      "0"
    );
  }

  return io_k8s_api_core_v1_container_state_waiting;
}


#ifdef io_k8s_api_core_v1_container_state_waiting_MAIN

void test_io_k8s_api_core_v1_container_state_waiting(int include_optional) {
    io_k8s_api_core_v1_container_state_waiting_t* io_k8s_api_core_v1_container_state_waiting_1 = instantiate_io_k8s_api_core_v1_container_state_waiting(include_optional);

	cJSON* jsonio_k8s_api_core_v1_container_state_waiting_1 = io_k8s_api_core_v1_container_state_waiting_convertToJSON(io_k8s_api_core_v1_container_state_waiting_1);
	printf("io_k8s_api_core_v1_container_state_waiting :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_container_state_waiting_1));
	io_k8s_api_core_v1_container_state_waiting_t* io_k8s_api_core_v1_container_state_waiting_2 = io_k8s_api_core_v1_container_state_waiting_parseFromJSON(jsonio_k8s_api_core_v1_container_state_waiting_1);
	cJSON* jsonio_k8s_api_core_v1_container_state_waiting_2 = io_k8s_api_core_v1_container_state_waiting_convertToJSON(io_k8s_api_core_v1_container_state_waiting_2);
	printf("repeating io_k8s_api_core_v1_container_state_waiting:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_container_state_waiting_2));
}

int main() {
  test_io_k8s_api_core_v1_container_state_waiting(1);
  test_io_k8s_api_core_v1_container_state_waiting(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_container_state_waiting_MAIN
#endif // io_k8s_api_core_v1_container_state_waiting_TEST
