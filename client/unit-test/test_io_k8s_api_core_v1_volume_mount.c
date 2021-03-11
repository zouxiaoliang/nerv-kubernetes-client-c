#ifndef io_k8s_api_core_v1_volume_mount_TEST
#define io_k8s_api_core_v1_volume_mount_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_volume_mount_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_volume_mount.h"
io_k8s_api_core_v1_volume_mount_t* instantiate_io_k8s_api_core_v1_volume_mount(int include_optional);



io_k8s_api_core_v1_volume_mount_t* instantiate_io_k8s_api_core_v1_volume_mount(int include_optional) {
  io_k8s_api_core_v1_volume_mount_t* io_k8s_api_core_v1_volume_mount = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_volume_mount = io_k8s_api_core_v1_volume_mount_create(
      "0",
      "0",
      "0",
      1,
      "0",
      "0"
    );
  } else {
    io_k8s_api_core_v1_volume_mount = io_k8s_api_core_v1_volume_mount_create(
      "0",
      "0",
      "0",
      1,
      "0",
      "0"
    );
  }

  return io_k8s_api_core_v1_volume_mount;
}


#ifdef io_k8s_api_core_v1_volume_mount_MAIN

void test_io_k8s_api_core_v1_volume_mount(int include_optional) {
    io_k8s_api_core_v1_volume_mount_t* io_k8s_api_core_v1_volume_mount_1 = instantiate_io_k8s_api_core_v1_volume_mount(include_optional);

	cJSON* jsonio_k8s_api_core_v1_volume_mount_1 = io_k8s_api_core_v1_volume_mount_convertToJSON(io_k8s_api_core_v1_volume_mount_1);
	printf("io_k8s_api_core_v1_volume_mount :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_volume_mount_1));
	io_k8s_api_core_v1_volume_mount_t* io_k8s_api_core_v1_volume_mount_2 = io_k8s_api_core_v1_volume_mount_parseFromJSON(jsonio_k8s_api_core_v1_volume_mount_1);
	cJSON* jsonio_k8s_api_core_v1_volume_mount_2 = io_k8s_api_core_v1_volume_mount_convertToJSON(io_k8s_api_core_v1_volume_mount_2);
	printf("repeating io_k8s_api_core_v1_volume_mount:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_volume_mount_2));
}

int main() {
  test_io_k8s_api_core_v1_volume_mount(1);
  test_io_k8s_api_core_v1_volume_mount(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_volume_mount_MAIN
#endif // io_k8s_api_core_v1_volume_mount_TEST
