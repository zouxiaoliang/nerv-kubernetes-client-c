#ifndef io_k8s_api_core_v1_endpoint_address_TEST
#define io_k8s_api_core_v1_endpoint_address_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_endpoint_address_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_endpoint_address.h"
io_k8s_api_core_v1_endpoint_address_t* instantiate_io_k8s_api_core_v1_endpoint_address(int include_optional);

#include "test_io_k8s_api_core_v1_object_reference.c"


io_k8s_api_core_v1_endpoint_address_t* instantiate_io_k8s_api_core_v1_endpoint_address(int include_optional) {
  io_k8s_api_core_v1_endpoint_address_t* io_k8s_api_core_v1_endpoint_address = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_endpoint_address = io_k8s_api_core_v1_endpoint_address_create(
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_object_reference(0)
    );
  } else {
    io_k8s_api_core_v1_endpoint_address = io_k8s_api_core_v1_endpoint_address_create(
      "0",
      "0",
      "0",
      NULL
    );
  }

  return io_k8s_api_core_v1_endpoint_address;
}


#ifdef io_k8s_api_core_v1_endpoint_address_MAIN

void test_io_k8s_api_core_v1_endpoint_address(int include_optional) {
    io_k8s_api_core_v1_endpoint_address_t* io_k8s_api_core_v1_endpoint_address_1 = instantiate_io_k8s_api_core_v1_endpoint_address(include_optional);

	cJSON* jsonio_k8s_api_core_v1_endpoint_address_1 = io_k8s_api_core_v1_endpoint_address_convertToJSON(io_k8s_api_core_v1_endpoint_address_1);
	printf("io_k8s_api_core_v1_endpoint_address :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_endpoint_address_1));
	io_k8s_api_core_v1_endpoint_address_t* io_k8s_api_core_v1_endpoint_address_2 = io_k8s_api_core_v1_endpoint_address_parseFromJSON(jsonio_k8s_api_core_v1_endpoint_address_1);
	cJSON* jsonio_k8s_api_core_v1_endpoint_address_2 = io_k8s_api_core_v1_endpoint_address_convertToJSON(io_k8s_api_core_v1_endpoint_address_2);
	printf("repeating io_k8s_api_core_v1_endpoint_address:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_endpoint_address_2));
}

int main() {
  test_io_k8s_api_core_v1_endpoint_address(1);
  test_io_k8s_api_core_v1_endpoint_address(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_endpoint_address_MAIN
#endif // io_k8s_api_core_v1_endpoint_address_TEST
