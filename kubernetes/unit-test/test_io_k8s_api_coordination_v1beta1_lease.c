#ifndef io_k8s_api_coordination_v1beta1_lease_TEST
#define io_k8s_api_coordination_v1beta1_lease_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_coordination_v1beta1_lease_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_coordination_v1beta1_lease.h"
io_k8s_api_coordination_v1beta1_lease_t* instantiate_io_k8s_api_coordination_v1beta1_lease(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"
#include "test_io_k8s_api_coordination_v1beta1_lease_spec.c"


io_k8s_api_coordination_v1beta1_lease_t* instantiate_io_k8s_api_coordination_v1beta1_lease(int include_optional) {
  io_k8s_api_coordination_v1beta1_lease_t* io_k8s_api_coordination_v1beta1_lease = NULL;
  if (include_optional) {
    io_k8s_api_coordination_v1beta1_lease = io_k8s_api_coordination_v1beta1_lease_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_coordination_v1beta1_lease_spec(0)
    );
  } else {
    io_k8s_api_coordination_v1beta1_lease = io_k8s_api_coordination_v1beta1_lease_create(
      "0",
      "0",
      NULL,
      NULL
    );
  }

  return io_k8s_api_coordination_v1beta1_lease;
}


#ifdef io_k8s_api_coordination_v1beta1_lease_MAIN

void test_io_k8s_api_coordination_v1beta1_lease(int include_optional) {
    io_k8s_api_coordination_v1beta1_lease_t* io_k8s_api_coordination_v1beta1_lease_1 = instantiate_io_k8s_api_coordination_v1beta1_lease(include_optional);

	cJSON* jsonio_k8s_api_coordination_v1beta1_lease_1 = io_k8s_api_coordination_v1beta1_lease_convertToJSON(io_k8s_api_coordination_v1beta1_lease_1);
	printf("io_k8s_api_coordination_v1beta1_lease :\n%s\n", cJSON_Print(jsonio_k8s_api_coordination_v1beta1_lease_1));
	io_k8s_api_coordination_v1beta1_lease_t* io_k8s_api_coordination_v1beta1_lease_2 = io_k8s_api_coordination_v1beta1_lease_parseFromJSON(jsonio_k8s_api_coordination_v1beta1_lease_1);
	cJSON* jsonio_k8s_api_coordination_v1beta1_lease_2 = io_k8s_api_coordination_v1beta1_lease_convertToJSON(io_k8s_api_coordination_v1beta1_lease_2);
	printf("repeating io_k8s_api_coordination_v1beta1_lease:\n%s\n", cJSON_Print(jsonio_k8s_api_coordination_v1beta1_lease_2));
}

int main() {
  test_io_k8s_api_coordination_v1beta1_lease(1);
  test_io_k8s_api_coordination_v1beta1_lease(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_coordination_v1beta1_lease_MAIN
#endif // io_k8s_api_coordination_v1beta1_lease_TEST
