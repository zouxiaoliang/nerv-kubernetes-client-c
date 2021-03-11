#ifndef io_k8s_api_storage_v1_volume_error_TEST
#define io_k8s_api_storage_v1_volume_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_storage_v1_volume_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_storage_v1_volume_error.h"
io_k8s_api_storage_v1_volume_error_t* instantiate_io_k8s_api_storage_v1_volume_error(int include_optional);



io_k8s_api_storage_v1_volume_error_t* instantiate_io_k8s_api_storage_v1_volume_error(int include_optional) {
  io_k8s_api_storage_v1_volume_error_t* io_k8s_api_storage_v1_volume_error = NULL;
  if (include_optional) {
    io_k8s_api_storage_v1_volume_error = io_k8s_api_storage_v1_volume_error_create(
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    io_k8s_api_storage_v1_volume_error = io_k8s_api_storage_v1_volume_error_create(
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return io_k8s_api_storage_v1_volume_error;
}


#ifdef io_k8s_api_storage_v1_volume_error_MAIN

void test_io_k8s_api_storage_v1_volume_error(int include_optional) {
    io_k8s_api_storage_v1_volume_error_t* io_k8s_api_storage_v1_volume_error_1 = instantiate_io_k8s_api_storage_v1_volume_error(include_optional);

	cJSON* jsonio_k8s_api_storage_v1_volume_error_1 = io_k8s_api_storage_v1_volume_error_convertToJSON(io_k8s_api_storage_v1_volume_error_1);
	printf("io_k8s_api_storage_v1_volume_error :\n%s\n", cJSON_Print(jsonio_k8s_api_storage_v1_volume_error_1));
	io_k8s_api_storage_v1_volume_error_t* io_k8s_api_storage_v1_volume_error_2 = io_k8s_api_storage_v1_volume_error_parseFromJSON(jsonio_k8s_api_storage_v1_volume_error_1);
	cJSON* jsonio_k8s_api_storage_v1_volume_error_2 = io_k8s_api_storage_v1_volume_error_convertToJSON(io_k8s_api_storage_v1_volume_error_2);
	printf("repeating io_k8s_api_storage_v1_volume_error:\n%s\n", cJSON_Print(jsonio_k8s_api_storage_v1_volume_error_2));
}

int main() {
  test_io_k8s_api_storage_v1_volume_error(1);
  test_io_k8s_api_storage_v1_volume_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_storage_v1_volume_error_MAIN
#endif // io_k8s_api_storage_v1_volume_error_TEST
