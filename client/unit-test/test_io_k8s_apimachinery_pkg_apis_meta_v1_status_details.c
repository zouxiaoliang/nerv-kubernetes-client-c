#ifndef io_k8s_apimachinery_pkg_apis_meta_v1_status_details_TEST
#define io_k8s_apimachinery_pkg_apis_meta_v1_status_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apimachinery_pkg_apis_meta_v1_status_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status_details.h"
io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_status_details(int include_optional);



io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_status_details(int include_optional) {
  io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t* io_k8s_apimachinery_pkg_apis_meta_v1_status_details = NULL;
  if (include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_status_details = io_k8s_apimachinery_pkg_apis_meta_v1_status_details_create(
      list_create(),
      "0",
      "0",
      "0",
      56,
      "0"
    );
  } else {
    io_k8s_apimachinery_pkg_apis_meta_v1_status_details = io_k8s_apimachinery_pkg_apis_meta_v1_status_details_create(
      list_create(),
      "0",
      "0",
      "0",
      56,
      "0"
    );
  }

  return io_k8s_apimachinery_pkg_apis_meta_v1_status_details;
}


#ifdef io_k8s_apimachinery_pkg_apis_meta_v1_status_details_MAIN

void test_io_k8s_apimachinery_pkg_apis_meta_v1_status_details(int include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t* io_k8s_apimachinery_pkg_apis_meta_v1_status_details_1 = instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_status_details(include_optional);

	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_status_details_1 = io_k8s_apimachinery_pkg_apis_meta_v1_status_details_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_status_details_1);
	printf("io_k8s_apimachinery_pkg_apis_meta_v1_status_details :\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_status_details_1));
	io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t* io_k8s_apimachinery_pkg_apis_meta_v1_status_details_2 = io_k8s_apimachinery_pkg_apis_meta_v1_status_details_parseFromJSON(jsonio_k8s_apimachinery_pkg_apis_meta_v1_status_details_1);
	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_status_details_2 = io_k8s_apimachinery_pkg_apis_meta_v1_status_details_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_status_details_2);
	printf("repeating io_k8s_apimachinery_pkg_apis_meta_v1_status_details:\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_status_details_2));
}

int main() {
  test_io_k8s_apimachinery_pkg_apis_meta_v1_status_details(1);
  test_io_k8s_apimachinery_pkg_apis_meta_v1_status_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apimachinery_pkg_apis_meta_v1_status_details_MAIN
#endif // io_k8s_apimachinery_pkg_apis_meta_v1_status_details_TEST
