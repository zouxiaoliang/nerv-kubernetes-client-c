#ifndef io_k8s_api_apps_v1_deployment_TEST
#define io_k8s_api_apps_v1_deployment_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_apps_v1_deployment_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_apps_v1_deployment.h"
io_k8s_api_apps_v1_deployment_t* instantiate_io_k8s_api_apps_v1_deployment(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"
#include "test_io_k8s_api_apps_v1_deployment_spec.c"
#include "test_io_k8s_api_apps_v1_deployment_status.c"


io_k8s_api_apps_v1_deployment_t* instantiate_io_k8s_api_apps_v1_deployment(int include_optional) {
  io_k8s_api_apps_v1_deployment_t* io_k8s_api_apps_v1_deployment = NULL;
  if (include_optional) {
    io_k8s_api_apps_v1_deployment = io_k8s_api_apps_v1_deployment_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_apps_v1_deployment_spec(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_apps_v1_deployment_status(0)
    );
  } else {
    io_k8s_api_apps_v1_deployment = io_k8s_api_apps_v1_deployment_create(
      "0",
      "0",
      NULL,
      NULL,
      NULL
    );
  }

  return io_k8s_api_apps_v1_deployment;
}


#ifdef io_k8s_api_apps_v1_deployment_MAIN

void test_io_k8s_api_apps_v1_deployment(int include_optional) {
    io_k8s_api_apps_v1_deployment_t* io_k8s_api_apps_v1_deployment_1 = instantiate_io_k8s_api_apps_v1_deployment(include_optional);

	cJSON* jsonio_k8s_api_apps_v1_deployment_1 = io_k8s_api_apps_v1_deployment_convertToJSON(io_k8s_api_apps_v1_deployment_1);
	printf("io_k8s_api_apps_v1_deployment :\n%s\n", cJSON_Print(jsonio_k8s_api_apps_v1_deployment_1));
	io_k8s_api_apps_v1_deployment_t* io_k8s_api_apps_v1_deployment_2 = io_k8s_api_apps_v1_deployment_parseFromJSON(jsonio_k8s_api_apps_v1_deployment_1);
	cJSON* jsonio_k8s_api_apps_v1_deployment_2 = io_k8s_api_apps_v1_deployment_convertToJSON(io_k8s_api_apps_v1_deployment_2);
	printf("repeating io_k8s_api_apps_v1_deployment:\n%s\n", cJSON_Print(jsonio_k8s_api_apps_v1_deployment_2));
}

int main() {
  test_io_k8s_api_apps_v1_deployment(1);
  test_io_k8s_api_apps_v1_deployment(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_apps_v1_deployment_MAIN
#endif // io_k8s_api_apps_v1_deployment_TEST
