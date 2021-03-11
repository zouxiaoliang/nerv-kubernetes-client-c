#ifndef io_k8s_api_core_v1_client_ip_config_TEST
#define io_k8s_api_core_v1_client_ip_config_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_client_ip_config_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_client_ip_config.h"
io_k8s_api_core_v1_client_ip_config_t* instantiate_io_k8s_api_core_v1_client_ip_config(int include_optional);



io_k8s_api_core_v1_client_ip_config_t* instantiate_io_k8s_api_core_v1_client_ip_config(int include_optional) {
  io_k8s_api_core_v1_client_ip_config_t* io_k8s_api_core_v1_client_ip_config = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_client_ip_config = io_k8s_api_core_v1_client_ip_config_create(
      56
    );
  } else {
    io_k8s_api_core_v1_client_ip_config = io_k8s_api_core_v1_client_ip_config_create(
      56
    );
  }

  return io_k8s_api_core_v1_client_ip_config;
}


#ifdef io_k8s_api_core_v1_client_ip_config_MAIN

void test_io_k8s_api_core_v1_client_ip_config(int include_optional) {
    io_k8s_api_core_v1_client_ip_config_t* io_k8s_api_core_v1_client_ip_config_1 = instantiate_io_k8s_api_core_v1_client_ip_config(include_optional);

	cJSON* jsonio_k8s_api_core_v1_client_ip_config_1 = io_k8s_api_core_v1_client_ip_config_convertToJSON(io_k8s_api_core_v1_client_ip_config_1);
	printf("io_k8s_api_core_v1_client_ip_config :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_client_ip_config_1));
	io_k8s_api_core_v1_client_ip_config_t* io_k8s_api_core_v1_client_ip_config_2 = io_k8s_api_core_v1_client_ip_config_parseFromJSON(jsonio_k8s_api_core_v1_client_ip_config_1);
	cJSON* jsonio_k8s_api_core_v1_client_ip_config_2 = io_k8s_api_core_v1_client_ip_config_convertToJSON(io_k8s_api_core_v1_client_ip_config_2);
	printf("repeating io_k8s_api_core_v1_client_ip_config:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_client_ip_config_2));
}

int main() {
  test_io_k8s_api_core_v1_client_ip_config(1);
  test_io_k8s_api_core_v1_client_ip_config(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_client_ip_config_MAIN
#endif // io_k8s_api_core_v1_client_ip_config_TEST
