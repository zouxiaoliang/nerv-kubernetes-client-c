#ifndef io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_TEST
#define io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec.h"
io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_t* instantiate_io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec(int include_optional);

#include "test_io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior.c"
#include "test_io_k8s_api_autoscaling_v2beta2_cross_version_object_reference.c"


io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_t* instantiate_io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec(int include_optional) {
  io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_t* io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec = NULL;
  if (include_optional) {
    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec = io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_create(
       // false, not to have infinite recursion
      instantiate_io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior(0),
      56,
      list_create(),
      56,
       // false, not to have infinite recursion
      instantiate_io_k8s_api_autoscaling_v2beta2_cross_version_object_reference(0)
    );
  } else {
    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec = io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_create(
      NULL,
      56,
      list_create(),
      56,
      NULL
    );
  }

  return io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec;
}


#ifdef io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_MAIN

void test_io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec(int include_optional) {
    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_t* io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_1 = instantiate_io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec(include_optional);

	cJSON* jsonio_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_1 = io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_convertToJSON(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_1);
	printf("io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec :\n%s\n", cJSON_Print(jsonio_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_1));
	io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_t* io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_2 = io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_parseFromJSON(jsonio_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_1);
	cJSON* jsonio_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_2 = io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_convertToJSON(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_2);
	printf("repeating io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec:\n%s\n", cJSON_Print(jsonio_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_2));
}

int main() {
  test_io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec(1);
  test_io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_MAIN
#endif // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_TEST
