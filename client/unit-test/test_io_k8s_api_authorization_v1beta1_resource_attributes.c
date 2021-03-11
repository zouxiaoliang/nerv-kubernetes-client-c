#ifndef io_k8s_api_authorization_v1beta1_resource_attributes_TEST
#define io_k8s_api_authorization_v1beta1_resource_attributes_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_authorization_v1beta1_resource_attributes_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_authorization_v1beta1_resource_attributes.h"
io_k8s_api_authorization_v1beta1_resource_attributes_t* instantiate_io_k8s_api_authorization_v1beta1_resource_attributes(int include_optional);



io_k8s_api_authorization_v1beta1_resource_attributes_t* instantiate_io_k8s_api_authorization_v1beta1_resource_attributes(int include_optional) {
  io_k8s_api_authorization_v1beta1_resource_attributes_t* io_k8s_api_authorization_v1beta1_resource_attributes = NULL;
  if (include_optional) {
    io_k8s_api_authorization_v1beta1_resource_attributes = io_k8s_api_authorization_v1beta1_resource_attributes_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    io_k8s_api_authorization_v1beta1_resource_attributes = io_k8s_api_authorization_v1beta1_resource_attributes_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return io_k8s_api_authorization_v1beta1_resource_attributes;
}


#ifdef io_k8s_api_authorization_v1beta1_resource_attributes_MAIN

void test_io_k8s_api_authorization_v1beta1_resource_attributes(int include_optional) {
    io_k8s_api_authorization_v1beta1_resource_attributes_t* io_k8s_api_authorization_v1beta1_resource_attributes_1 = instantiate_io_k8s_api_authorization_v1beta1_resource_attributes(include_optional);

	cJSON* jsonio_k8s_api_authorization_v1beta1_resource_attributes_1 = io_k8s_api_authorization_v1beta1_resource_attributes_convertToJSON(io_k8s_api_authorization_v1beta1_resource_attributes_1);
	printf("io_k8s_api_authorization_v1beta1_resource_attributes :\n%s\n", cJSON_Print(jsonio_k8s_api_authorization_v1beta1_resource_attributes_1));
	io_k8s_api_authorization_v1beta1_resource_attributes_t* io_k8s_api_authorization_v1beta1_resource_attributes_2 = io_k8s_api_authorization_v1beta1_resource_attributes_parseFromJSON(jsonio_k8s_api_authorization_v1beta1_resource_attributes_1);
	cJSON* jsonio_k8s_api_authorization_v1beta1_resource_attributes_2 = io_k8s_api_authorization_v1beta1_resource_attributes_convertToJSON(io_k8s_api_authorization_v1beta1_resource_attributes_2);
	printf("repeating io_k8s_api_authorization_v1beta1_resource_attributes:\n%s\n", cJSON_Print(jsonio_k8s_api_authorization_v1beta1_resource_attributes_2));
}

int main() {
  test_io_k8s_api_authorization_v1beta1_resource_attributes(1);
  test_io_k8s_api_authorization_v1beta1_resource_attributes(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_authorization_v1beta1_resource_attributes_MAIN
#endif // io_k8s_api_authorization_v1beta1_resource_attributes_TEST
