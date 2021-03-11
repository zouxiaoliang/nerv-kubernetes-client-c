#ifndef io_k8s_api_core_v1_pod_dns_config_option_TEST
#define io_k8s_api_core_v1_pod_dns_config_option_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_pod_dns_config_option_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_pod_dns_config_option.h"
io_k8s_api_core_v1_pod_dns_config_option_t* instantiate_io_k8s_api_core_v1_pod_dns_config_option(int include_optional);



io_k8s_api_core_v1_pod_dns_config_option_t* instantiate_io_k8s_api_core_v1_pod_dns_config_option(int include_optional) {
  io_k8s_api_core_v1_pod_dns_config_option_t* io_k8s_api_core_v1_pod_dns_config_option = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_pod_dns_config_option = io_k8s_api_core_v1_pod_dns_config_option_create(
      "0",
      "0"
    );
  } else {
    io_k8s_api_core_v1_pod_dns_config_option = io_k8s_api_core_v1_pod_dns_config_option_create(
      "0",
      "0"
    );
  }

  return io_k8s_api_core_v1_pod_dns_config_option;
}


#ifdef io_k8s_api_core_v1_pod_dns_config_option_MAIN

void test_io_k8s_api_core_v1_pod_dns_config_option(int include_optional) {
    io_k8s_api_core_v1_pod_dns_config_option_t* io_k8s_api_core_v1_pod_dns_config_option_1 = instantiate_io_k8s_api_core_v1_pod_dns_config_option(include_optional);

	cJSON* jsonio_k8s_api_core_v1_pod_dns_config_option_1 = io_k8s_api_core_v1_pod_dns_config_option_convertToJSON(io_k8s_api_core_v1_pod_dns_config_option_1);
	printf("io_k8s_api_core_v1_pod_dns_config_option :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_pod_dns_config_option_1));
	io_k8s_api_core_v1_pod_dns_config_option_t* io_k8s_api_core_v1_pod_dns_config_option_2 = io_k8s_api_core_v1_pod_dns_config_option_parseFromJSON(jsonio_k8s_api_core_v1_pod_dns_config_option_1);
	cJSON* jsonio_k8s_api_core_v1_pod_dns_config_option_2 = io_k8s_api_core_v1_pod_dns_config_option_convertToJSON(io_k8s_api_core_v1_pod_dns_config_option_2);
	printf("repeating io_k8s_api_core_v1_pod_dns_config_option:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_pod_dns_config_option_2));
}

int main() {
  test_io_k8s_api_core_v1_pod_dns_config_option(1);
  test_io_k8s_api_core_v1_pod_dns_config_option(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_pod_dns_config_option_MAIN
#endif // io_k8s_api_core_v1_pod_dns_config_option_TEST
