#ifndef io_k8s_api_networking_v1beta1_ingress_rule_TEST
#define io_k8s_api_networking_v1beta1_ingress_rule_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_networking_v1beta1_ingress_rule_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_networking_v1beta1_ingress_rule.h"
io_k8s_api_networking_v1beta1_ingress_rule_t* instantiate_io_k8s_api_networking_v1beta1_ingress_rule(int include_optional);

#include "test_io_k8s_api_networking_v1beta1_http_ingress_rule_value.c"


io_k8s_api_networking_v1beta1_ingress_rule_t* instantiate_io_k8s_api_networking_v1beta1_ingress_rule(int include_optional) {
  io_k8s_api_networking_v1beta1_ingress_rule_t* io_k8s_api_networking_v1beta1_ingress_rule = NULL;
  if (include_optional) {
    io_k8s_api_networking_v1beta1_ingress_rule = io_k8s_api_networking_v1beta1_ingress_rule_create(
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_api_networking_v1beta1_http_ingress_rule_value(0)
    );
  } else {
    io_k8s_api_networking_v1beta1_ingress_rule = io_k8s_api_networking_v1beta1_ingress_rule_create(
      "0",
      NULL
    );
  }

  return io_k8s_api_networking_v1beta1_ingress_rule;
}


#ifdef io_k8s_api_networking_v1beta1_ingress_rule_MAIN

void test_io_k8s_api_networking_v1beta1_ingress_rule(int include_optional) {
    io_k8s_api_networking_v1beta1_ingress_rule_t* io_k8s_api_networking_v1beta1_ingress_rule_1 = instantiate_io_k8s_api_networking_v1beta1_ingress_rule(include_optional);

	cJSON* jsonio_k8s_api_networking_v1beta1_ingress_rule_1 = io_k8s_api_networking_v1beta1_ingress_rule_convertToJSON(io_k8s_api_networking_v1beta1_ingress_rule_1);
	printf("io_k8s_api_networking_v1beta1_ingress_rule :\n%s\n", cJSON_Print(jsonio_k8s_api_networking_v1beta1_ingress_rule_1));
	io_k8s_api_networking_v1beta1_ingress_rule_t* io_k8s_api_networking_v1beta1_ingress_rule_2 = io_k8s_api_networking_v1beta1_ingress_rule_parseFromJSON(jsonio_k8s_api_networking_v1beta1_ingress_rule_1);
	cJSON* jsonio_k8s_api_networking_v1beta1_ingress_rule_2 = io_k8s_api_networking_v1beta1_ingress_rule_convertToJSON(io_k8s_api_networking_v1beta1_ingress_rule_2);
	printf("repeating io_k8s_api_networking_v1beta1_ingress_rule:\n%s\n", cJSON_Print(jsonio_k8s_api_networking_v1beta1_ingress_rule_2));
}

int main() {
  test_io_k8s_api_networking_v1beta1_ingress_rule(1);
  test_io_k8s_api_networking_v1beta1_ingress_rule(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_networking_v1beta1_ingress_rule_MAIN
#endif // io_k8s_api_networking_v1beta1_ingress_rule_TEST
