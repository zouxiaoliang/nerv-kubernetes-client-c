#ifndef io_k8s_api_core_v1_limit_range_item_TEST
#define io_k8s_api_core_v1_limit_range_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_limit_range_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_limit_range_item.h"
io_k8s_api_core_v1_limit_range_item_t* instantiate_io_k8s_api_core_v1_limit_range_item(int include_optional);



io_k8s_api_core_v1_limit_range_item_t* instantiate_io_k8s_api_core_v1_limit_range_item(int include_optional) {
  io_k8s_api_core_v1_limit_range_item_t* io_k8s_api_core_v1_limit_range_item = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_limit_range_item = io_k8s_api_core_v1_limit_range_item_create(
      list_create(),
      list_create(),
      list_create(),
      list_create(),
      list_create(),
      "0"
    );
  } else {
    io_k8s_api_core_v1_limit_range_item = io_k8s_api_core_v1_limit_range_item_create(
      list_create(),
      list_create(),
      list_create(),
      list_create(),
      list_create(),
      "0"
    );
  }

  return io_k8s_api_core_v1_limit_range_item;
}


#ifdef io_k8s_api_core_v1_limit_range_item_MAIN

void test_io_k8s_api_core_v1_limit_range_item(int include_optional) {
    io_k8s_api_core_v1_limit_range_item_t* io_k8s_api_core_v1_limit_range_item_1 = instantiate_io_k8s_api_core_v1_limit_range_item(include_optional);

	cJSON* jsonio_k8s_api_core_v1_limit_range_item_1 = io_k8s_api_core_v1_limit_range_item_convertToJSON(io_k8s_api_core_v1_limit_range_item_1);
	printf("io_k8s_api_core_v1_limit_range_item :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_limit_range_item_1));
	io_k8s_api_core_v1_limit_range_item_t* io_k8s_api_core_v1_limit_range_item_2 = io_k8s_api_core_v1_limit_range_item_parseFromJSON(jsonio_k8s_api_core_v1_limit_range_item_1);
	cJSON* jsonio_k8s_api_core_v1_limit_range_item_2 = io_k8s_api_core_v1_limit_range_item_convertToJSON(io_k8s_api_core_v1_limit_range_item_2);
	printf("repeating io_k8s_api_core_v1_limit_range_item:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_limit_range_item_2));
}

int main() {
  test_io_k8s_api_core_v1_limit_range_item(1);
  test_io_k8s_api_core_v1_limit_range_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_limit_range_item_MAIN
#endif // io_k8s_api_core_v1_limit_range_item_TEST
