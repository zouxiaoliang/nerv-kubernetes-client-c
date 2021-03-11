#ifndef io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_TEST
#define io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props.h"
io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_t* instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props(int include_optional);

#include "test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_external_documentation.c"
#include "test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props.c"


io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_t* instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props(int include_optional) {
  io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_t* io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props = NULL;
  if (include_optional) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_create(
      "0",
      "0",
      0,
      0,
      list_create(),
      list_create(),
      0,
      list_create(),
      list_create(),
      "0",
      list_create(),
      0,
      1,
      1,
       // false, not to have infinite recursion
      instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_external_documentation(0),
      "0",
      "0",
      0,
      56,
      56,
      56,
      1.337,
      56,
      56,
      56,
      1.337,
      1.337,
       // false, not to have infinite recursion
      instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props(0),
      1,
      list_create(),
      "0",
      list_create(),
      list_create(),
      list_create(),
      "0",
      "0",
      1,
      1,
      1,
      list_create(),
      "0",
      "0",
      1
    );
  } else {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_create(
      "0",
      "0",
      0,
      0,
      list_create(),
      list_create(),
      0,
      list_create(),
      list_create(),
      "0",
      list_create(),
      0,
      1,
      1,
      NULL,
      "0",
      "0",
      0,
      56,
      56,
      56,
      1.337,
      56,
      56,
      56,
      1.337,
      1.337,
      NULL,
      1,
      list_create(),
      "0",
      list_create(),
      list_create(),
      list_create(),
      "0",
      "0",
      1,
      1,
      1,
      list_create(),
      "0",
      "0",
      1
    );
  }

  return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props;
}


#ifdef io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_MAIN

void test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props(int include_optional) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_t* io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_1 = instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props(include_optional);

	cJSON* jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_1 = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_1);
	printf("io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props :\n%s\n", cJSON_Print(jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_1));
	io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_t* io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_2 = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_parseFromJSON(jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_1);
	cJSON* jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_2 = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_2);
	printf("repeating io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props:\n%s\n", cJSON_Print(jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_2));
}

int main() {
  test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props(1);
  test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_MAIN
#endif // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_json_schema_props_TEST
