#ifndef io_k8s_api_core_v1_object_field_selector_TEST
#define io_k8s_api_core_v1_object_field_selector_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_object_field_selector_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_object_field_selector.h"
io_k8s_api_core_v1_object_field_selector_t* instantiate_io_k8s_api_core_v1_object_field_selector(int include_optional);



io_k8s_api_core_v1_object_field_selector_t* instantiate_io_k8s_api_core_v1_object_field_selector(int include_optional) {
  io_k8s_api_core_v1_object_field_selector_t* io_k8s_api_core_v1_object_field_selector = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_object_field_selector = io_k8s_api_core_v1_object_field_selector_create(
      "0",
      "0"
    );
  } else {
    io_k8s_api_core_v1_object_field_selector = io_k8s_api_core_v1_object_field_selector_create(
      "0",
      "0"
    );
  }

  return io_k8s_api_core_v1_object_field_selector;
}


#ifdef io_k8s_api_core_v1_object_field_selector_MAIN

void test_io_k8s_api_core_v1_object_field_selector(int include_optional) {
    io_k8s_api_core_v1_object_field_selector_t* io_k8s_api_core_v1_object_field_selector_1 = instantiate_io_k8s_api_core_v1_object_field_selector(include_optional);

	cJSON* jsonio_k8s_api_core_v1_object_field_selector_1 = io_k8s_api_core_v1_object_field_selector_convertToJSON(io_k8s_api_core_v1_object_field_selector_1);
	printf("io_k8s_api_core_v1_object_field_selector :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_object_field_selector_1));
	io_k8s_api_core_v1_object_field_selector_t* io_k8s_api_core_v1_object_field_selector_2 = io_k8s_api_core_v1_object_field_selector_parseFromJSON(jsonio_k8s_api_core_v1_object_field_selector_1);
	cJSON* jsonio_k8s_api_core_v1_object_field_selector_2 = io_k8s_api_core_v1_object_field_selector_convertToJSON(io_k8s_api_core_v1_object_field_selector_2);
	printf("repeating io_k8s_api_core_v1_object_field_selector:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_object_field_selector_2));
}

int main() {
  test_io_k8s_api_core_v1_object_field_selector(1);
  test_io_k8s_api_core_v1_object_field_selector(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_object_field_selector_MAIN
#endif // io_k8s_api_core_v1_object_field_selector_TEST
