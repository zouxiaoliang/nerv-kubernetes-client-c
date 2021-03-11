#ifndef io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_TEST
#define io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_list_meta.h"
io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_list_meta(int include_optional);



io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_list_meta(int include_optional) {
  io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t* io_k8s_apimachinery_pkg_apis_meta_v1_list_meta = NULL;
  if (include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_list_meta = io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_create(
      "0",
      56,
      "0",
      "0"
    );
  } else {
    io_k8s_apimachinery_pkg_apis_meta_v1_list_meta = io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_create(
      "0",
      56,
      "0",
      "0"
    );
  }

  return io_k8s_apimachinery_pkg_apis_meta_v1_list_meta;
}


#ifdef io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_MAIN

void test_io_k8s_apimachinery_pkg_apis_meta_v1_list_meta(int include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t* io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_1 = instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_list_meta(include_optional);

	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_list_meta_1 = io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_1);
	printf("io_k8s_apimachinery_pkg_apis_meta_v1_list_meta :\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_list_meta_1));
	io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t* io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_2 = io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_parseFromJSON(jsonio_k8s_apimachinery_pkg_apis_meta_v1_list_meta_1);
	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_list_meta_2 = io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_2);
	printf("repeating io_k8s_apimachinery_pkg_apis_meta_v1_list_meta:\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_list_meta_2));
}

int main() {
  test_io_k8s_apimachinery_pkg_apis_meta_v1_list_meta(1);
  test_io_k8s_apimachinery_pkg_apis_meta_v1_list_meta(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_MAIN
#endif // io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_TEST
