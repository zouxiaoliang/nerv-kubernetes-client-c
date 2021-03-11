#ifndef io_k8s_api_storage_v1beta1_token_request_TEST
#define io_k8s_api_storage_v1beta1_token_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_storage_v1beta1_token_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_storage_v1beta1_token_request.h"
io_k8s_api_storage_v1beta1_token_request_t* instantiate_io_k8s_api_storage_v1beta1_token_request(int include_optional);



io_k8s_api_storage_v1beta1_token_request_t* instantiate_io_k8s_api_storage_v1beta1_token_request(int include_optional) {
  io_k8s_api_storage_v1beta1_token_request_t* io_k8s_api_storage_v1beta1_token_request = NULL;
  if (include_optional) {
    io_k8s_api_storage_v1beta1_token_request = io_k8s_api_storage_v1beta1_token_request_create(
      "0",
      56
    );
  } else {
    io_k8s_api_storage_v1beta1_token_request = io_k8s_api_storage_v1beta1_token_request_create(
      "0",
      56
    );
  }

  return io_k8s_api_storage_v1beta1_token_request;
}


#ifdef io_k8s_api_storage_v1beta1_token_request_MAIN

void test_io_k8s_api_storage_v1beta1_token_request(int include_optional) {
    io_k8s_api_storage_v1beta1_token_request_t* io_k8s_api_storage_v1beta1_token_request_1 = instantiate_io_k8s_api_storage_v1beta1_token_request(include_optional);

	cJSON* jsonio_k8s_api_storage_v1beta1_token_request_1 = io_k8s_api_storage_v1beta1_token_request_convertToJSON(io_k8s_api_storage_v1beta1_token_request_1);
	printf("io_k8s_api_storage_v1beta1_token_request :\n%s\n", cJSON_Print(jsonio_k8s_api_storage_v1beta1_token_request_1));
	io_k8s_api_storage_v1beta1_token_request_t* io_k8s_api_storage_v1beta1_token_request_2 = io_k8s_api_storage_v1beta1_token_request_parseFromJSON(jsonio_k8s_api_storage_v1beta1_token_request_1);
	cJSON* jsonio_k8s_api_storage_v1beta1_token_request_2 = io_k8s_api_storage_v1beta1_token_request_convertToJSON(io_k8s_api_storage_v1beta1_token_request_2);
	printf("repeating io_k8s_api_storage_v1beta1_token_request:\n%s\n", cJSON_Print(jsonio_k8s_api_storage_v1beta1_token_request_2));
}

int main() {
  test_io_k8s_api_storage_v1beta1_token_request(1);
  test_io_k8s_api_storage_v1beta1_token_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_storage_v1beta1_token_request_MAIN
#endif // io_k8s_api_storage_v1beta1_token_request_TEST
