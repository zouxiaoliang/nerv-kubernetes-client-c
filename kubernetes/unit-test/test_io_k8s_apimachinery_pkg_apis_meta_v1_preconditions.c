#ifndef io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_TEST
#define io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_preconditions.h"
io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_preconditions(int include_optional);



io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_preconditions(int include_optional) {
  io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t* io_k8s_apimachinery_pkg_apis_meta_v1_preconditions = NULL;
  if (include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_preconditions = io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_create(
      "0",
      "0"
    );
  } else {
    io_k8s_apimachinery_pkg_apis_meta_v1_preconditions = io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_create(
      "0",
      "0"
    );
  }

  return io_k8s_apimachinery_pkg_apis_meta_v1_preconditions;
}


#ifdef io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_MAIN

void test_io_k8s_apimachinery_pkg_apis_meta_v1_preconditions(int include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t* io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_1 = instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_preconditions(include_optional);

	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_preconditions_1 = io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_1);
	printf("io_k8s_apimachinery_pkg_apis_meta_v1_preconditions :\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_preconditions_1));
	io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t* io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_2 = io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_parseFromJSON(jsonio_k8s_apimachinery_pkg_apis_meta_v1_preconditions_1);
	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_preconditions_2 = io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_2);
	printf("repeating io_k8s_apimachinery_pkg_apis_meta_v1_preconditions:\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_preconditions_2));
}

int main() {
  test_io_k8s_apimachinery_pkg_apis_meta_v1_preconditions(1);
  test_io_k8s_apimachinery_pkg_apis_meta_v1_preconditions(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_MAIN
#endif // io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_TEST
