#ifndef io_k8s_api_core_v1_container_image_TEST
#define io_k8s_api_core_v1_container_image_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_container_image_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_container_image.h"
io_k8s_api_core_v1_container_image_t* instantiate_io_k8s_api_core_v1_container_image(int include_optional);



io_k8s_api_core_v1_container_image_t* instantiate_io_k8s_api_core_v1_container_image(int include_optional) {
  io_k8s_api_core_v1_container_image_t* io_k8s_api_core_v1_container_image = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_container_image = io_k8s_api_core_v1_container_image_create(
      list_create(),
      56
    );
  } else {
    io_k8s_api_core_v1_container_image = io_k8s_api_core_v1_container_image_create(
      list_create(),
      56
    );
  }

  return io_k8s_api_core_v1_container_image;
}


#ifdef io_k8s_api_core_v1_container_image_MAIN

void test_io_k8s_api_core_v1_container_image(int include_optional) {
    io_k8s_api_core_v1_container_image_t* io_k8s_api_core_v1_container_image_1 = instantiate_io_k8s_api_core_v1_container_image(include_optional);

	cJSON* jsonio_k8s_api_core_v1_container_image_1 = io_k8s_api_core_v1_container_image_convertToJSON(io_k8s_api_core_v1_container_image_1);
	printf("io_k8s_api_core_v1_container_image :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_container_image_1));
	io_k8s_api_core_v1_container_image_t* io_k8s_api_core_v1_container_image_2 = io_k8s_api_core_v1_container_image_parseFromJSON(jsonio_k8s_api_core_v1_container_image_1);
	cJSON* jsonio_k8s_api_core_v1_container_image_2 = io_k8s_api_core_v1_container_image_convertToJSON(io_k8s_api_core_v1_container_image_2);
	printf("repeating io_k8s_api_core_v1_container_image:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_container_image_2));
}

int main() {
  test_io_k8s_api_core_v1_container_image(1);
  test_io_k8s_api_core_v1_container_image(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_container_image_MAIN
#endif // io_k8s_api_core_v1_container_image_TEST
