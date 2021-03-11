#ifndef io_k8s_api_core_v1_service_port_TEST
#define io_k8s_api_core_v1_service_port_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_service_port_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_service_port.h"
io_k8s_api_core_v1_service_port_t* instantiate_io_k8s_api_core_v1_service_port(int include_optional);



io_k8s_api_core_v1_service_port_t* instantiate_io_k8s_api_core_v1_service_port(int include_optional) {
  io_k8s_api_core_v1_service_port_t* io_k8s_api_core_v1_service_port = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_service_port = io_k8s_api_core_v1_service_port_create(
      "0",
      "0",
      56,
      56,
      "0",
      "0"
    );
  } else {
    io_k8s_api_core_v1_service_port = io_k8s_api_core_v1_service_port_create(
      "0",
      "0",
      56,
      56,
      "0",
      "0"
    );
  }

  return io_k8s_api_core_v1_service_port;
}


#ifdef io_k8s_api_core_v1_service_port_MAIN

void test_io_k8s_api_core_v1_service_port(int include_optional) {
    io_k8s_api_core_v1_service_port_t* io_k8s_api_core_v1_service_port_1 = instantiate_io_k8s_api_core_v1_service_port(include_optional);

	cJSON* jsonio_k8s_api_core_v1_service_port_1 = io_k8s_api_core_v1_service_port_convertToJSON(io_k8s_api_core_v1_service_port_1);
	printf("io_k8s_api_core_v1_service_port :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_service_port_1));
	io_k8s_api_core_v1_service_port_t* io_k8s_api_core_v1_service_port_2 = io_k8s_api_core_v1_service_port_parseFromJSON(jsonio_k8s_api_core_v1_service_port_1);
	cJSON* jsonio_k8s_api_core_v1_service_port_2 = io_k8s_api_core_v1_service_port_convertToJSON(io_k8s_api_core_v1_service_port_2);
	printf("repeating io_k8s_api_core_v1_service_port:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_service_port_2));
}

int main() {
  test_io_k8s_api_core_v1_service_port(1);
  test_io_k8s_api_core_v1_service_port(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_service_port_MAIN
#endif // io_k8s_api_core_v1_service_port_TEST
