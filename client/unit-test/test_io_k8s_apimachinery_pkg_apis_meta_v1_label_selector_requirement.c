#ifndef io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_TEST
#define io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement.h"
io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement(int include_optional);



io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement(int include_optional) {
  io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t* io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement = NULL;
  if (include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_create(
      "0",
      "0",
      list_create()
    );
  } else {
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_create(
      "0",
      "0",
      list_create()
    );
  }

  return io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement;
}


#ifdef io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_MAIN

void test_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement(int include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t* io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_1 = instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement(include_optional);

	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_1 = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_1);
	printf("io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement :\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_1));
	io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t* io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_2 = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_parseFromJSON(jsonio_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_1);
	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_2 = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_2);
	printf("repeating io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement:\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_2));
}

int main() {
  test_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement(1);
  test_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_MAIN
#endif // io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_TEST
