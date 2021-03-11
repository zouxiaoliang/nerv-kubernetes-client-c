#ifndef io_k8s_api_core_v1_container_state_running_TEST
#define io_k8s_api_core_v1_container_state_running_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_container_state_running_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_container_state_running.h"
io_k8s_api_core_v1_container_state_running_t* instantiate_io_k8s_api_core_v1_container_state_running(int include_optional);



io_k8s_api_core_v1_container_state_running_t* instantiate_io_k8s_api_core_v1_container_state_running(int include_optional) {
  io_k8s_api_core_v1_container_state_running_t* io_k8s_api_core_v1_container_state_running = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_container_state_running = io_k8s_api_core_v1_container_state_running_create(
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    io_k8s_api_core_v1_container_state_running = io_k8s_api_core_v1_container_state_running_create(
      "2013-10-20T19:20:30+01:00"
    );
  }

  return io_k8s_api_core_v1_container_state_running;
}


#ifdef io_k8s_api_core_v1_container_state_running_MAIN

void test_io_k8s_api_core_v1_container_state_running(int include_optional) {
    io_k8s_api_core_v1_container_state_running_t* io_k8s_api_core_v1_container_state_running_1 = instantiate_io_k8s_api_core_v1_container_state_running(include_optional);

	cJSON* jsonio_k8s_api_core_v1_container_state_running_1 = io_k8s_api_core_v1_container_state_running_convertToJSON(io_k8s_api_core_v1_container_state_running_1);
	printf("io_k8s_api_core_v1_container_state_running :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_container_state_running_1));
	io_k8s_api_core_v1_container_state_running_t* io_k8s_api_core_v1_container_state_running_2 = io_k8s_api_core_v1_container_state_running_parseFromJSON(jsonio_k8s_api_core_v1_container_state_running_1);
	cJSON* jsonio_k8s_api_core_v1_container_state_running_2 = io_k8s_api_core_v1_container_state_running_convertToJSON(io_k8s_api_core_v1_container_state_running_2);
	printf("repeating io_k8s_api_core_v1_container_state_running:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_container_state_running_2));
}

int main() {
  test_io_k8s_api_core_v1_container_state_running(1);
  test_io_k8s_api_core_v1_container_state_running(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_container_state_running_MAIN
#endif // io_k8s_api_core_v1_container_state_running_TEST
