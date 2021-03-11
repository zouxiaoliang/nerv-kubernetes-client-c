#ifndef io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_TEST
#define io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition.h"
io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t* instantiate_io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition(int include_optional);



io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t* instantiate_io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition(int include_optional) {
  io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t* io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition = NULL;
  if (include_optional) {
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition = io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_create(
      "2013-10-20T19:20:30+01:00",
      "0",
      56,
      "0",
      "0",
      "0"
    );
  } else {
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition = io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_create(
      "2013-10-20T19:20:30+01:00",
      "0",
      56,
      "0",
      "0",
      "0"
    );
  }

  return io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition;
}


#ifdef io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_MAIN

void test_io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition(int include_optional) {
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t* io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_1 = instantiate_io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition(include_optional);

	cJSON* jsonio_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_1 = io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_convertToJSON(io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_1);
	printf("io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition :\n%s\n", cJSON_Print(jsonio_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_1));
	io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t* io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_2 = io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_parseFromJSON(jsonio_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_1);
	cJSON* jsonio_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_2 = io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_convertToJSON(io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_2);
	printf("repeating io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition:\n%s\n", cJSON_Print(jsonio_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_2));
}

int main() {
  test_io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition(1);
  test_io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_MAIN
#endif // io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_TEST
