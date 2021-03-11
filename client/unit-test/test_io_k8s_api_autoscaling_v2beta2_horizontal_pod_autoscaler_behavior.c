#ifndef io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_TEST
#define io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior.h"
io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_t* instantiate_io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior(int include_optional);

#include "test_io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules.c"
#include "test_io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules.c"


io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_t* instantiate_io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior(int include_optional) {
  io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_t* io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior = NULL;
  if (include_optional) {
    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior = io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_create(
       // false, not to have infinite recursion
      instantiate_io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules(0)
    );
  } else {
    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior = io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_create(
      NULL,
      NULL
    );
  }

  return io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior;
}


#ifdef io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_MAIN

void test_io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior(int include_optional) {
    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_t* io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_1 = instantiate_io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior(include_optional);

	cJSON* jsonio_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_1 = io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_convertToJSON(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_1);
	printf("io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior :\n%s\n", cJSON_Print(jsonio_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_1));
	io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_t* io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_2 = io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_parseFromJSON(jsonio_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_1);
	cJSON* jsonio_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_2 = io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_convertToJSON(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_2);
	printf("repeating io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior:\n%s\n", cJSON_Print(jsonio_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_2));
}

int main() {
  test_io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior(1);
  test_io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_MAIN
#endif // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_TEST
