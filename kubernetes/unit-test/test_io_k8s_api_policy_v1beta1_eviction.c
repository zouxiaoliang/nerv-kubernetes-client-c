#ifndef io_k8s_api_policy_v1beta1_eviction_TEST
#define io_k8s_api_policy_v1beta1_eviction_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_policy_v1beta1_eviction_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_policy_v1beta1_eviction.h"
io_k8s_api_policy_v1beta1_eviction_t* instantiate_io_k8s_api_policy_v1beta1_eviction(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.c"
#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"


io_k8s_api_policy_v1beta1_eviction_t* instantiate_io_k8s_api_policy_v1beta1_eviction(int include_optional) {
  io_k8s_api_policy_v1beta1_eviction_t* io_k8s_api_policy_v1beta1_eviction = NULL;
  if (include_optional) {
    io_k8s_api_policy_v1beta1_eviction = io_k8s_api_policy_v1beta1_eviction_create(
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_delete_options(0),
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0)
    );
  } else {
    io_k8s_api_policy_v1beta1_eviction = io_k8s_api_policy_v1beta1_eviction_create(
      "0",
      NULL,
      "0",
      NULL
    );
  }

  return io_k8s_api_policy_v1beta1_eviction;
}


#ifdef io_k8s_api_policy_v1beta1_eviction_MAIN

void test_io_k8s_api_policy_v1beta1_eviction(int include_optional) {
    io_k8s_api_policy_v1beta1_eviction_t* io_k8s_api_policy_v1beta1_eviction_1 = instantiate_io_k8s_api_policy_v1beta1_eviction(include_optional);

	cJSON* jsonio_k8s_api_policy_v1beta1_eviction_1 = io_k8s_api_policy_v1beta1_eviction_convertToJSON(io_k8s_api_policy_v1beta1_eviction_1);
	printf("io_k8s_api_policy_v1beta1_eviction :\n%s\n", cJSON_Print(jsonio_k8s_api_policy_v1beta1_eviction_1));
	io_k8s_api_policy_v1beta1_eviction_t* io_k8s_api_policy_v1beta1_eviction_2 = io_k8s_api_policy_v1beta1_eviction_parseFromJSON(jsonio_k8s_api_policy_v1beta1_eviction_1);
	cJSON* jsonio_k8s_api_policy_v1beta1_eviction_2 = io_k8s_api_policy_v1beta1_eviction_convertToJSON(io_k8s_api_policy_v1beta1_eviction_2);
	printf("repeating io_k8s_api_policy_v1beta1_eviction:\n%s\n", cJSON_Print(jsonio_k8s_api_policy_v1beta1_eviction_2));
}

int main() {
  test_io_k8s_api_policy_v1beta1_eviction(1);
  test_io_k8s_api_policy_v1beta1_eviction(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_policy_v1beta1_eviction_MAIN
#endif // io_k8s_api_policy_v1beta1_eviction_TEST
