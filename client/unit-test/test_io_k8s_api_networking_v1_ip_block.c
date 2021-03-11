#ifndef io_k8s_api_networking_v1_ip_block_TEST
#define io_k8s_api_networking_v1_ip_block_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_networking_v1_ip_block_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_networking_v1_ip_block.h"
io_k8s_api_networking_v1_ip_block_t* instantiate_io_k8s_api_networking_v1_ip_block(int include_optional);



io_k8s_api_networking_v1_ip_block_t* instantiate_io_k8s_api_networking_v1_ip_block(int include_optional) {
  io_k8s_api_networking_v1_ip_block_t* io_k8s_api_networking_v1_ip_block = NULL;
  if (include_optional) {
    io_k8s_api_networking_v1_ip_block = io_k8s_api_networking_v1_ip_block_create(
      "0",
      list_create()
    );
  } else {
    io_k8s_api_networking_v1_ip_block = io_k8s_api_networking_v1_ip_block_create(
      "0",
      list_create()
    );
  }

  return io_k8s_api_networking_v1_ip_block;
}


#ifdef io_k8s_api_networking_v1_ip_block_MAIN

void test_io_k8s_api_networking_v1_ip_block(int include_optional) {
    io_k8s_api_networking_v1_ip_block_t* io_k8s_api_networking_v1_ip_block_1 = instantiate_io_k8s_api_networking_v1_ip_block(include_optional);

	cJSON* jsonio_k8s_api_networking_v1_ip_block_1 = io_k8s_api_networking_v1_ip_block_convertToJSON(io_k8s_api_networking_v1_ip_block_1);
	printf("io_k8s_api_networking_v1_ip_block :\n%s\n", cJSON_Print(jsonio_k8s_api_networking_v1_ip_block_1));
	io_k8s_api_networking_v1_ip_block_t* io_k8s_api_networking_v1_ip_block_2 = io_k8s_api_networking_v1_ip_block_parseFromJSON(jsonio_k8s_api_networking_v1_ip_block_1);
	cJSON* jsonio_k8s_api_networking_v1_ip_block_2 = io_k8s_api_networking_v1_ip_block_convertToJSON(io_k8s_api_networking_v1_ip_block_2);
	printf("repeating io_k8s_api_networking_v1_ip_block:\n%s\n", cJSON_Print(jsonio_k8s_api_networking_v1_ip_block_2));
}

int main() {
  test_io_k8s_api_networking_v1_ip_block(1);
  test_io_k8s_api_networking_v1_ip_block(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_networking_v1_ip_block_MAIN
#endif // io_k8s_api_networking_v1_ip_block_TEST
