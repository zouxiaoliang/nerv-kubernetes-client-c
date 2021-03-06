#ifndef io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_TEST
#define io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion.h"
io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_t* instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion(int include_optional);

#include "test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion.c"


io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_t* instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion(int include_optional) {
  io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_t* io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion = NULL;
  if (include_optional) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_create(
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion(0)
    );
  } else {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_create(
      "0",
      NULL
    );
  }

  return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion;
}


#ifdef io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_MAIN

void test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion(int include_optional) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_t* io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_1 = instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion(include_optional);

	cJSON* jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_1 = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_1);
	printf("io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion :\n%s\n", cJSON_Print(jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_1));
	io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_t* io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_2 = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_parseFromJSON(jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_1);
	cJSON* jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_2 = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_2);
	printf("repeating io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion:\n%s\n", cJSON_Print(jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_2));
}

int main() {
  test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion(1);
  test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_MAIN
#endif // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_TEST
