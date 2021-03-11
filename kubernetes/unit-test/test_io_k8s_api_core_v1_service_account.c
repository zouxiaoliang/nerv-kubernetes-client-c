#ifndef io_k8s_api_core_v1_service_account_TEST
#define io_k8s_api_core_v1_service_account_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_service_account_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_service_account.h"
io_k8s_api_core_v1_service_account_t* instantiate_io_k8s_api_core_v1_service_account(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"


io_k8s_api_core_v1_service_account_t* instantiate_io_k8s_api_core_v1_service_account(int include_optional) {
  io_k8s_api_core_v1_service_account_t* io_k8s_api_core_v1_service_account = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_service_account = io_k8s_api_core_v1_service_account_create(
      "0",
      1,
      list_create(),
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
      list_create()
    );
  } else {
    io_k8s_api_core_v1_service_account = io_k8s_api_core_v1_service_account_create(
      "0",
      1,
      list_create(),
      "0",
      NULL,
      list_create()
    );
  }

  return io_k8s_api_core_v1_service_account;
}


#ifdef io_k8s_api_core_v1_service_account_MAIN

void test_io_k8s_api_core_v1_service_account(int include_optional) {
    io_k8s_api_core_v1_service_account_t* io_k8s_api_core_v1_service_account_1 = instantiate_io_k8s_api_core_v1_service_account(include_optional);

	cJSON* jsonio_k8s_api_core_v1_service_account_1 = io_k8s_api_core_v1_service_account_convertToJSON(io_k8s_api_core_v1_service_account_1);
	printf("io_k8s_api_core_v1_service_account :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_service_account_1));
	io_k8s_api_core_v1_service_account_t* io_k8s_api_core_v1_service_account_2 = io_k8s_api_core_v1_service_account_parseFromJSON(jsonio_k8s_api_core_v1_service_account_1);
	cJSON* jsonio_k8s_api_core_v1_service_account_2 = io_k8s_api_core_v1_service_account_convertToJSON(io_k8s_api_core_v1_service_account_2);
	printf("repeating io_k8s_api_core_v1_service_account:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_service_account_2));
}

int main() {
  test_io_k8s_api_core_v1_service_account(1);
  test_io_k8s_api_core_v1_service_account(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_service_account_MAIN
#endif // io_k8s_api_core_v1_service_account_TEST
