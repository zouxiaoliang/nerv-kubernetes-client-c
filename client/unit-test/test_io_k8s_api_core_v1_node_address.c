#ifndef io_k8s_api_core_v1_node_address_TEST
#define io_k8s_api_core_v1_node_address_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_node_address_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_node_address.h"
io_k8s_api_core_v1_node_address_t* instantiate_io_k8s_api_core_v1_node_address(int include_optional);



io_k8s_api_core_v1_node_address_t* instantiate_io_k8s_api_core_v1_node_address(int include_optional) {
  io_k8s_api_core_v1_node_address_t* io_k8s_api_core_v1_node_address = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_node_address = io_k8s_api_core_v1_node_address_create(
      "0",
      "0"
    );
  } else {
    io_k8s_api_core_v1_node_address = io_k8s_api_core_v1_node_address_create(
      "0",
      "0"
    );
  }

  return io_k8s_api_core_v1_node_address;
}


#ifdef io_k8s_api_core_v1_node_address_MAIN

void test_io_k8s_api_core_v1_node_address(int include_optional) {
    io_k8s_api_core_v1_node_address_t* io_k8s_api_core_v1_node_address_1 = instantiate_io_k8s_api_core_v1_node_address(include_optional);

	cJSON* jsonio_k8s_api_core_v1_node_address_1 = io_k8s_api_core_v1_node_address_convertToJSON(io_k8s_api_core_v1_node_address_1);
	printf("io_k8s_api_core_v1_node_address :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_node_address_1));
	io_k8s_api_core_v1_node_address_t* io_k8s_api_core_v1_node_address_2 = io_k8s_api_core_v1_node_address_parseFromJSON(jsonio_k8s_api_core_v1_node_address_1);
	cJSON* jsonio_k8s_api_core_v1_node_address_2 = io_k8s_api_core_v1_node_address_convertToJSON(io_k8s_api_core_v1_node_address_2);
	printf("repeating io_k8s_api_core_v1_node_address:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_node_address_2));
}

int main() {
  test_io_k8s_api_core_v1_node_address(1);
  test_io_k8s_api_core_v1_node_address(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_node_address_MAIN
#endif // io_k8s_api_core_v1_node_address_TEST
