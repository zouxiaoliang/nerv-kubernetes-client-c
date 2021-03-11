#ifndef io_k8s_api_core_v1_volume_device_TEST
#define io_k8s_api_core_v1_volume_device_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_volume_device_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_volume_device.h"
io_k8s_api_core_v1_volume_device_t* instantiate_io_k8s_api_core_v1_volume_device(int include_optional);



io_k8s_api_core_v1_volume_device_t* instantiate_io_k8s_api_core_v1_volume_device(int include_optional) {
  io_k8s_api_core_v1_volume_device_t* io_k8s_api_core_v1_volume_device = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_volume_device = io_k8s_api_core_v1_volume_device_create(
      "0",
      "0"
    );
  } else {
    io_k8s_api_core_v1_volume_device = io_k8s_api_core_v1_volume_device_create(
      "0",
      "0"
    );
  }

  return io_k8s_api_core_v1_volume_device;
}


#ifdef io_k8s_api_core_v1_volume_device_MAIN

void test_io_k8s_api_core_v1_volume_device(int include_optional) {
    io_k8s_api_core_v1_volume_device_t* io_k8s_api_core_v1_volume_device_1 = instantiate_io_k8s_api_core_v1_volume_device(include_optional);

	cJSON* jsonio_k8s_api_core_v1_volume_device_1 = io_k8s_api_core_v1_volume_device_convertToJSON(io_k8s_api_core_v1_volume_device_1);
	printf("io_k8s_api_core_v1_volume_device :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_volume_device_1));
	io_k8s_api_core_v1_volume_device_t* io_k8s_api_core_v1_volume_device_2 = io_k8s_api_core_v1_volume_device_parseFromJSON(jsonio_k8s_api_core_v1_volume_device_1);
	cJSON* jsonio_k8s_api_core_v1_volume_device_2 = io_k8s_api_core_v1_volume_device_convertToJSON(io_k8s_api_core_v1_volume_device_2);
	printf("repeating io_k8s_api_core_v1_volume_device:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_volume_device_2));
}

int main() {
  test_io_k8s_api_core_v1_volume_device(1);
  test_io_k8s_api_core_v1_volume_device(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_volume_device_MAIN
#endif // io_k8s_api_core_v1_volume_device_TEST
