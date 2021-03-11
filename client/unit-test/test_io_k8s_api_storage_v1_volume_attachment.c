#ifndef io_k8s_api_storage_v1_volume_attachment_TEST
#define io_k8s_api_storage_v1_volume_attachment_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_storage_v1_volume_attachment_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_storage_v1_volume_attachment.h"
io_k8s_api_storage_v1_volume_attachment_t* instantiate_io_k8s_api_storage_v1_volume_attachment(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"
#include "test_io_k8s_api_storage_v1_volume_attachment_spec.c"
#include "test_io_k8s_api_storage_v1_volume_attachment_status.c"


io_k8s_api_storage_v1_volume_attachment_t* instantiate_io_k8s_api_storage_v1_volume_attachment(int include_optional) {
  io_k8s_api_storage_v1_volume_attachment_t* io_k8s_api_storage_v1_volume_attachment = NULL;
  if (include_optional) {
    io_k8s_api_storage_v1_volume_attachment = io_k8s_api_storage_v1_volume_attachment_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_storage_v1_volume_attachment_spec(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_storage_v1_volume_attachment_status(0)
    );
  } else {
    io_k8s_api_storage_v1_volume_attachment = io_k8s_api_storage_v1_volume_attachment_create(
      "0",
      "0",
      NULL,
      NULL,
      NULL
    );
  }

  return io_k8s_api_storage_v1_volume_attachment;
}


#ifdef io_k8s_api_storage_v1_volume_attachment_MAIN

void test_io_k8s_api_storage_v1_volume_attachment(int include_optional) {
    io_k8s_api_storage_v1_volume_attachment_t* io_k8s_api_storage_v1_volume_attachment_1 = instantiate_io_k8s_api_storage_v1_volume_attachment(include_optional);

	cJSON* jsonio_k8s_api_storage_v1_volume_attachment_1 = io_k8s_api_storage_v1_volume_attachment_convertToJSON(io_k8s_api_storage_v1_volume_attachment_1);
	printf("io_k8s_api_storage_v1_volume_attachment :\n%s\n", cJSON_Print(jsonio_k8s_api_storage_v1_volume_attachment_1));
	io_k8s_api_storage_v1_volume_attachment_t* io_k8s_api_storage_v1_volume_attachment_2 = io_k8s_api_storage_v1_volume_attachment_parseFromJSON(jsonio_k8s_api_storage_v1_volume_attachment_1);
	cJSON* jsonio_k8s_api_storage_v1_volume_attachment_2 = io_k8s_api_storage_v1_volume_attachment_convertToJSON(io_k8s_api_storage_v1_volume_attachment_2);
	printf("repeating io_k8s_api_storage_v1_volume_attachment:\n%s\n", cJSON_Print(jsonio_k8s_api_storage_v1_volume_attachment_2));
}

int main() {
  test_io_k8s_api_storage_v1_volume_attachment(1);
  test_io_k8s_api_storage_v1_volume_attachment(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_storage_v1_volume_attachment_MAIN
#endif // io_k8s_api_storage_v1_volume_attachment_TEST
