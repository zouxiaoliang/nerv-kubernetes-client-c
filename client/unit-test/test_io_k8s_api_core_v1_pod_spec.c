#ifndef io_k8s_api_core_v1_pod_spec_TEST
#define io_k8s_api_core_v1_pod_spec_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_pod_spec_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_pod_spec.h"
io_k8s_api_core_v1_pod_spec_t* instantiate_io_k8s_api_core_v1_pod_spec(int include_optional);

#include "test_io_k8s_api_core_v1_affinity.c"
#include "test_io_k8s_api_core_v1_pod_dns_config.c"
#include "test_io_k8s_api_core_v1_pod_security_context.c"


io_k8s_api_core_v1_pod_spec_t* instantiate_io_k8s_api_core_v1_pod_spec(int include_optional) {
  io_k8s_api_core_v1_pod_spec_t* io_k8s_api_core_v1_pod_spec = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_pod_spec = io_k8s_api_core_v1_pod_spec_create(
      56,
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_affinity(0),
      1,
      list_create(),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_pod_dns_config(0),
      "0",
      1,
      list_create(),
      list_create(),
      1,
      1,
      1,
      "0",
      list_create(),
      list_create(),
      "0",
      list_create(),
      list_create(),
      "0",
      56,
      "0",
      list_create(),
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_pod_security_context(0),
      "0",
      "0",
      1,
      1,
      "0",
      56,
      list_create(),
      list_create(),
      list_create()
    );
  } else {
    io_k8s_api_core_v1_pod_spec = io_k8s_api_core_v1_pod_spec_create(
      56,
      NULL,
      1,
      list_create(),
      NULL,
      "0",
      1,
      list_create(),
      list_create(),
      1,
      1,
      1,
      "0",
      list_create(),
      list_create(),
      "0",
      list_create(),
      list_create(),
      "0",
      56,
      "0",
      list_create(),
      "0",
      "0",
      "0",
      NULL,
      "0",
      "0",
      1,
      1,
      "0",
      56,
      list_create(),
      list_create(),
      list_create()
    );
  }

  return io_k8s_api_core_v1_pod_spec;
}


#ifdef io_k8s_api_core_v1_pod_spec_MAIN

void test_io_k8s_api_core_v1_pod_spec(int include_optional) {
    io_k8s_api_core_v1_pod_spec_t* io_k8s_api_core_v1_pod_spec_1 = instantiate_io_k8s_api_core_v1_pod_spec(include_optional);

	cJSON* jsonio_k8s_api_core_v1_pod_spec_1 = io_k8s_api_core_v1_pod_spec_convertToJSON(io_k8s_api_core_v1_pod_spec_1);
	printf("io_k8s_api_core_v1_pod_spec :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_pod_spec_1));
	io_k8s_api_core_v1_pod_spec_t* io_k8s_api_core_v1_pod_spec_2 = io_k8s_api_core_v1_pod_spec_parseFromJSON(jsonio_k8s_api_core_v1_pod_spec_1);
	cJSON* jsonio_k8s_api_core_v1_pod_spec_2 = io_k8s_api_core_v1_pod_spec_convertToJSON(io_k8s_api_core_v1_pod_spec_2);
	printf("repeating io_k8s_api_core_v1_pod_spec:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_pod_spec_2));
}

int main() {
  test_io_k8s_api_core_v1_pod_spec(1);
  test_io_k8s_api_core_v1_pod_spec(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_pod_spec_MAIN
#endif // io_k8s_api_core_v1_pod_spec_TEST
