#ifndef io_k8s_api_node_v1alpha1_runtime_class_TEST
#define io_k8s_api_node_v1alpha1_runtime_class_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_node_v1alpha1_runtime_class_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_node_v1alpha1_runtime_class.h"
io_k8s_api_node_v1alpha1_runtime_class_t* instantiate_io_k8s_api_node_v1alpha1_runtime_class(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"
#include "test_io_k8s_api_node_v1alpha1_runtime_class_spec.c"


io_k8s_api_node_v1alpha1_runtime_class_t* instantiate_io_k8s_api_node_v1alpha1_runtime_class(int include_optional) {
  io_k8s_api_node_v1alpha1_runtime_class_t* io_k8s_api_node_v1alpha1_runtime_class = NULL;
  if (include_optional) {
    io_k8s_api_node_v1alpha1_runtime_class = io_k8s_api_node_v1alpha1_runtime_class_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_node_v1alpha1_runtime_class_spec(0)
    );
  } else {
    io_k8s_api_node_v1alpha1_runtime_class = io_k8s_api_node_v1alpha1_runtime_class_create(
      "0",
      "0",
      NULL,
      NULL
    );
  }

  return io_k8s_api_node_v1alpha1_runtime_class;
}


#ifdef io_k8s_api_node_v1alpha1_runtime_class_MAIN

void test_io_k8s_api_node_v1alpha1_runtime_class(int include_optional) {
    io_k8s_api_node_v1alpha1_runtime_class_t* io_k8s_api_node_v1alpha1_runtime_class_1 = instantiate_io_k8s_api_node_v1alpha1_runtime_class(include_optional);

	cJSON* jsonio_k8s_api_node_v1alpha1_runtime_class_1 = io_k8s_api_node_v1alpha1_runtime_class_convertToJSON(io_k8s_api_node_v1alpha1_runtime_class_1);
	printf("io_k8s_api_node_v1alpha1_runtime_class :\n%s\n", cJSON_Print(jsonio_k8s_api_node_v1alpha1_runtime_class_1));
	io_k8s_api_node_v1alpha1_runtime_class_t* io_k8s_api_node_v1alpha1_runtime_class_2 = io_k8s_api_node_v1alpha1_runtime_class_parseFromJSON(jsonio_k8s_api_node_v1alpha1_runtime_class_1);
	cJSON* jsonio_k8s_api_node_v1alpha1_runtime_class_2 = io_k8s_api_node_v1alpha1_runtime_class_convertToJSON(io_k8s_api_node_v1alpha1_runtime_class_2);
	printf("repeating io_k8s_api_node_v1alpha1_runtime_class:\n%s\n", cJSON_Print(jsonio_k8s_api_node_v1alpha1_runtime_class_2));
}

int main() {
  test_io_k8s_api_node_v1alpha1_runtime_class(1);
  test_io_k8s_api_node_v1alpha1_runtime_class(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_node_v1alpha1_runtime_class_MAIN
#endif // io_k8s_api_node_v1alpha1_runtime_class_TEST
