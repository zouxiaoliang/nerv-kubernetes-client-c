#ifndef io_k8s_api_core_v1_pod_security_context_TEST
#define io_k8s_api_core_v1_pod_security_context_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_pod_security_context_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_pod_security_context.h"
io_k8s_api_core_v1_pod_security_context_t* instantiate_io_k8s_api_core_v1_pod_security_context(int include_optional);

#include "test_io_k8s_api_core_v1_se_linux_options.c"
#include "test_io_k8s_api_core_v1_seccomp_profile.c"
#include "test_io_k8s_api_core_v1_windows_security_context_options.c"


io_k8s_api_core_v1_pod_security_context_t* instantiate_io_k8s_api_core_v1_pod_security_context(int include_optional) {
  io_k8s_api_core_v1_pod_security_context_t* io_k8s_api_core_v1_pod_security_context = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_pod_security_context = io_k8s_api_core_v1_pod_security_context_create(
      56,
      "0",
      56,
      1,
      56,
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_se_linux_options(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_seccomp_profile(0),
      list_create(),
      list_create(),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_windows_security_context_options(0)
    );
  } else {
    io_k8s_api_core_v1_pod_security_context = io_k8s_api_core_v1_pod_security_context_create(
      56,
      "0",
      56,
      1,
      56,
      NULL,
      NULL,
      list_create(),
      list_create(),
      NULL
    );
  }

  return io_k8s_api_core_v1_pod_security_context;
}


#ifdef io_k8s_api_core_v1_pod_security_context_MAIN

void test_io_k8s_api_core_v1_pod_security_context(int include_optional) {
    io_k8s_api_core_v1_pod_security_context_t* io_k8s_api_core_v1_pod_security_context_1 = instantiate_io_k8s_api_core_v1_pod_security_context(include_optional);

	cJSON* jsonio_k8s_api_core_v1_pod_security_context_1 = io_k8s_api_core_v1_pod_security_context_convertToJSON(io_k8s_api_core_v1_pod_security_context_1);
	printf("io_k8s_api_core_v1_pod_security_context :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_pod_security_context_1));
	io_k8s_api_core_v1_pod_security_context_t* io_k8s_api_core_v1_pod_security_context_2 = io_k8s_api_core_v1_pod_security_context_parseFromJSON(jsonio_k8s_api_core_v1_pod_security_context_1);
	cJSON* jsonio_k8s_api_core_v1_pod_security_context_2 = io_k8s_api_core_v1_pod_security_context_convertToJSON(io_k8s_api_core_v1_pod_security_context_2);
	printf("repeating io_k8s_api_core_v1_pod_security_context:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_pod_security_context_2));
}

int main() {
  test_io_k8s_api_core_v1_pod_security_context(1);
  test_io_k8s_api_core_v1_pod_security_context(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_pod_security_context_MAIN
#endif // io_k8s_api_core_v1_pod_security_context_TEST
