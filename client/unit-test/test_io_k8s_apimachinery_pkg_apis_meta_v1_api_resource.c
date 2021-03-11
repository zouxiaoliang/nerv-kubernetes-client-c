#ifndef io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_TEST
#define io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_resource.h"
io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_api_resource(int include_optional);



io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_api_resource(int include_optional) {
  io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t* io_k8s_apimachinery_pkg_apis_meta_v1_api_resource = NULL;
  if (include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource = io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_create(
      list_create(),
      "0",
      "0",
      "0",
      1,
      list_create(),
      "0",
      "0",
      list_create(),
      "0"
    );
  } else {
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource = io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_create(
      list_create(),
      "0",
      "0",
      "0",
      1,
      list_create(),
      "0",
      "0",
      list_create(),
      "0"
    );
  }

  return io_k8s_apimachinery_pkg_apis_meta_v1_api_resource;
}


#ifdef io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_MAIN

void test_io_k8s_apimachinery_pkg_apis_meta_v1_api_resource(int include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t* io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_1 = instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_api_resource(include_optional);

	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_api_resource_1 = io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_1);
	printf("io_k8s_apimachinery_pkg_apis_meta_v1_api_resource :\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_api_resource_1));
	io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t* io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_2 = io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_parseFromJSON(jsonio_k8s_apimachinery_pkg_apis_meta_v1_api_resource_1);
	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_api_resource_2 = io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_2);
	printf("repeating io_k8s_apimachinery_pkg_apis_meta_v1_api_resource:\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_api_resource_2));
}

int main() {
  test_io_k8s_apimachinery_pkg_apis_meta_v1_api_resource(1);
  test_io_k8s_apimachinery_pkg_apis_meta_v1_api_resource(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_MAIN
#endif // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_TEST
