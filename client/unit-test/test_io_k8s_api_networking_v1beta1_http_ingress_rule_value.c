#ifndef io_k8s_api_networking_v1beta1_http_ingress_rule_value_TEST
#define io_k8s_api_networking_v1beta1_http_ingress_rule_value_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_networking_v1beta1_http_ingress_rule_value_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_networking_v1beta1_http_ingress_rule_value.h"
io_k8s_api_networking_v1beta1_http_ingress_rule_value_t* instantiate_io_k8s_api_networking_v1beta1_http_ingress_rule_value(int include_optional);



io_k8s_api_networking_v1beta1_http_ingress_rule_value_t* instantiate_io_k8s_api_networking_v1beta1_http_ingress_rule_value(int include_optional) {
  io_k8s_api_networking_v1beta1_http_ingress_rule_value_t* io_k8s_api_networking_v1beta1_http_ingress_rule_value = NULL;
  if (include_optional) {
    io_k8s_api_networking_v1beta1_http_ingress_rule_value = io_k8s_api_networking_v1beta1_http_ingress_rule_value_create(
      list_create()
    );
  } else {
    io_k8s_api_networking_v1beta1_http_ingress_rule_value = io_k8s_api_networking_v1beta1_http_ingress_rule_value_create(
      list_create()
    );
  }

  return io_k8s_api_networking_v1beta1_http_ingress_rule_value;
}


#ifdef io_k8s_api_networking_v1beta1_http_ingress_rule_value_MAIN

void test_io_k8s_api_networking_v1beta1_http_ingress_rule_value(int include_optional) {
    io_k8s_api_networking_v1beta1_http_ingress_rule_value_t* io_k8s_api_networking_v1beta1_http_ingress_rule_value_1 = instantiate_io_k8s_api_networking_v1beta1_http_ingress_rule_value(include_optional);

	cJSON* jsonio_k8s_api_networking_v1beta1_http_ingress_rule_value_1 = io_k8s_api_networking_v1beta1_http_ingress_rule_value_convertToJSON(io_k8s_api_networking_v1beta1_http_ingress_rule_value_1);
	printf("io_k8s_api_networking_v1beta1_http_ingress_rule_value :\n%s\n", cJSON_Print(jsonio_k8s_api_networking_v1beta1_http_ingress_rule_value_1));
	io_k8s_api_networking_v1beta1_http_ingress_rule_value_t* io_k8s_api_networking_v1beta1_http_ingress_rule_value_2 = io_k8s_api_networking_v1beta1_http_ingress_rule_value_parseFromJSON(jsonio_k8s_api_networking_v1beta1_http_ingress_rule_value_1);
	cJSON* jsonio_k8s_api_networking_v1beta1_http_ingress_rule_value_2 = io_k8s_api_networking_v1beta1_http_ingress_rule_value_convertToJSON(io_k8s_api_networking_v1beta1_http_ingress_rule_value_2);
	printf("repeating io_k8s_api_networking_v1beta1_http_ingress_rule_value:\n%s\n", cJSON_Print(jsonio_k8s_api_networking_v1beta1_http_ingress_rule_value_2));
}

int main() {
  test_io_k8s_api_networking_v1beta1_http_ingress_rule_value(1);
  test_io_k8s_api_networking_v1beta1_http_ingress_rule_value(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_networking_v1beta1_http_ingress_rule_value_MAIN
#endif // io_k8s_api_networking_v1beta1_http_ingress_rule_value_TEST
