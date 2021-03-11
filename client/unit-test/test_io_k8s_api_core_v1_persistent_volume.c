#ifndef io_k8s_api_core_v1_persistent_volume_TEST
#define io_k8s_api_core_v1_persistent_volume_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_persistent_volume_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_persistent_volume.h"
io_k8s_api_core_v1_persistent_volume_t* instantiate_io_k8s_api_core_v1_persistent_volume(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"
#include "test_io_k8s_api_core_v1_persistent_volume_spec.c"
#include "test_io_k8s_api_core_v1_persistent_volume_status.c"


io_k8s_api_core_v1_persistent_volume_t* instantiate_io_k8s_api_core_v1_persistent_volume(int include_optional) {
  io_k8s_api_core_v1_persistent_volume_t* io_k8s_api_core_v1_persistent_volume = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_persistent_volume = io_k8s_api_core_v1_persistent_volume_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_persistent_volume_spec(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_persistent_volume_status(0)
    );
  } else {
    io_k8s_api_core_v1_persistent_volume = io_k8s_api_core_v1_persistent_volume_create(
      "0",
      "0",
      NULL,
      NULL,
      NULL
    );
  }

  return io_k8s_api_core_v1_persistent_volume;
}


#ifdef io_k8s_api_core_v1_persistent_volume_MAIN

void test_io_k8s_api_core_v1_persistent_volume(int include_optional) {
    io_k8s_api_core_v1_persistent_volume_t* io_k8s_api_core_v1_persistent_volume_1 = instantiate_io_k8s_api_core_v1_persistent_volume(include_optional);

	cJSON* jsonio_k8s_api_core_v1_persistent_volume_1 = io_k8s_api_core_v1_persistent_volume_convertToJSON(io_k8s_api_core_v1_persistent_volume_1);
	printf("io_k8s_api_core_v1_persistent_volume :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_persistent_volume_1));
	io_k8s_api_core_v1_persistent_volume_t* io_k8s_api_core_v1_persistent_volume_2 = io_k8s_api_core_v1_persistent_volume_parseFromJSON(jsonio_k8s_api_core_v1_persistent_volume_1);
	cJSON* jsonio_k8s_api_core_v1_persistent_volume_2 = io_k8s_api_core_v1_persistent_volume_convertToJSON(io_k8s_api_core_v1_persistent_volume_2);
	printf("repeating io_k8s_api_core_v1_persistent_volume:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_persistent_volume_2));
}

int main() {
  test_io_k8s_api_core_v1_persistent_volume(1);
  test_io_k8s_api_core_v1_persistent_volume(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_persistent_volume_MAIN
#endif // io_k8s_api_core_v1_persistent_volume_TEST
