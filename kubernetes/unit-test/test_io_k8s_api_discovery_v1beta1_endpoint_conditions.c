#ifndef io_k8s_api_discovery_v1beta1_endpoint_conditions_TEST
#define io_k8s_api_discovery_v1beta1_endpoint_conditions_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_discovery_v1beta1_endpoint_conditions_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_discovery_v1beta1_endpoint_conditions.h"
io_k8s_api_discovery_v1beta1_endpoint_conditions_t* instantiate_io_k8s_api_discovery_v1beta1_endpoint_conditions(int include_optional);



io_k8s_api_discovery_v1beta1_endpoint_conditions_t* instantiate_io_k8s_api_discovery_v1beta1_endpoint_conditions(int include_optional) {
  io_k8s_api_discovery_v1beta1_endpoint_conditions_t* io_k8s_api_discovery_v1beta1_endpoint_conditions = NULL;
  if (include_optional) {
    io_k8s_api_discovery_v1beta1_endpoint_conditions = io_k8s_api_discovery_v1beta1_endpoint_conditions_create(
      1,
      1,
      1
    );
  } else {
    io_k8s_api_discovery_v1beta1_endpoint_conditions = io_k8s_api_discovery_v1beta1_endpoint_conditions_create(
      1,
      1,
      1
    );
  }

  return io_k8s_api_discovery_v1beta1_endpoint_conditions;
}


#ifdef io_k8s_api_discovery_v1beta1_endpoint_conditions_MAIN

void test_io_k8s_api_discovery_v1beta1_endpoint_conditions(int include_optional) {
    io_k8s_api_discovery_v1beta1_endpoint_conditions_t* io_k8s_api_discovery_v1beta1_endpoint_conditions_1 = instantiate_io_k8s_api_discovery_v1beta1_endpoint_conditions(include_optional);

	cJSON* jsonio_k8s_api_discovery_v1beta1_endpoint_conditions_1 = io_k8s_api_discovery_v1beta1_endpoint_conditions_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint_conditions_1);
	printf("io_k8s_api_discovery_v1beta1_endpoint_conditions :\n%s\n", cJSON_Print(jsonio_k8s_api_discovery_v1beta1_endpoint_conditions_1));
	io_k8s_api_discovery_v1beta1_endpoint_conditions_t* io_k8s_api_discovery_v1beta1_endpoint_conditions_2 = io_k8s_api_discovery_v1beta1_endpoint_conditions_parseFromJSON(jsonio_k8s_api_discovery_v1beta1_endpoint_conditions_1);
	cJSON* jsonio_k8s_api_discovery_v1beta1_endpoint_conditions_2 = io_k8s_api_discovery_v1beta1_endpoint_conditions_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint_conditions_2);
	printf("repeating io_k8s_api_discovery_v1beta1_endpoint_conditions:\n%s\n", cJSON_Print(jsonio_k8s_api_discovery_v1beta1_endpoint_conditions_2));
}

int main() {
  test_io_k8s_api_discovery_v1beta1_endpoint_conditions(1);
  test_io_k8s_api_discovery_v1beta1_endpoint_conditions(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_discovery_v1beta1_endpoint_conditions_MAIN
#endif // io_k8s_api_discovery_v1beta1_endpoint_conditions_TEST
