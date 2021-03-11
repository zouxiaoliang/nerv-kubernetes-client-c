#ifndef io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_TEST
#define io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_api_versions.h"
io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_api_versions(int include_optional);



io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_api_versions(int include_optional) {
  io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t* io_k8s_apimachinery_pkg_apis_meta_v1_api_versions = NULL;
  if (include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_api_versions = io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_create(
      "0",
      "0",
      list_create(),
      list_create()
    );
  } else {
    io_k8s_apimachinery_pkg_apis_meta_v1_api_versions = io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_create(
      "0",
      "0",
      list_create(),
      list_create()
    );
  }

  return io_k8s_apimachinery_pkg_apis_meta_v1_api_versions;
}


#ifdef io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_MAIN

void test_io_k8s_apimachinery_pkg_apis_meta_v1_api_versions(int include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t* io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_1 = instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_api_versions(include_optional);

	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_api_versions_1 = io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_1);
	printf("io_k8s_apimachinery_pkg_apis_meta_v1_api_versions :\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_api_versions_1));
	io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t* io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_2 = io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_parseFromJSON(jsonio_k8s_apimachinery_pkg_apis_meta_v1_api_versions_1);
	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_api_versions_2 = io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_2);
	printf("repeating io_k8s_apimachinery_pkg_apis_meta_v1_api_versions:\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_api_versions_2));
}

int main() {
  test_io_k8s_apimachinery_pkg_apis_meta_v1_api_versions(1);
  test_io_k8s_apimachinery_pkg_apis_meta_v1_api_versions(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_MAIN
#endif // io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_TEST
