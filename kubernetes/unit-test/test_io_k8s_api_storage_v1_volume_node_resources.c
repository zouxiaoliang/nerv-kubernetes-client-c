#ifndef io_k8s_api_storage_v1_volume_node_resources_TEST
#define io_k8s_api_storage_v1_volume_node_resources_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_storage_v1_volume_node_resources_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_storage_v1_volume_node_resources.h"
io_k8s_api_storage_v1_volume_node_resources_t* instantiate_io_k8s_api_storage_v1_volume_node_resources(int include_optional);



io_k8s_api_storage_v1_volume_node_resources_t* instantiate_io_k8s_api_storage_v1_volume_node_resources(int include_optional) {
  io_k8s_api_storage_v1_volume_node_resources_t* io_k8s_api_storage_v1_volume_node_resources = NULL;
  if (include_optional) {
    io_k8s_api_storage_v1_volume_node_resources = io_k8s_api_storage_v1_volume_node_resources_create(
      56
    );
  } else {
    io_k8s_api_storage_v1_volume_node_resources = io_k8s_api_storage_v1_volume_node_resources_create(
      56
    );
  }

  return io_k8s_api_storage_v1_volume_node_resources;
}


#ifdef io_k8s_api_storage_v1_volume_node_resources_MAIN

void test_io_k8s_api_storage_v1_volume_node_resources(int include_optional) {
    io_k8s_api_storage_v1_volume_node_resources_t* io_k8s_api_storage_v1_volume_node_resources_1 = instantiate_io_k8s_api_storage_v1_volume_node_resources(include_optional);

	cJSON* jsonio_k8s_api_storage_v1_volume_node_resources_1 = io_k8s_api_storage_v1_volume_node_resources_convertToJSON(io_k8s_api_storage_v1_volume_node_resources_1);
	printf("io_k8s_api_storage_v1_volume_node_resources :\n%s\n", cJSON_Print(jsonio_k8s_api_storage_v1_volume_node_resources_1));
	io_k8s_api_storage_v1_volume_node_resources_t* io_k8s_api_storage_v1_volume_node_resources_2 = io_k8s_api_storage_v1_volume_node_resources_parseFromJSON(jsonio_k8s_api_storage_v1_volume_node_resources_1);
	cJSON* jsonio_k8s_api_storage_v1_volume_node_resources_2 = io_k8s_api_storage_v1_volume_node_resources_convertToJSON(io_k8s_api_storage_v1_volume_node_resources_2);
	printf("repeating io_k8s_api_storage_v1_volume_node_resources:\n%s\n", cJSON_Print(jsonio_k8s_api_storage_v1_volume_node_resources_2));
}

int main() {
  test_io_k8s_api_storage_v1_volume_node_resources(1);
  test_io_k8s_api_storage_v1_volume_node_resources(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_storage_v1_volume_node_resources_MAIN
#endif // io_k8s_api_storage_v1_volume_node_resources_TEST
