#ifndef io_k8s_api_storage_v1alpha1_csi_storage_capacity_TEST
#define io_k8s_api_storage_v1alpha1_csi_storage_capacity_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_storage_v1alpha1_csi_storage_capacity_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_storage_v1alpha1_csi_storage_capacity.h"
io_k8s_api_storage_v1alpha1_csi_storage_capacity_t* instantiate_io_k8s_api_storage_v1alpha1_csi_storage_capacity(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"
#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.c"


io_k8s_api_storage_v1alpha1_csi_storage_capacity_t* instantiate_io_k8s_api_storage_v1alpha1_csi_storage_capacity(int include_optional) {
  io_k8s_api_storage_v1alpha1_csi_storage_capacity_t* io_k8s_api_storage_v1alpha1_csi_storage_capacity = NULL;
  if (include_optional) {
    io_k8s_api_storage_v1alpha1_csi_storage_capacity = io_k8s_api_storage_v1alpha1_csi_storage_capacity_create(
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector(0),
      "0"
    );
  } else {
    io_k8s_api_storage_v1alpha1_csi_storage_capacity = io_k8s_api_storage_v1alpha1_csi_storage_capacity_create(
      "0",
      "0",
      "0",
      NULL,
      NULL,
      "0"
    );
  }

  return io_k8s_api_storage_v1alpha1_csi_storage_capacity;
}


#ifdef io_k8s_api_storage_v1alpha1_csi_storage_capacity_MAIN

void test_io_k8s_api_storage_v1alpha1_csi_storage_capacity(int include_optional) {
    io_k8s_api_storage_v1alpha1_csi_storage_capacity_t* io_k8s_api_storage_v1alpha1_csi_storage_capacity_1 = instantiate_io_k8s_api_storage_v1alpha1_csi_storage_capacity(include_optional);

	cJSON* jsonio_k8s_api_storage_v1alpha1_csi_storage_capacity_1 = io_k8s_api_storage_v1alpha1_csi_storage_capacity_convertToJSON(io_k8s_api_storage_v1alpha1_csi_storage_capacity_1);
	printf("io_k8s_api_storage_v1alpha1_csi_storage_capacity :\n%s\n", cJSON_Print(jsonio_k8s_api_storage_v1alpha1_csi_storage_capacity_1));
	io_k8s_api_storage_v1alpha1_csi_storage_capacity_t* io_k8s_api_storage_v1alpha1_csi_storage_capacity_2 = io_k8s_api_storage_v1alpha1_csi_storage_capacity_parseFromJSON(jsonio_k8s_api_storage_v1alpha1_csi_storage_capacity_1);
	cJSON* jsonio_k8s_api_storage_v1alpha1_csi_storage_capacity_2 = io_k8s_api_storage_v1alpha1_csi_storage_capacity_convertToJSON(io_k8s_api_storage_v1alpha1_csi_storage_capacity_2);
	printf("repeating io_k8s_api_storage_v1alpha1_csi_storage_capacity:\n%s\n", cJSON_Print(jsonio_k8s_api_storage_v1alpha1_csi_storage_capacity_2));
}

int main() {
  test_io_k8s_api_storage_v1alpha1_csi_storage_capacity(1);
  test_io_k8s_api_storage_v1alpha1_csi_storage_capacity(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_storage_v1alpha1_csi_storage_capacity_MAIN
#endif // io_k8s_api_storage_v1alpha1_csi_storage_capacity_TEST
