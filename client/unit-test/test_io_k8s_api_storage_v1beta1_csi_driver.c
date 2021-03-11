#ifndef io_k8s_api_storage_v1beta1_csi_driver_TEST
#define io_k8s_api_storage_v1beta1_csi_driver_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_storage_v1beta1_csi_driver_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_storage_v1beta1_csi_driver.h"
io_k8s_api_storage_v1beta1_csi_driver_t* instantiate_io_k8s_api_storage_v1beta1_csi_driver(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"
#include "test_io_k8s_api_storage_v1beta1_csi_driver_spec.c"


io_k8s_api_storage_v1beta1_csi_driver_t* instantiate_io_k8s_api_storage_v1beta1_csi_driver(int include_optional) {
  io_k8s_api_storage_v1beta1_csi_driver_t* io_k8s_api_storage_v1beta1_csi_driver = NULL;
  if (include_optional) {
    io_k8s_api_storage_v1beta1_csi_driver = io_k8s_api_storage_v1beta1_csi_driver_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_storage_v1beta1_csi_driver_spec(0)
    );
  } else {
    io_k8s_api_storage_v1beta1_csi_driver = io_k8s_api_storage_v1beta1_csi_driver_create(
      "0",
      "0",
      NULL,
      NULL
    );
  }

  return io_k8s_api_storage_v1beta1_csi_driver;
}


#ifdef io_k8s_api_storage_v1beta1_csi_driver_MAIN

void test_io_k8s_api_storage_v1beta1_csi_driver(int include_optional) {
    io_k8s_api_storage_v1beta1_csi_driver_t* io_k8s_api_storage_v1beta1_csi_driver_1 = instantiate_io_k8s_api_storage_v1beta1_csi_driver(include_optional);

	cJSON* jsonio_k8s_api_storage_v1beta1_csi_driver_1 = io_k8s_api_storage_v1beta1_csi_driver_convertToJSON(io_k8s_api_storage_v1beta1_csi_driver_1);
	printf("io_k8s_api_storage_v1beta1_csi_driver :\n%s\n", cJSON_Print(jsonio_k8s_api_storage_v1beta1_csi_driver_1));
	io_k8s_api_storage_v1beta1_csi_driver_t* io_k8s_api_storage_v1beta1_csi_driver_2 = io_k8s_api_storage_v1beta1_csi_driver_parseFromJSON(jsonio_k8s_api_storage_v1beta1_csi_driver_1);
	cJSON* jsonio_k8s_api_storage_v1beta1_csi_driver_2 = io_k8s_api_storage_v1beta1_csi_driver_convertToJSON(io_k8s_api_storage_v1beta1_csi_driver_2);
	printf("repeating io_k8s_api_storage_v1beta1_csi_driver:\n%s\n", cJSON_Print(jsonio_k8s_api_storage_v1beta1_csi_driver_2));
}

int main() {
  test_io_k8s_api_storage_v1beta1_csi_driver(1);
  test_io_k8s_api_storage_v1beta1_csi_driver(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_storage_v1beta1_csi_driver_MAIN
#endif // io_k8s_api_storage_v1beta1_csi_driver_TEST
