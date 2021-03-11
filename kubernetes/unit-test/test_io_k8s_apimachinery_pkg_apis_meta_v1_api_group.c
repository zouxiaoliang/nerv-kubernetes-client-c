#ifndef io_k8s_apimachinery_pkg_apis_meta_v1_api_group_TEST
#define io_k8s_apimachinery_pkg_apis_meta_v1_api_group_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apimachinery_pkg_apis_meta_v1_api_group_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_group.h"
io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_api_group(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery.c"


io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_api_group(int include_optional) {
  io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t* io_k8s_apimachinery_pkg_apis_meta_v1_api_group = NULL;
  if (include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_api_group = io_k8s_apimachinery_pkg_apis_meta_v1_api_group_create(
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery(0),
      list_create(),
      list_create()
    );
  } else {
    io_k8s_apimachinery_pkg_apis_meta_v1_api_group = io_k8s_apimachinery_pkg_apis_meta_v1_api_group_create(
      "0",
      "0",
      "0",
      NULL,
      list_create(),
      list_create()
    );
  }

  return io_k8s_apimachinery_pkg_apis_meta_v1_api_group;
}


#ifdef io_k8s_apimachinery_pkg_apis_meta_v1_api_group_MAIN

void test_io_k8s_apimachinery_pkg_apis_meta_v1_api_group(int include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t* io_k8s_apimachinery_pkg_apis_meta_v1_api_group_1 = instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_api_group(include_optional);

	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_api_group_1 = io_k8s_apimachinery_pkg_apis_meta_v1_api_group_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_1);
	printf("io_k8s_apimachinery_pkg_apis_meta_v1_api_group :\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_api_group_1));
	io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t* io_k8s_apimachinery_pkg_apis_meta_v1_api_group_2 = io_k8s_apimachinery_pkg_apis_meta_v1_api_group_parseFromJSON(jsonio_k8s_apimachinery_pkg_apis_meta_v1_api_group_1);
	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_api_group_2 = io_k8s_apimachinery_pkg_apis_meta_v1_api_group_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_2);
	printf("repeating io_k8s_apimachinery_pkg_apis_meta_v1_api_group:\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_api_group_2));
}

int main() {
  test_io_k8s_apimachinery_pkg_apis_meta_v1_api_group(1);
  test_io_k8s_apimachinery_pkg_apis_meta_v1_api_group(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apimachinery_pkg_apis_meta_v1_api_group_MAIN
#endif // io_k8s_apimachinery_pkg_apis_meta_v1_api_group_TEST
