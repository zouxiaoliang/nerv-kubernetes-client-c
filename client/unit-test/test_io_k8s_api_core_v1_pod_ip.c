#ifndef io_k8s_api_core_v1_pod_ip_TEST
#define io_k8s_api_core_v1_pod_ip_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_pod_ip_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_pod_ip.h"
io_k8s_api_core_v1_pod_ip_t* instantiate_io_k8s_api_core_v1_pod_ip(int include_optional);



io_k8s_api_core_v1_pod_ip_t* instantiate_io_k8s_api_core_v1_pod_ip(int include_optional) {
  io_k8s_api_core_v1_pod_ip_t* io_k8s_api_core_v1_pod_ip = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_pod_ip = io_k8s_api_core_v1_pod_ip_create(
      "0"
    );
  } else {
    io_k8s_api_core_v1_pod_ip = io_k8s_api_core_v1_pod_ip_create(
      "0"
    );
  }

  return io_k8s_api_core_v1_pod_ip;
}


#ifdef io_k8s_api_core_v1_pod_ip_MAIN

void test_io_k8s_api_core_v1_pod_ip(int include_optional) {
    io_k8s_api_core_v1_pod_ip_t* io_k8s_api_core_v1_pod_ip_1 = instantiate_io_k8s_api_core_v1_pod_ip(include_optional);

	cJSON* jsonio_k8s_api_core_v1_pod_ip_1 = io_k8s_api_core_v1_pod_ip_convertToJSON(io_k8s_api_core_v1_pod_ip_1);
	printf("io_k8s_api_core_v1_pod_ip :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_pod_ip_1));
	io_k8s_api_core_v1_pod_ip_t* io_k8s_api_core_v1_pod_ip_2 = io_k8s_api_core_v1_pod_ip_parseFromJSON(jsonio_k8s_api_core_v1_pod_ip_1);
	cJSON* jsonio_k8s_api_core_v1_pod_ip_2 = io_k8s_api_core_v1_pod_ip_convertToJSON(io_k8s_api_core_v1_pod_ip_2);
	printf("repeating io_k8s_api_core_v1_pod_ip:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_pod_ip_2));
}

int main() {
  test_io_k8s_api_core_v1_pod_ip(1);
  test_io_k8s_api_core_v1_pod_ip(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_pod_ip_MAIN
#endif // io_k8s_api_core_v1_pod_ip_TEST
