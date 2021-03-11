#ifndef io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_TEST
#define io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry.h"
io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry(int include_optional);



io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry(int include_optional) {
  io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t* io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry = NULL;
  if (include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry = io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_create(
      "0",
      "0",
      0,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry = io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_create(
      "0",
      "0",
      0,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry;
}


#ifdef io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_MAIN

void test_io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry(int include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t* io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_1 = instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry(include_optional);

	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_1 = io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_1);
	printf("io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry :\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_1));
	io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_t* io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_2 = io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_parseFromJSON(jsonio_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_1);
	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_2 = io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_2);
	printf("repeating io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry:\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_2));
}

int main() {
  test_io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry(1);
  test_io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_MAIN
#endif // io_k8s_apimachinery_pkg_apis_meta_v1_managed_fields_entry_TEST
