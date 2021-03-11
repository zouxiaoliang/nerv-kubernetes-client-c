#ifndef io_k8s_api_core_v1_http_header_TEST
#define io_k8s_api_core_v1_http_header_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_http_header_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_http_header.h"
io_k8s_api_core_v1_http_header_t* instantiate_io_k8s_api_core_v1_http_header(int include_optional);



io_k8s_api_core_v1_http_header_t* instantiate_io_k8s_api_core_v1_http_header(int include_optional) {
  io_k8s_api_core_v1_http_header_t* io_k8s_api_core_v1_http_header = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_http_header = io_k8s_api_core_v1_http_header_create(
      "0",
      "0"
    );
  } else {
    io_k8s_api_core_v1_http_header = io_k8s_api_core_v1_http_header_create(
      "0",
      "0"
    );
  }

  return io_k8s_api_core_v1_http_header;
}


#ifdef io_k8s_api_core_v1_http_header_MAIN

void test_io_k8s_api_core_v1_http_header(int include_optional) {
    io_k8s_api_core_v1_http_header_t* io_k8s_api_core_v1_http_header_1 = instantiate_io_k8s_api_core_v1_http_header(include_optional);

	cJSON* jsonio_k8s_api_core_v1_http_header_1 = io_k8s_api_core_v1_http_header_convertToJSON(io_k8s_api_core_v1_http_header_1);
	printf("io_k8s_api_core_v1_http_header :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_http_header_1));
	io_k8s_api_core_v1_http_header_t* io_k8s_api_core_v1_http_header_2 = io_k8s_api_core_v1_http_header_parseFromJSON(jsonio_k8s_api_core_v1_http_header_1);
	cJSON* jsonio_k8s_api_core_v1_http_header_2 = io_k8s_api_core_v1_http_header_convertToJSON(io_k8s_api_core_v1_http_header_2);
	printf("repeating io_k8s_api_core_v1_http_header:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_http_header_2));
}

int main() {
  test_io_k8s_api_core_v1_http_header(1);
  test_io_k8s_api_core_v1_http_header(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_http_header_MAIN
#endif // io_k8s_api_core_v1_http_header_TEST
