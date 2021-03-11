#ifndef io_k8s_api_policy_v1beta1_pod_security_policy_TEST
#define io_k8s_api_policy_v1beta1_pod_security_policy_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_policy_v1beta1_pod_security_policy_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_policy_v1beta1_pod_security_policy.h"
io_k8s_api_policy_v1beta1_pod_security_policy_t* instantiate_io_k8s_api_policy_v1beta1_pod_security_policy(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"
#include "test_io_k8s_api_policy_v1beta1_pod_security_policy_spec.c"


io_k8s_api_policy_v1beta1_pod_security_policy_t* instantiate_io_k8s_api_policy_v1beta1_pod_security_policy(int include_optional) {
  io_k8s_api_policy_v1beta1_pod_security_policy_t* io_k8s_api_policy_v1beta1_pod_security_policy = NULL;
  if (include_optional) {
    io_k8s_api_policy_v1beta1_pod_security_policy = io_k8s_api_policy_v1beta1_pod_security_policy_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_policy_v1beta1_pod_security_policy_spec(0)
    );
  } else {
    io_k8s_api_policy_v1beta1_pod_security_policy = io_k8s_api_policy_v1beta1_pod_security_policy_create(
      "0",
      "0",
      NULL,
      NULL
    );
  }

  return io_k8s_api_policy_v1beta1_pod_security_policy;
}


#ifdef io_k8s_api_policy_v1beta1_pod_security_policy_MAIN

void test_io_k8s_api_policy_v1beta1_pod_security_policy(int include_optional) {
    io_k8s_api_policy_v1beta1_pod_security_policy_t* io_k8s_api_policy_v1beta1_pod_security_policy_1 = instantiate_io_k8s_api_policy_v1beta1_pod_security_policy(include_optional);

	cJSON* jsonio_k8s_api_policy_v1beta1_pod_security_policy_1 = io_k8s_api_policy_v1beta1_pod_security_policy_convertToJSON(io_k8s_api_policy_v1beta1_pod_security_policy_1);
	printf("io_k8s_api_policy_v1beta1_pod_security_policy :\n%s\n", cJSON_Print(jsonio_k8s_api_policy_v1beta1_pod_security_policy_1));
	io_k8s_api_policy_v1beta1_pod_security_policy_t* io_k8s_api_policy_v1beta1_pod_security_policy_2 = io_k8s_api_policy_v1beta1_pod_security_policy_parseFromJSON(jsonio_k8s_api_policy_v1beta1_pod_security_policy_1);
	cJSON* jsonio_k8s_api_policy_v1beta1_pod_security_policy_2 = io_k8s_api_policy_v1beta1_pod_security_policy_convertToJSON(io_k8s_api_policy_v1beta1_pod_security_policy_2);
	printf("repeating io_k8s_api_policy_v1beta1_pod_security_policy:\n%s\n", cJSON_Print(jsonio_k8s_api_policy_v1beta1_pod_security_policy_2));
}

int main() {
  test_io_k8s_api_policy_v1beta1_pod_security_policy(1);
  test_io_k8s_api_policy_v1beta1_pod_security_policy(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_policy_v1beta1_pod_security_policy_MAIN
#endif // io_k8s_api_policy_v1beta1_pod_security_policy_TEST
