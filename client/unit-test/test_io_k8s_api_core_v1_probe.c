#ifndef io_k8s_api_core_v1_probe_TEST
#define io_k8s_api_core_v1_probe_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_probe_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_probe.h"
io_k8s_api_core_v1_probe_t* instantiate_io_k8s_api_core_v1_probe(int include_optional);

#include "test_io_k8s_api_core_v1_exec_action.c"
#include "test_io_k8s_api_core_v1_http_get_action.c"
#include "test_io_k8s_api_core_v1_tcp_socket_action.c"


io_k8s_api_core_v1_probe_t* instantiate_io_k8s_api_core_v1_probe(int include_optional) {
  io_k8s_api_core_v1_probe_t* io_k8s_api_core_v1_probe = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_probe = io_k8s_api_core_v1_probe_create(
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_exec_action(0),
      56,
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_http_get_action(0),
      56,
      56,
      56,
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_tcp_socket_action(0),
      56
    );
  } else {
    io_k8s_api_core_v1_probe = io_k8s_api_core_v1_probe_create(
      NULL,
      56,
      NULL,
      56,
      56,
      56,
      NULL,
      56
    );
  }

  return io_k8s_api_core_v1_probe;
}


#ifdef io_k8s_api_core_v1_probe_MAIN

void test_io_k8s_api_core_v1_probe(int include_optional) {
    io_k8s_api_core_v1_probe_t* io_k8s_api_core_v1_probe_1 = instantiate_io_k8s_api_core_v1_probe(include_optional);

	cJSON* jsonio_k8s_api_core_v1_probe_1 = io_k8s_api_core_v1_probe_convertToJSON(io_k8s_api_core_v1_probe_1);
	printf("io_k8s_api_core_v1_probe :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_probe_1));
	io_k8s_api_core_v1_probe_t* io_k8s_api_core_v1_probe_2 = io_k8s_api_core_v1_probe_parseFromJSON(jsonio_k8s_api_core_v1_probe_1);
	cJSON* jsonio_k8s_api_core_v1_probe_2 = io_k8s_api_core_v1_probe_convertToJSON(io_k8s_api_core_v1_probe_2);
	printf("repeating io_k8s_api_core_v1_probe:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_probe_2));
}

int main() {
  test_io_k8s_api_core_v1_probe(1);
  test_io_k8s_api_core_v1_probe(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_probe_MAIN
#endif // io_k8s_api_core_v1_probe_TEST
