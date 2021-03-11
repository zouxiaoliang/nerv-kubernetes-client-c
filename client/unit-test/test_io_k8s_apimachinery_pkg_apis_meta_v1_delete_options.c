#ifndef io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_TEST
#define io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_delete_options(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_preconditions.c"


io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_delete_options(int include_optional) {
  io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t* io_k8s_apimachinery_pkg_apis_meta_v1_delete_options = NULL;
  if (include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_delete_options = io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_create(
      "0",
      list_create(),
      56,
      "0",
      1,
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_preconditions(0),
      "0"
    );
  } else {
    io_k8s_apimachinery_pkg_apis_meta_v1_delete_options = io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_create(
      "0",
      list_create(),
      56,
      "0",
      1,
      NULL,
      "0"
    );
  }

  return io_k8s_apimachinery_pkg_apis_meta_v1_delete_options;
}


#ifdef io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_MAIN

void test_io_k8s_apimachinery_pkg_apis_meta_v1_delete_options(int include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t* io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_1 = instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_delete_options(include_optional);

	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_delete_options_1 = io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_1);
	printf("io_k8s_apimachinery_pkg_apis_meta_v1_delete_options :\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_delete_options_1));
	io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t* io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_2 = io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_parseFromJSON(jsonio_k8s_apimachinery_pkg_apis_meta_v1_delete_options_1);
	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_delete_options_2 = io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_2);
	printf("repeating io_k8s_apimachinery_pkg_apis_meta_v1_delete_options:\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_delete_options_2));
}

int main() {
  test_io_k8s_apimachinery_pkg_apis_meta_v1_delete_options(1);
  test_io_k8s_apimachinery_pkg_apis_meta_v1_delete_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_MAIN
#endif // io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_TEST
