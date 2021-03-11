#ifndef io_k8s_api_core_v1_resource_requirements_TEST
#define io_k8s_api_core_v1_resource_requirements_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_resource_requirements_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_resource_requirements.h"
io_k8s_api_core_v1_resource_requirements_t* instantiate_io_k8s_api_core_v1_resource_requirements(int include_optional);



io_k8s_api_core_v1_resource_requirements_t* instantiate_io_k8s_api_core_v1_resource_requirements(int include_optional) {
  io_k8s_api_core_v1_resource_requirements_t* io_k8s_api_core_v1_resource_requirements = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_resource_requirements = io_k8s_api_core_v1_resource_requirements_create(
      list_create(),
      list_create()
    );
  } else {
    io_k8s_api_core_v1_resource_requirements = io_k8s_api_core_v1_resource_requirements_create(
      list_create(),
      list_create()
    );
  }

  return io_k8s_api_core_v1_resource_requirements;
}


#ifdef io_k8s_api_core_v1_resource_requirements_MAIN

void test_io_k8s_api_core_v1_resource_requirements(int include_optional) {
    io_k8s_api_core_v1_resource_requirements_t* io_k8s_api_core_v1_resource_requirements_1 = instantiate_io_k8s_api_core_v1_resource_requirements(include_optional);

	cJSON* jsonio_k8s_api_core_v1_resource_requirements_1 = io_k8s_api_core_v1_resource_requirements_convertToJSON(io_k8s_api_core_v1_resource_requirements_1);
	printf("io_k8s_api_core_v1_resource_requirements :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_resource_requirements_1));
	io_k8s_api_core_v1_resource_requirements_t* io_k8s_api_core_v1_resource_requirements_2 = io_k8s_api_core_v1_resource_requirements_parseFromJSON(jsonio_k8s_api_core_v1_resource_requirements_1);
	cJSON* jsonio_k8s_api_core_v1_resource_requirements_2 = io_k8s_api_core_v1_resource_requirements_convertToJSON(io_k8s_api_core_v1_resource_requirements_2);
	printf("repeating io_k8s_api_core_v1_resource_requirements:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_resource_requirements_2));
}

int main() {
  test_io_k8s_api_core_v1_resource_requirements(1);
  test_io_k8s_api_core_v1_resource_requirements(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_resource_requirements_MAIN
#endif // io_k8s_api_core_v1_resource_requirements_TEST
