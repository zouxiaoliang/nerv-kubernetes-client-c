#ifndef io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_TEST
#define io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"
io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(int include_optional);



io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(int include_optional) {
  io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t* io_k8s_apimachinery_pkg_apis_meta_v1_object_meta = NULL;
  if (include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_create(
      list_create(),
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "2013-10-20T19:20:30+01:00",
      list_create(),
      "0",
      56,
      list_create(),
      list_create(),
      "0",
      "0",
      list_create(),
      "0",
      "0",
      "0"
    );
  } else {
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_create(
      list_create(),
      "0",
      "2013-10-20T19:20:30+01:00",
      56,
      "2013-10-20T19:20:30+01:00",
      list_create(),
      "0",
      56,
      list_create(),
      list_create(),
      "0",
      "0",
      list_create(),
      "0",
      "0",
      "0"
    );
  }

  return io_k8s_apimachinery_pkg_apis_meta_v1_object_meta;
}


#ifdef io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_MAIN

void test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(int include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t* io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_1 = instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(include_optional);

	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_object_meta_1 = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_1);
	printf("io_k8s_apimachinery_pkg_apis_meta_v1_object_meta :\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_object_meta_1));
	io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t* io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_2 = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(jsonio_k8s_apimachinery_pkg_apis_meta_v1_object_meta_1);
	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_object_meta_2 = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_2);
	printf("repeating io_k8s_apimachinery_pkg_apis_meta_v1_object_meta:\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_object_meta_2));
}

int main() {
  test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(1);
  test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_MAIN
#endif // io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_TEST
