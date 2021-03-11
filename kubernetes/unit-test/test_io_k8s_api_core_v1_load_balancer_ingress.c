#ifndef io_k8s_api_core_v1_load_balancer_ingress_TEST
#define io_k8s_api_core_v1_load_balancer_ingress_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_load_balancer_ingress_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_load_balancer_ingress.h"
io_k8s_api_core_v1_load_balancer_ingress_t* instantiate_io_k8s_api_core_v1_load_balancer_ingress(int include_optional);



io_k8s_api_core_v1_load_balancer_ingress_t* instantiate_io_k8s_api_core_v1_load_balancer_ingress(int include_optional) {
  io_k8s_api_core_v1_load_balancer_ingress_t* io_k8s_api_core_v1_load_balancer_ingress = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_load_balancer_ingress = io_k8s_api_core_v1_load_balancer_ingress_create(
      "0",
      "0",
      list_create()
    );
  } else {
    io_k8s_api_core_v1_load_balancer_ingress = io_k8s_api_core_v1_load_balancer_ingress_create(
      "0",
      "0",
      list_create()
    );
  }

  return io_k8s_api_core_v1_load_balancer_ingress;
}


#ifdef io_k8s_api_core_v1_load_balancer_ingress_MAIN

void test_io_k8s_api_core_v1_load_balancer_ingress(int include_optional) {
    io_k8s_api_core_v1_load_balancer_ingress_t* io_k8s_api_core_v1_load_balancer_ingress_1 = instantiate_io_k8s_api_core_v1_load_balancer_ingress(include_optional);

	cJSON* jsonio_k8s_api_core_v1_load_balancer_ingress_1 = io_k8s_api_core_v1_load_balancer_ingress_convertToJSON(io_k8s_api_core_v1_load_balancer_ingress_1);
	printf("io_k8s_api_core_v1_load_balancer_ingress :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_load_balancer_ingress_1));
	io_k8s_api_core_v1_load_balancer_ingress_t* io_k8s_api_core_v1_load_balancer_ingress_2 = io_k8s_api_core_v1_load_balancer_ingress_parseFromJSON(jsonio_k8s_api_core_v1_load_balancer_ingress_1);
	cJSON* jsonio_k8s_api_core_v1_load_balancer_ingress_2 = io_k8s_api_core_v1_load_balancer_ingress_convertToJSON(io_k8s_api_core_v1_load_balancer_ingress_2);
	printf("repeating io_k8s_api_core_v1_load_balancer_ingress:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_load_balancer_ingress_2));
}

int main() {
  test_io_k8s_api_core_v1_load_balancer_ingress(1);
  test_io_k8s_api_core_v1_load_balancer_ingress(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_load_balancer_ingress_MAIN
#endif // io_k8s_api_core_v1_load_balancer_ingress_TEST
