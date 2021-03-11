#ifndef io_k8s_api_core_v1_sysctl_TEST
#define io_k8s_api_core_v1_sysctl_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_sysctl_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_sysctl.h"
io_k8s_api_core_v1_sysctl_t* instantiate_io_k8s_api_core_v1_sysctl(int include_optional);



io_k8s_api_core_v1_sysctl_t* instantiate_io_k8s_api_core_v1_sysctl(int include_optional) {
  io_k8s_api_core_v1_sysctl_t* io_k8s_api_core_v1_sysctl = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_sysctl = io_k8s_api_core_v1_sysctl_create(
      "0",
      "0"
    );
  } else {
    io_k8s_api_core_v1_sysctl = io_k8s_api_core_v1_sysctl_create(
      "0",
      "0"
    );
  }

  return io_k8s_api_core_v1_sysctl;
}


#ifdef io_k8s_api_core_v1_sysctl_MAIN

void test_io_k8s_api_core_v1_sysctl(int include_optional) {
    io_k8s_api_core_v1_sysctl_t* io_k8s_api_core_v1_sysctl_1 = instantiate_io_k8s_api_core_v1_sysctl(include_optional);

	cJSON* jsonio_k8s_api_core_v1_sysctl_1 = io_k8s_api_core_v1_sysctl_convertToJSON(io_k8s_api_core_v1_sysctl_1);
	printf("io_k8s_api_core_v1_sysctl :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_sysctl_1));
	io_k8s_api_core_v1_sysctl_t* io_k8s_api_core_v1_sysctl_2 = io_k8s_api_core_v1_sysctl_parseFromJSON(jsonio_k8s_api_core_v1_sysctl_1);
	cJSON* jsonio_k8s_api_core_v1_sysctl_2 = io_k8s_api_core_v1_sysctl_convertToJSON(io_k8s_api_core_v1_sysctl_2);
	printf("repeating io_k8s_api_core_v1_sysctl:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_sysctl_2));
}

int main() {
  test_io_k8s_api_core_v1_sysctl(1);
  test_io_k8s_api_core_v1_sysctl(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_sysctl_MAIN
#endif // io_k8s_api_core_v1_sysctl_TEST
