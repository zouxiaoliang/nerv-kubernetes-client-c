#ifndef io_k8s_api_networking_v1_http_ingress_path_TEST
#define io_k8s_api_networking_v1_http_ingress_path_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_networking_v1_http_ingress_path_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_networking_v1_http_ingress_path.h"
io_k8s_api_networking_v1_http_ingress_path_t* instantiate_io_k8s_api_networking_v1_http_ingress_path(int include_optional);

#include "test_io_k8s_api_networking_v1_ingress_backend.c"


io_k8s_api_networking_v1_http_ingress_path_t* instantiate_io_k8s_api_networking_v1_http_ingress_path(int include_optional) {
  io_k8s_api_networking_v1_http_ingress_path_t* io_k8s_api_networking_v1_http_ingress_path = NULL;
  if (include_optional) {
    io_k8s_api_networking_v1_http_ingress_path = io_k8s_api_networking_v1_http_ingress_path_create(
       // false, not to have infinite recursion
      instantiate_io_k8s_api_networking_v1_ingress_backend(0),
      "0",
      "0"
    );
  } else {
    io_k8s_api_networking_v1_http_ingress_path = io_k8s_api_networking_v1_http_ingress_path_create(
      NULL,
      "0",
      "0"
    );
  }

  return io_k8s_api_networking_v1_http_ingress_path;
}


#ifdef io_k8s_api_networking_v1_http_ingress_path_MAIN

void test_io_k8s_api_networking_v1_http_ingress_path(int include_optional) {
    io_k8s_api_networking_v1_http_ingress_path_t* io_k8s_api_networking_v1_http_ingress_path_1 = instantiate_io_k8s_api_networking_v1_http_ingress_path(include_optional);

	cJSON* jsonio_k8s_api_networking_v1_http_ingress_path_1 = io_k8s_api_networking_v1_http_ingress_path_convertToJSON(io_k8s_api_networking_v1_http_ingress_path_1);
	printf("io_k8s_api_networking_v1_http_ingress_path :\n%s\n", cJSON_Print(jsonio_k8s_api_networking_v1_http_ingress_path_1));
	io_k8s_api_networking_v1_http_ingress_path_t* io_k8s_api_networking_v1_http_ingress_path_2 = io_k8s_api_networking_v1_http_ingress_path_parseFromJSON(jsonio_k8s_api_networking_v1_http_ingress_path_1);
	cJSON* jsonio_k8s_api_networking_v1_http_ingress_path_2 = io_k8s_api_networking_v1_http_ingress_path_convertToJSON(io_k8s_api_networking_v1_http_ingress_path_2);
	printf("repeating io_k8s_api_networking_v1_http_ingress_path:\n%s\n", cJSON_Print(jsonio_k8s_api_networking_v1_http_ingress_path_2));
}

int main() {
  test_io_k8s_api_networking_v1_http_ingress_path(1);
  test_io_k8s_api_networking_v1_http_ingress_path(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_networking_v1_http_ingress_path_MAIN
#endif // io_k8s_api_networking_v1_http_ingress_path_TEST
