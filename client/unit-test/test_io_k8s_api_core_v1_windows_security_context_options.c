#ifndef io_k8s_api_core_v1_windows_security_context_options_TEST
#define io_k8s_api_core_v1_windows_security_context_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_windows_security_context_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_windows_security_context_options.h"
io_k8s_api_core_v1_windows_security_context_options_t* instantiate_io_k8s_api_core_v1_windows_security_context_options(int include_optional);



io_k8s_api_core_v1_windows_security_context_options_t* instantiate_io_k8s_api_core_v1_windows_security_context_options(int include_optional) {
  io_k8s_api_core_v1_windows_security_context_options_t* io_k8s_api_core_v1_windows_security_context_options = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_windows_security_context_options = io_k8s_api_core_v1_windows_security_context_options_create(
      "0",
      "0",
      "0"
    );
  } else {
    io_k8s_api_core_v1_windows_security_context_options = io_k8s_api_core_v1_windows_security_context_options_create(
      "0",
      "0",
      "0"
    );
  }

  return io_k8s_api_core_v1_windows_security_context_options;
}


#ifdef io_k8s_api_core_v1_windows_security_context_options_MAIN

void test_io_k8s_api_core_v1_windows_security_context_options(int include_optional) {
    io_k8s_api_core_v1_windows_security_context_options_t* io_k8s_api_core_v1_windows_security_context_options_1 = instantiate_io_k8s_api_core_v1_windows_security_context_options(include_optional);

	cJSON* jsonio_k8s_api_core_v1_windows_security_context_options_1 = io_k8s_api_core_v1_windows_security_context_options_convertToJSON(io_k8s_api_core_v1_windows_security_context_options_1);
	printf("io_k8s_api_core_v1_windows_security_context_options :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_windows_security_context_options_1));
	io_k8s_api_core_v1_windows_security_context_options_t* io_k8s_api_core_v1_windows_security_context_options_2 = io_k8s_api_core_v1_windows_security_context_options_parseFromJSON(jsonio_k8s_api_core_v1_windows_security_context_options_1);
	cJSON* jsonio_k8s_api_core_v1_windows_security_context_options_2 = io_k8s_api_core_v1_windows_security_context_options_convertToJSON(io_k8s_api_core_v1_windows_security_context_options_2);
	printf("repeating io_k8s_api_core_v1_windows_security_context_options:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_windows_security_context_options_2));
}

int main() {
  test_io_k8s_api_core_v1_windows_security_context_options(1);
  test_io_k8s_api_core_v1_windows_security_context_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_windows_security_context_options_MAIN
#endif // io_k8s_api_core_v1_windows_security_context_options_TEST
