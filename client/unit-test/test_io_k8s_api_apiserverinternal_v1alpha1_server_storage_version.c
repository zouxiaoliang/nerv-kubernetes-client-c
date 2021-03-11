#ifndef io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_TEST
#define io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_apiserverinternal_v1alpha1_server_storage_version.h"
io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t* instantiate_io_k8s_api_apiserverinternal_v1alpha1_server_storage_version(int include_optional);



io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t* instantiate_io_k8s_api_apiserverinternal_v1alpha1_server_storage_version(int include_optional) {
  io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t* io_k8s_api_apiserverinternal_v1alpha1_server_storage_version = NULL;
  if (include_optional) {
    io_k8s_api_apiserverinternal_v1alpha1_server_storage_version = io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_create(
      "0",
      list_create(),
      "0"
    );
  } else {
    io_k8s_api_apiserverinternal_v1alpha1_server_storage_version = io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_create(
      "0",
      list_create(),
      "0"
    );
  }

  return io_k8s_api_apiserverinternal_v1alpha1_server_storage_version;
}


#ifdef io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_MAIN

void test_io_k8s_api_apiserverinternal_v1alpha1_server_storage_version(int include_optional) {
    io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t* io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_1 = instantiate_io_k8s_api_apiserverinternal_v1alpha1_server_storage_version(include_optional);

	cJSON* jsonio_k8s_api_apiserverinternal_v1alpha1_server_storage_version_1 = io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_convertToJSON(io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_1);
	printf("io_k8s_api_apiserverinternal_v1alpha1_server_storage_version :\n%s\n", cJSON_Print(jsonio_k8s_api_apiserverinternal_v1alpha1_server_storage_version_1));
	io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t* io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_2 = io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_parseFromJSON(jsonio_k8s_api_apiserverinternal_v1alpha1_server_storage_version_1);
	cJSON* jsonio_k8s_api_apiserverinternal_v1alpha1_server_storage_version_2 = io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_convertToJSON(io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_2);
	printf("repeating io_k8s_api_apiserverinternal_v1alpha1_server_storage_version:\n%s\n", cJSON_Print(jsonio_k8s_api_apiserverinternal_v1alpha1_server_storage_version_2));
}

int main() {
  test_io_k8s_api_apiserverinternal_v1alpha1_server_storage_version(1);
  test_io_k8s_api_apiserverinternal_v1alpha1_server_storage_version(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_MAIN
#endif // io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_TEST
