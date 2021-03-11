#ifndef io_k8s_apimachinery_pkg_version_info_TEST
#define io_k8s_apimachinery_pkg_version_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apimachinery_pkg_version_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apimachinery_pkg_version_info.h"
io_k8s_apimachinery_pkg_version_info_t* instantiate_io_k8s_apimachinery_pkg_version_info(int include_optional);



io_k8s_apimachinery_pkg_version_info_t* instantiate_io_k8s_apimachinery_pkg_version_info(int include_optional) {
  io_k8s_apimachinery_pkg_version_info_t* io_k8s_apimachinery_pkg_version_info = NULL;
  if (include_optional) {
    io_k8s_apimachinery_pkg_version_info = io_k8s_apimachinery_pkg_version_info_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    io_k8s_apimachinery_pkg_version_info = io_k8s_apimachinery_pkg_version_info_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return io_k8s_apimachinery_pkg_version_info;
}


#ifdef io_k8s_apimachinery_pkg_version_info_MAIN

void test_io_k8s_apimachinery_pkg_version_info(int include_optional) {
    io_k8s_apimachinery_pkg_version_info_t* io_k8s_apimachinery_pkg_version_info_1 = instantiate_io_k8s_apimachinery_pkg_version_info(include_optional);

	cJSON* jsonio_k8s_apimachinery_pkg_version_info_1 = io_k8s_apimachinery_pkg_version_info_convertToJSON(io_k8s_apimachinery_pkg_version_info_1);
	printf("io_k8s_apimachinery_pkg_version_info :\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_version_info_1));
	io_k8s_apimachinery_pkg_version_info_t* io_k8s_apimachinery_pkg_version_info_2 = io_k8s_apimachinery_pkg_version_info_parseFromJSON(jsonio_k8s_apimachinery_pkg_version_info_1);
	cJSON* jsonio_k8s_apimachinery_pkg_version_info_2 = io_k8s_apimachinery_pkg_version_info_convertToJSON(io_k8s_apimachinery_pkg_version_info_2);
	printf("repeating io_k8s_apimachinery_pkg_version_info:\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_version_info_2));
}

int main() {
  test_io_k8s_apimachinery_pkg_version_info(1);
  test_io_k8s_apimachinery_pkg_version_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apimachinery_pkg_version_info_MAIN
#endif // io_k8s_apimachinery_pkg_version_info_TEST
