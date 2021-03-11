#ifndef io_k8s_api_core_v1_handler_TEST
#define io_k8s_api_core_v1_handler_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_handler_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_handler.h"
io_k8s_api_core_v1_handler_t* instantiate_io_k8s_api_core_v1_handler(int include_optional);

#include "test_io_k8s_api_core_v1_exec_action.c"
#include "test_io_k8s_api_core_v1_http_get_action.c"
#include "test_io_k8s_api_core_v1_tcp_socket_action.c"


io_k8s_api_core_v1_handler_t* instantiate_io_k8s_api_core_v1_handler(int include_optional) {
  io_k8s_api_core_v1_handler_t* io_k8s_api_core_v1_handler = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_handler = io_k8s_api_core_v1_handler_create(
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_exec_action(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_http_get_action(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_tcp_socket_action(0)
    );
  } else {
    io_k8s_api_core_v1_handler = io_k8s_api_core_v1_handler_create(
      NULL,
      NULL,
      NULL
    );
  }

  return io_k8s_api_core_v1_handler;
}


#ifdef io_k8s_api_core_v1_handler_MAIN

void test_io_k8s_api_core_v1_handler(int include_optional) {
    io_k8s_api_core_v1_handler_t* io_k8s_api_core_v1_handler_1 = instantiate_io_k8s_api_core_v1_handler(include_optional);

	cJSON* jsonio_k8s_api_core_v1_handler_1 = io_k8s_api_core_v1_handler_convertToJSON(io_k8s_api_core_v1_handler_1);
	printf("io_k8s_api_core_v1_handler :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_handler_1));
	io_k8s_api_core_v1_handler_t* io_k8s_api_core_v1_handler_2 = io_k8s_api_core_v1_handler_parseFromJSON(jsonio_k8s_api_core_v1_handler_1);
	cJSON* jsonio_k8s_api_core_v1_handler_2 = io_k8s_api_core_v1_handler_convertToJSON(io_k8s_api_core_v1_handler_2);
	printf("repeating io_k8s_api_core_v1_handler:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_handler_2));
}

int main() {
  test_io_k8s_api_core_v1_handler(1);
  test_io_k8s_api_core_v1_handler(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_handler_MAIN
#endif // io_k8s_api_core_v1_handler_TEST
