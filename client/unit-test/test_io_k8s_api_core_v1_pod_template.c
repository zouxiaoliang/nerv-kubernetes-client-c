#ifndef io_k8s_api_core_v1_pod_template_TEST
#define io_k8s_api_core_v1_pod_template_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_pod_template_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_pod_template.h"
io_k8s_api_core_v1_pod_template_t* instantiate_io_k8s_api_core_v1_pod_template(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"
#include "test_io_k8s_api_core_v1_pod_template_spec.c"


io_k8s_api_core_v1_pod_template_t* instantiate_io_k8s_api_core_v1_pod_template(int include_optional) {
  io_k8s_api_core_v1_pod_template_t* io_k8s_api_core_v1_pod_template = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_pod_template = io_k8s_api_core_v1_pod_template_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_pod_template_spec(0)
    );
  } else {
    io_k8s_api_core_v1_pod_template = io_k8s_api_core_v1_pod_template_create(
      "0",
      "0",
      NULL,
      NULL
    );
  }

  return io_k8s_api_core_v1_pod_template;
}


#ifdef io_k8s_api_core_v1_pod_template_MAIN

void test_io_k8s_api_core_v1_pod_template(int include_optional) {
    io_k8s_api_core_v1_pod_template_t* io_k8s_api_core_v1_pod_template_1 = instantiate_io_k8s_api_core_v1_pod_template(include_optional);

	cJSON* jsonio_k8s_api_core_v1_pod_template_1 = io_k8s_api_core_v1_pod_template_convertToJSON(io_k8s_api_core_v1_pod_template_1);
	printf("io_k8s_api_core_v1_pod_template :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_pod_template_1));
	io_k8s_api_core_v1_pod_template_t* io_k8s_api_core_v1_pod_template_2 = io_k8s_api_core_v1_pod_template_parseFromJSON(jsonio_k8s_api_core_v1_pod_template_1);
	cJSON* jsonio_k8s_api_core_v1_pod_template_2 = io_k8s_api_core_v1_pod_template_convertToJSON(io_k8s_api_core_v1_pod_template_2);
	printf("repeating io_k8s_api_core_v1_pod_template:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_pod_template_2));
}

int main() {
  test_io_k8s_api_core_v1_pod_template(1);
  test_io_k8s_api_core_v1_pod_template(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_pod_template_MAIN
#endif // io_k8s_api_core_v1_pod_template_TEST
