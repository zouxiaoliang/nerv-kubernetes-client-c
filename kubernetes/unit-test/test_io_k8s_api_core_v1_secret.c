#ifndef io_k8s_api_core_v1_secret_TEST
#define io_k8s_api_core_v1_secret_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_secret_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_secret.h"
io_k8s_api_core_v1_secret_t* instantiate_io_k8s_api_core_v1_secret(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"


io_k8s_api_core_v1_secret_t* instantiate_io_k8s_api_core_v1_secret(int include_optional) {
  io_k8s_api_core_v1_secret_t* io_k8s_api_core_v1_secret = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_secret = io_k8s_api_core_v1_secret_create(
      "0",
      list_create(),
      1,
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
      list_create(),
      "0"
    );
  } else {
    io_k8s_api_core_v1_secret = io_k8s_api_core_v1_secret_create(
      "0",
      list_create(),
      1,
      "0",
      NULL,
      list_create(),
      "0"
    );
  }

  return io_k8s_api_core_v1_secret;
}


#ifdef io_k8s_api_core_v1_secret_MAIN

void test_io_k8s_api_core_v1_secret(int include_optional) {
    io_k8s_api_core_v1_secret_t* io_k8s_api_core_v1_secret_1 = instantiate_io_k8s_api_core_v1_secret(include_optional);

	cJSON* jsonio_k8s_api_core_v1_secret_1 = io_k8s_api_core_v1_secret_convertToJSON(io_k8s_api_core_v1_secret_1);
	printf("io_k8s_api_core_v1_secret :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_secret_1));
	io_k8s_api_core_v1_secret_t* io_k8s_api_core_v1_secret_2 = io_k8s_api_core_v1_secret_parseFromJSON(jsonio_k8s_api_core_v1_secret_1);
	cJSON* jsonio_k8s_api_core_v1_secret_2 = io_k8s_api_core_v1_secret_convertToJSON(io_k8s_api_core_v1_secret_2);
	printf("repeating io_k8s_api_core_v1_secret:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_secret_2));
}

int main() {
  test_io_k8s_api_core_v1_secret(1);
  test_io_k8s_api_core_v1_secret(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_secret_MAIN
#endif // io_k8s_api_core_v1_secret_TEST
