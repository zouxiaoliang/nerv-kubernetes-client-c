#ifndef io_k8s_api_flowcontrol_v1beta1_limit_response_TEST
#define io_k8s_api_flowcontrol_v1beta1_limit_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_flowcontrol_v1beta1_limit_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_flowcontrol_v1beta1_limit_response.h"
io_k8s_api_flowcontrol_v1beta1_limit_response_t* instantiate_io_k8s_api_flowcontrol_v1beta1_limit_response(int include_optional);

#include "test_io_k8s_api_flowcontrol_v1beta1_queuing_configuration.c"


io_k8s_api_flowcontrol_v1beta1_limit_response_t* instantiate_io_k8s_api_flowcontrol_v1beta1_limit_response(int include_optional) {
  io_k8s_api_flowcontrol_v1beta1_limit_response_t* io_k8s_api_flowcontrol_v1beta1_limit_response = NULL;
  if (include_optional) {
    io_k8s_api_flowcontrol_v1beta1_limit_response = io_k8s_api_flowcontrol_v1beta1_limit_response_create(
       // false, not to have infinite recursion
      instantiate_io_k8s_api_flowcontrol_v1beta1_queuing_configuration(0),
      "0"
    );
  } else {
    io_k8s_api_flowcontrol_v1beta1_limit_response = io_k8s_api_flowcontrol_v1beta1_limit_response_create(
      NULL,
      "0"
    );
  }

  return io_k8s_api_flowcontrol_v1beta1_limit_response;
}


#ifdef io_k8s_api_flowcontrol_v1beta1_limit_response_MAIN

void test_io_k8s_api_flowcontrol_v1beta1_limit_response(int include_optional) {
    io_k8s_api_flowcontrol_v1beta1_limit_response_t* io_k8s_api_flowcontrol_v1beta1_limit_response_1 = instantiate_io_k8s_api_flowcontrol_v1beta1_limit_response(include_optional);

	cJSON* jsonio_k8s_api_flowcontrol_v1beta1_limit_response_1 = io_k8s_api_flowcontrol_v1beta1_limit_response_convertToJSON(io_k8s_api_flowcontrol_v1beta1_limit_response_1);
	printf("io_k8s_api_flowcontrol_v1beta1_limit_response :\n%s\n", cJSON_Print(jsonio_k8s_api_flowcontrol_v1beta1_limit_response_1));
	io_k8s_api_flowcontrol_v1beta1_limit_response_t* io_k8s_api_flowcontrol_v1beta1_limit_response_2 = io_k8s_api_flowcontrol_v1beta1_limit_response_parseFromJSON(jsonio_k8s_api_flowcontrol_v1beta1_limit_response_1);
	cJSON* jsonio_k8s_api_flowcontrol_v1beta1_limit_response_2 = io_k8s_api_flowcontrol_v1beta1_limit_response_convertToJSON(io_k8s_api_flowcontrol_v1beta1_limit_response_2);
	printf("repeating io_k8s_api_flowcontrol_v1beta1_limit_response:\n%s\n", cJSON_Print(jsonio_k8s_api_flowcontrol_v1beta1_limit_response_2));
}

int main() {
  test_io_k8s_api_flowcontrol_v1beta1_limit_response(1);
  test_io_k8s_api_flowcontrol_v1beta1_limit_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_flowcontrol_v1beta1_limit_response_MAIN
#endif // io_k8s_api_flowcontrol_v1beta1_limit_response_TEST
