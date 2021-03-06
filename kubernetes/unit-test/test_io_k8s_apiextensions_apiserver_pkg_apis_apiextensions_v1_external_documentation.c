#ifndef io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_TEST
#define io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation.h"
io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_t* instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation(int include_optional);



io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_t* instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation(int include_optional) {
  io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_t* io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation = NULL;
  if (include_optional) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_create(
      "0",
      "0"
    );
  } else {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_create(
      "0",
      "0"
    );
  }

  return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation;
}


#ifdef io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_MAIN

void test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation(int include_optional) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_t* io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_1 = instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation(include_optional);

	cJSON* jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_1 = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_1);
	printf("io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation :\n%s\n", cJSON_Print(jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_1));
	io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_t* io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_2 = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_parseFromJSON(jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_1);
	cJSON* jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_2 = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_2);
	printf("repeating io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation:\n%s\n", cJSON_Print(jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_2));
}

int main() {
  test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation(1);
  test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_MAIN
#endif // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_external_documentation_TEST
