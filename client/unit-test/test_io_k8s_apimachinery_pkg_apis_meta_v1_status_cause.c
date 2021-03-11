#ifndef io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_TEST
#define io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_status_cause.h"
io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_status_cause(int include_optional);



io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_status_cause(int include_optional) {
  io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t* io_k8s_apimachinery_pkg_apis_meta_v1_status_cause = NULL;
  if (include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_status_cause = io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_create(
      "0",
      "0",
      "0"
    );
  } else {
    io_k8s_apimachinery_pkg_apis_meta_v1_status_cause = io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_create(
      "0",
      "0",
      "0"
    );
  }

  return io_k8s_apimachinery_pkg_apis_meta_v1_status_cause;
}


#ifdef io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_MAIN

void test_io_k8s_apimachinery_pkg_apis_meta_v1_status_cause(int include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t* io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_1 = instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_status_cause(include_optional);

	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_status_cause_1 = io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_1);
	printf("io_k8s_apimachinery_pkg_apis_meta_v1_status_cause :\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_status_cause_1));
	io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t* io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_2 = io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_parseFromJSON(jsonio_k8s_apimachinery_pkg_apis_meta_v1_status_cause_1);
	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_status_cause_2 = io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_2);
	printf("repeating io_k8s_apimachinery_pkg_apis_meta_v1_status_cause:\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_status_cause_2));
}

int main() {
  test_io_k8s_apimachinery_pkg_apis_meta_v1_status_cause(1);
  test_io_k8s_apimachinery_pkg_apis_meta_v1_status_cause(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_MAIN
#endif // io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_TEST
