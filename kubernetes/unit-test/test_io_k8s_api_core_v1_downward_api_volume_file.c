#ifndef io_k8s_api_core_v1_downward_api_volume_file_TEST
#define io_k8s_api_core_v1_downward_api_volume_file_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_downward_api_volume_file_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_downward_api_volume_file.h"
io_k8s_api_core_v1_downward_api_volume_file_t* instantiate_io_k8s_api_core_v1_downward_api_volume_file(int include_optional);

#include "test_io_k8s_api_core_v1_object_field_selector.c"
#include "test_io_k8s_api_core_v1_resource_field_selector.c"


io_k8s_api_core_v1_downward_api_volume_file_t* instantiate_io_k8s_api_core_v1_downward_api_volume_file(int include_optional) {
  io_k8s_api_core_v1_downward_api_volume_file_t* io_k8s_api_core_v1_downward_api_volume_file = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_downward_api_volume_file = io_k8s_api_core_v1_downward_api_volume_file_create(
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_object_field_selector(0),
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_resource_field_selector(0)
    );
  } else {
    io_k8s_api_core_v1_downward_api_volume_file = io_k8s_api_core_v1_downward_api_volume_file_create(
      NULL,
      56,
      "0",
      NULL
    );
  }

  return io_k8s_api_core_v1_downward_api_volume_file;
}


#ifdef io_k8s_api_core_v1_downward_api_volume_file_MAIN

void test_io_k8s_api_core_v1_downward_api_volume_file(int include_optional) {
    io_k8s_api_core_v1_downward_api_volume_file_t* io_k8s_api_core_v1_downward_api_volume_file_1 = instantiate_io_k8s_api_core_v1_downward_api_volume_file(include_optional);

	cJSON* jsonio_k8s_api_core_v1_downward_api_volume_file_1 = io_k8s_api_core_v1_downward_api_volume_file_convertToJSON(io_k8s_api_core_v1_downward_api_volume_file_1);
	printf("io_k8s_api_core_v1_downward_api_volume_file :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_downward_api_volume_file_1));
	io_k8s_api_core_v1_downward_api_volume_file_t* io_k8s_api_core_v1_downward_api_volume_file_2 = io_k8s_api_core_v1_downward_api_volume_file_parseFromJSON(jsonio_k8s_api_core_v1_downward_api_volume_file_1);
	cJSON* jsonio_k8s_api_core_v1_downward_api_volume_file_2 = io_k8s_api_core_v1_downward_api_volume_file_convertToJSON(io_k8s_api_core_v1_downward_api_volume_file_2);
	printf("repeating io_k8s_api_core_v1_downward_api_volume_file:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_downward_api_volume_file_2));
}

int main() {
  test_io_k8s_api_core_v1_downward_api_volume_file(1);
  test_io_k8s_api_core_v1_downward_api_volume_file(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_downward_api_volume_file_MAIN
#endif // io_k8s_api_core_v1_downward_api_volume_file_TEST
