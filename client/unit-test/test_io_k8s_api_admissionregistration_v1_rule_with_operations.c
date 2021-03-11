#ifndef io_k8s_api_admissionregistration_v1_rule_with_operations_TEST
#define io_k8s_api_admissionregistration_v1_rule_with_operations_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_admissionregistration_v1_rule_with_operations_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_admissionregistration_v1_rule_with_operations.h"
io_k8s_api_admissionregistration_v1_rule_with_operations_t* instantiate_io_k8s_api_admissionregistration_v1_rule_with_operations(int include_optional);



io_k8s_api_admissionregistration_v1_rule_with_operations_t* instantiate_io_k8s_api_admissionregistration_v1_rule_with_operations(int include_optional) {
  io_k8s_api_admissionregistration_v1_rule_with_operations_t* io_k8s_api_admissionregistration_v1_rule_with_operations = NULL;
  if (include_optional) {
    io_k8s_api_admissionregistration_v1_rule_with_operations = io_k8s_api_admissionregistration_v1_rule_with_operations_create(
      list_create(),
      list_create(),
      list_create(),
      list_create(),
      "0"
    );
  } else {
    io_k8s_api_admissionregistration_v1_rule_with_operations = io_k8s_api_admissionregistration_v1_rule_with_operations_create(
      list_create(),
      list_create(),
      list_create(),
      list_create(),
      "0"
    );
  }

  return io_k8s_api_admissionregistration_v1_rule_with_operations;
}


#ifdef io_k8s_api_admissionregistration_v1_rule_with_operations_MAIN

void test_io_k8s_api_admissionregistration_v1_rule_with_operations(int include_optional) {
    io_k8s_api_admissionregistration_v1_rule_with_operations_t* io_k8s_api_admissionregistration_v1_rule_with_operations_1 = instantiate_io_k8s_api_admissionregistration_v1_rule_with_operations(include_optional);

	cJSON* jsonio_k8s_api_admissionregistration_v1_rule_with_operations_1 = io_k8s_api_admissionregistration_v1_rule_with_operations_convertToJSON(io_k8s_api_admissionregistration_v1_rule_with_operations_1);
	printf("io_k8s_api_admissionregistration_v1_rule_with_operations :\n%s\n", cJSON_Print(jsonio_k8s_api_admissionregistration_v1_rule_with_operations_1));
	io_k8s_api_admissionregistration_v1_rule_with_operations_t* io_k8s_api_admissionregistration_v1_rule_with_operations_2 = io_k8s_api_admissionregistration_v1_rule_with_operations_parseFromJSON(jsonio_k8s_api_admissionregistration_v1_rule_with_operations_1);
	cJSON* jsonio_k8s_api_admissionregistration_v1_rule_with_operations_2 = io_k8s_api_admissionregistration_v1_rule_with_operations_convertToJSON(io_k8s_api_admissionregistration_v1_rule_with_operations_2);
	printf("repeating io_k8s_api_admissionregistration_v1_rule_with_operations:\n%s\n", cJSON_Print(jsonio_k8s_api_admissionregistration_v1_rule_with_operations_2));
}

int main() {
  test_io_k8s_api_admissionregistration_v1_rule_with_operations(1);
  test_io_k8s_api_admissionregistration_v1_rule_with_operations(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_admissionregistration_v1_rule_with_operations_MAIN
#endif // io_k8s_api_admissionregistration_v1_rule_with_operations_TEST
