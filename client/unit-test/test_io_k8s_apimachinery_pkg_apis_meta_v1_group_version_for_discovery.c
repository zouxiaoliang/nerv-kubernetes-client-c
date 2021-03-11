#ifndef io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_TEST
#define io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery.h"
io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery(int include_optional);



io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery(int include_optional) {
  io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t* io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery = NULL;
  if (include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery = io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_create(
      "0",
      "0"
    );
  } else {
    io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery = io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_create(
      "0",
      "0"
    );
  }

  return io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery;
}


#ifdef io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_MAIN

void test_io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery(int include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t* io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_1 = instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery(include_optional);

	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_1 = io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_1);
	printf("io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery :\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_1));
	io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t* io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_2 = io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_parseFromJSON(jsonio_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_1);
	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_2 = io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_2);
	printf("repeating io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery:\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_2));
}

int main() {
  test_io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery(1);
  test_io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_MAIN
#endif // io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_TEST
