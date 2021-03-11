#ifndef io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_TEST
#define io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_apps_v1_rolling_update_stateful_set_strategy.h"
io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t* instantiate_io_k8s_api_apps_v1_rolling_update_stateful_set_strategy(int include_optional);



io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t* instantiate_io_k8s_api_apps_v1_rolling_update_stateful_set_strategy(int include_optional) {
  io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t* io_k8s_api_apps_v1_rolling_update_stateful_set_strategy = NULL;
  if (include_optional) {
    io_k8s_api_apps_v1_rolling_update_stateful_set_strategy = io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_create(
      56
    );
  } else {
    io_k8s_api_apps_v1_rolling_update_stateful_set_strategy = io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_create(
      56
    );
  }

  return io_k8s_api_apps_v1_rolling_update_stateful_set_strategy;
}


#ifdef io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_MAIN

void test_io_k8s_api_apps_v1_rolling_update_stateful_set_strategy(int include_optional) {
    io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t* io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_1 = instantiate_io_k8s_api_apps_v1_rolling_update_stateful_set_strategy(include_optional);

	cJSON* jsonio_k8s_api_apps_v1_rolling_update_stateful_set_strategy_1 = io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_convertToJSON(io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_1);
	printf("io_k8s_api_apps_v1_rolling_update_stateful_set_strategy :\n%s\n", cJSON_Print(jsonio_k8s_api_apps_v1_rolling_update_stateful_set_strategy_1));
	io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t* io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_2 = io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_parseFromJSON(jsonio_k8s_api_apps_v1_rolling_update_stateful_set_strategy_1);
	cJSON* jsonio_k8s_api_apps_v1_rolling_update_stateful_set_strategy_2 = io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_convertToJSON(io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_2);
	printf("repeating io_k8s_api_apps_v1_rolling_update_stateful_set_strategy:\n%s\n", cJSON_Print(jsonio_k8s_api_apps_v1_rolling_update_stateful_set_strategy_2));
}

int main() {
  test_io_k8s_api_apps_v1_rolling_update_stateful_set_strategy(1);
  test_io_k8s_api_apps_v1_rolling_update_stateful_set_strategy(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_MAIN
#endif // io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_TEST
