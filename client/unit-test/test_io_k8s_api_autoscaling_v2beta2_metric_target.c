#ifndef io_k8s_api_autoscaling_v2beta2_metric_target_TEST
#define io_k8s_api_autoscaling_v2beta2_metric_target_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_autoscaling_v2beta2_metric_target_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_autoscaling_v2beta2_metric_target.h"
io_k8s_api_autoscaling_v2beta2_metric_target_t* instantiate_io_k8s_api_autoscaling_v2beta2_metric_target(int include_optional);



io_k8s_api_autoscaling_v2beta2_metric_target_t* instantiate_io_k8s_api_autoscaling_v2beta2_metric_target(int include_optional) {
  io_k8s_api_autoscaling_v2beta2_metric_target_t* io_k8s_api_autoscaling_v2beta2_metric_target = NULL;
  if (include_optional) {
    io_k8s_api_autoscaling_v2beta2_metric_target = io_k8s_api_autoscaling_v2beta2_metric_target_create(
      56,
      "0",
      "0",
      "0"
    );
  } else {
    io_k8s_api_autoscaling_v2beta2_metric_target = io_k8s_api_autoscaling_v2beta2_metric_target_create(
      56,
      "0",
      "0",
      "0"
    );
  }

  return io_k8s_api_autoscaling_v2beta2_metric_target;
}


#ifdef io_k8s_api_autoscaling_v2beta2_metric_target_MAIN

void test_io_k8s_api_autoscaling_v2beta2_metric_target(int include_optional) {
    io_k8s_api_autoscaling_v2beta2_metric_target_t* io_k8s_api_autoscaling_v2beta2_metric_target_1 = instantiate_io_k8s_api_autoscaling_v2beta2_metric_target(include_optional);

	cJSON* jsonio_k8s_api_autoscaling_v2beta2_metric_target_1 = io_k8s_api_autoscaling_v2beta2_metric_target_convertToJSON(io_k8s_api_autoscaling_v2beta2_metric_target_1);
	printf("io_k8s_api_autoscaling_v2beta2_metric_target :\n%s\n", cJSON_Print(jsonio_k8s_api_autoscaling_v2beta2_metric_target_1));
	io_k8s_api_autoscaling_v2beta2_metric_target_t* io_k8s_api_autoscaling_v2beta2_metric_target_2 = io_k8s_api_autoscaling_v2beta2_metric_target_parseFromJSON(jsonio_k8s_api_autoscaling_v2beta2_metric_target_1);
	cJSON* jsonio_k8s_api_autoscaling_v2beta2_metric_target_2 = io_k8s_api_autoscaling_v2beta2_metric_target_convertToJSON(io_k8s_api_autoscaling_v2beta2_metric_target_2);
	printf("repeating io_k8s_api_autoscaling_v2beta2_metric_target:\n%s\n", cJSON_Print(jsonio_k8s_api_autoscaling_v2beta2_metric_target_2));
}

int main() {
  test_io_k8s_api_autoscaling_v2beta2_metric_target(1);
  test_io_k8s_api_autoscaling_v2beta2_metric_target(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_autoscaling_v2beta2_metric_target_MAIN
#endif // io_k8s_api_autoscaling_v2beta2_metric_target_TEST
