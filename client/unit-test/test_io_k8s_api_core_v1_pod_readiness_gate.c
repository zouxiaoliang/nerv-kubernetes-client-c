#ifndef io_k8s_api_core_v1_pod_readiness_gate_TEST
#define io_k8s_api_core_v1_pod_readiness_gate_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_pod_readiness_gate_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_pod_readiness_gate.h"
io_k8s_api_core_v1_pod_readiness_gate_t* instantiate_io_k8s_api_core_v1_pod_readiness_gate(int include_optional);



io_k8s_api_core_v1_pod_readiness_gate_t* instantiate_io_k8s_api_core_v1_pod_readiness_gate(int include_optional) {
  io_k8s_api_core_v1_pod_readiness_gate_t* io_k8s_api_core_v1_pod_readiness_gate = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_pod_readiness_gate = io_k8s_api_core_v1_pod_readiness_gate_create(
      "0"
    );
  } else {
    io_k8s_api_core_v1_pod_readiness_gate = io_k8s_api_core_v1_pod_readiness_gate_create(
      "0"
    );
  }

  return io_k8s_api_core_v1_pod_readiness_gate;
}


#ifdef io_k8s_api_core_v1_pod_readiness_gate_MAIN

void test_io_k8s_api_core_v1_pod_readiness_gate(int include_optional) {
    io_k8s_api_core_v1_pod_readiness_gate_t* io_k8s_api_core_v1_pod_readiness_gate_1 = instantiate_io_k8s_api_core_v1_pod_readiness_gate(include_optional);

	cJSON* jsonio_k8s_api_core_v1_pod_readiness_gate_1 = io_k8s_api_core_v1_pod_readiness_gate_convertToJSON(io_k8s_api_core_v1_pod_readiness_gate_1);
	printf("io_k8s_api_core_v1_pod_readiness_gate :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_pod_readiness_gate_1));
	io_k8s_api_core_v1_pod_readiness_gate_t* io_k8s_api_core_v1_pod_readiness_gate_2 = io_k8s_api_core_v1_pod_readiness_gate_parseFromJSON(jsonio_k8s_api_core_v1_pod_readiness_gate_1);
	cJSON* jsonio_k8s_api_core_v1_pod_readiness_gate_2 = io_k8s_api_core_v1_pod_readiness_gate_convertToJSON(io_k8s_api_core_v1_pod_readiness_gate_2);
	printf("repeating io_k8s_api_core_v1_pod_readiness_gate:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_pod_readiness_gate_2));
}

int main() {
  test_io_k8s_api_core_v1_pod_readiness_gate(1);
  test_io_k8s_api_core_v1_pod_readiness_gate(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_pod_readiness_gate_MAIN
#endif // io_k8s_api_core_v1_pod_readiness_gate_TEST
