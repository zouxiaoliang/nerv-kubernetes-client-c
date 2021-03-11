#ifndef io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_TEST
#define io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition.h"
io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_t* instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"
#include "test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec.c"
#include "test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_status.c"


io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_t* instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition(int include_optional) {
  io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_t* io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition = NULL;
  if (include_optional) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_spec(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_status(0)
    );
  } else {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_create(
      "0",
      "0",
      NULL,
      NULL,
      NULL
    );
  }

  return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition;
}


#ifdef io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_MAIN

void test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition(int include_optional) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_t* io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_1 = instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition(include_optional);

	cJSON* jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_1 = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_1);
	printf("io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition :\n%s\n", cJSON_Print(jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_1));
	io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_t* io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_2 = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_parseFromJSON(jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_1);
	cJSON* jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_2 = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_2);
	printf("repeating io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition:\n%s\n", cJSON_Print(jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_2));
}

int main() {
  test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition(1);
  test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_MAIN
#endif // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_definition_TEST