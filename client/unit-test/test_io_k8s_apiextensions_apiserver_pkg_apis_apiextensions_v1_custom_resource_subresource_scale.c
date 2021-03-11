#ifndef io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_TEST
#define io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale.h"
io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_t* instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale(int include_optional);



io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_t* instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale(int include_optional) {
  io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_t* io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale = NULL;
  if (include_optional) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_create(
      "0",
      "0",
      "0"
    );
  } else {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_create(
      "0",
      "0",
      "0"
    );
  }

  return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale;
}


#ifdef io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_MAIN

void test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale(int include_optional) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_t* io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_1 = instantiate_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale(include_optional);

	cJSON* jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_1 = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_1);
	printf("io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale :\n%s\n", cJSON_Print(jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_1));
	io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_t* io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_2 = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_parseFromJSON(jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_1);
	cJSON* jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_2 = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_2);
	printf("repeating io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale:\n%s\n", cJSON_Print(jsonio_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_2));
}

int main() {
  test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale(1);
  test_io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_MAIN
#endif // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_TEST
