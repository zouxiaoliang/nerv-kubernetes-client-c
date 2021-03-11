#ifndef io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_TEST
#define io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options.h"
io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_t* instantiate_io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options(int include_optional);



io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_t* instantiate_io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options(int include_optional) {
  io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_t* io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options = NULL;
  if (include_optional) {
    io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options = io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_create(
      list_create(),
      "0"
    );
  } else {
    io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options = io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_create(
      list_create(),
      "0"
    );
  }

  return io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options;
}


#ifdef io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_MAIN

void test_io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options(int include_optional) {
    io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_t* io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_1 = instantiate_io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options(include_optional);

	cJSON* jsonio_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_1 = io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_convertToJSON(io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_1);
	printf("io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options :\n%s\n", cJSON_Print(jsonio_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_1));
	io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_t* io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_2 = io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_parseFromJSON(jsonio_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_1);
	cJSON* jsonio_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_2 = io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_convertToJSON(io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_2);
	printf("repeating io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options:\n%s\n", cJSON_Print(jsonio_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_2));
}

int main() {
  test_io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options(1);
  test_io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_MAIN
#endif // io_k8s_api_policy_v1beta1_supplemental_groups_strategy_options_TEST
