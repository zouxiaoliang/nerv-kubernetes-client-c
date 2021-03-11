#ifndef io_k8s_api_networking_v1_ingress_service_backend_TEST
#define io_k8s_api_networking_v1_ingress_service_backend_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_networking_v1_ingress_service_backend_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_networking_v1_ingress_service_backend.h"
io_k8s_api_networking_v1_ingress_service_backend_t* instantiate_io_k8s_api_networking_v1_ingress_service_backend(int include_optional);

#include "test_io_k8s_api_networking_v1_service_backend_port.c"


io_k8s_api_networking_v1_ingress_service_backend_t* instantiate_io_k8s_api_networking_v1_ingress_service_backend(int include_optional) {
  io_k8s_api_networking_v1_ingress_service_backend_t* io_k8s_api_networking_v1_ingress_service_backend = NULL;
  if (include_optional) {
    io_k8s_api_networking_v1_ingress_service_backend = io_k8s_api_networking_v1_ingress_service_backend_create(
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_api_networking_v1_service_backend_port(0)
    );
  } else {
    io_k8s_api_networking_v1_ingress_service_backend = io_k8s_api_networking_v1_ingress_service_backend_create(
      "0",
      NULL
    );
  }

  return io_k8s_api_networking_v1_ingress_service_backend;
}


#ifdef io_k8s_api_networking_v1_ingress_service_backend_MAIN

void test_io_k8s_api_networking_v1_ingress_service_backend(int include_optional) {
    io_k8s_api_networking_v1_ingress_service_backend_t* io_k8s_api_networking_v1_ingress_service_backend_1 = instantiate_io_k8s_api_networking_v1_ingress_service_backend(include_optional);

	cJSON* jsonio_k8s_api_networking_v1_ingress_service_backend_1 = io_k8s_api_networking_v1_ingress_service_backend_convertToJSON(io_k8s_api_networking_v1_ingress_service_backend_1);
	printf("io_k8s_api_networking_v1_ingress_service_backend :\n%s\n", cJSON_Print(jsonio_k8s_api_networking_v1_ingress_service_backend_1));
	io_k8s_api_networking_v1_ingress_service_backend_t* io_k8s_api_networking_v1_ingress_service_backend_2 = io_k8s_api_networking_v1_ingress_service_backend_parseFromJSON(jsonio_k8s_api_networking_v1_ingress_service_backend_1);
	cJSON* jsonio_k8s_api_networking_v1_ingress_service_backend_2 = io_k8s_api_networking_v1_ingress_service_backend_convertToJSON(io_k8s_api_networking_v1_ingress_service_backend_2);
	printf("repeating io_k8s_api_networking_v1_ingress_service_backend:\n%s\n", cJSON_Print(jsonio_k8s_api_networking_v1_ingress_service_backend_2));
}

int main() {
  test_io_k8s_api_networking_v1_ingress_service_backend(1);
  test_io_k8s_api_networking_v1_ingress_service_backend(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_networking_v1_ingress_service_backend_MAIN
#endif // io_k8s_api_networking_v1_ingress_service_backend_TEST
