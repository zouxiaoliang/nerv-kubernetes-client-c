#ifndef io_k8s_api_networking_v1beta1_ingress_class_spec_TEST
#define io_k8s_api_networking_v1beta1_ingress_class_spec_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_networking_v1beta1_ingress_class_spec_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_networking_v1beta1_ingress_class_spec.h"
io_k8s_api_networking_v1beta1_ingress_class_spec_t* instantiate_io_k8s_api_networking_v1beta1_ingress_class_spec(int include_optional);

#include "test_io_k8s_api_core_v1_typed_local_object_reference.c"


io_k8s_api_networking_v1beta1_ingress_class_spec_t* instantiate_io_k8s_api_networking_v1beta1_ingress_class_spec(int include_optional) {
  io_k8s_api_networking_v1beta1_ingress_class_spec_t* io_k8s_api_networking_v1beta1_ingress_class_spec = NULL;
  if (include_optional) {
    io_k8s_api_networking_v1beta1_ingress_class_spec = io_k8s_api_networking_v1beta1_ingress_class_spec_create(
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_typed_local_object_reference(0)
    );
  } else {
    io_k8s_api_networking_v1beta1_ingress_class_spec = io_k8s_api_networking_v1beta1_ingress_class_spec_create(
      "0",
      NULL
    );
  }

  return io_k8s_api_networking_v1beta1_ingress_class_spec;
}


#ifdef io_k8s_api_networking_v1beta1_ingress_class_spec_MAIN

void test_io_k8s_api_networking_v1beta1_ingress_class_spec(int include_optional) {
    io_k8s_api_networking_v1beta1_ingress_class_spec_t* io_k8s_api_networking_v1beta1_ingress_class_spec_1 = instantiate_io_k8s_api_networking_v1beta1_ingress_class_spec(include_optional);

	cJSON* jsonio_k8s_api_networking_v1beta1_ingress_class_spec_1 = io_k8s_api_networking_v1beta1_ingress_class_spec_convertToJSON(io_k8s_api_networking_v1beta1_ingress_class_spec_1);
	printf("io_k8s_api_networking_v1beta1_ingress_class_spec :\n%s\n", cJSON_Print(jsonio_k8s_api_networking_v1beta1_ingress_class_spec_1));
	io_k8s_api_networking_v1beta1_ingress_class_spec_t* io_k8s_api_networking_v1beta1_ingress_class_spec_2 = io_k8s_api_networking_v1beta1_ingress_class_spec_parseFromJSON(jsonio_k8s_api_networking_v1beta1_ingress_class_spec_1);
	cJSON* jsonio_k8s_api_networking_v1beta1_ingress_class_spec_2 = io_k8s_api_networking_v1beta1_ingress_class_spec_convertToJSON(io_k8s_api_networking_v1beta1_ingress_class_spec_2);
	printf("repeating io_k8s_api_networking_v1beta1_ingress_class_spec:\n%s\n", cJSON_Print(jsonio_k8s_api_networking_v1beta1_ingress_class_spec_2));
}

int main() {
  test_io_k8s_api_networking_v1beta1_ingress_class_spec(1);
  test_io_k8s_api_networking_v1beta1_ingress_class_spec(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_networking_v1beta1_ingress_class_spec_MAIN
#endif // io_k8s_api_networking_v1beta1_ingress_class_spec_TEST
