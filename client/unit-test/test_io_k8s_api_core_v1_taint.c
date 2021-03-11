#ifndef io_k8s_api_core_v1_taint_TEST
#define io_k8s_api_core_v1_taint_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_taint_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_taint.h"
io_k8s_api_core_v1_taint_t* instantiate_io_k8s_api_core_v1_taint(int include_optional);



io_k8s_api_core_v1_taint_t* instantiate_io_k8s_api_core_v1_taint(int include_optional) {
  io_k8s_api_core_v1_taint_t* io_k8s_api_core_v1_taint = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_taint = io_k8s_api_core_v1_taint_create(
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  } else {
    io_k8s_api_core_v1_taint = io_k8s_api_core_v1_taint_create(
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  }

  return io_k8s_api_core_v1_taint;
}


#ifdef io_k8s_api_core_v1_taint_MAIN

void test_io_k8s_api_core_v1_taint(int include_optional) {
    io_k8s_api_core_v1_taint_t* io_k8s_api_core_v1_taint_1 = instantiate_io_k8s_api_core_v1_taint(include_optional);

	cJSON* jsonio_k8s_api_core_v1_taint_1 = io_k8s_api_core_v1_taint_convertToJSON(io_k8s_api_core_v1_taint_1);
	printf("io_k8s_api_core_v1_taint :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_taint_1));
	io_k8s_api_core_v1_taint_t* io_k8s_api_core_v1_taint_2 = io_k8s_api_core_v1_taint_parseFromJSON(jsonio_k8s_api_core_v1_taint_1);
	cJSON* jsonio_k8s_api_core_v1_taint_2 = io_k8s_api_core_v1_taint_convertToJSON(io_k8s_api_core_v1_taint_2);
	printf("repeating io_k8s_api_core_v1_taint:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_taint_2));
}

int main() {
  test_io_k8s_api_core_v1_taint(1);
  test_io_k8s_api_core_v1_taint(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_taint_MAIN
#endif // io_k8s_api_core_v1_taint_TEST
