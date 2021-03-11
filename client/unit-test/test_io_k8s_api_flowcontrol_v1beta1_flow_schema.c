#ifndef io_k8s_api_flowcontrol_v1beta1_flow_schema_TEST
#define io_k8s_api_flowcontrol_v1beta1_flow_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_flowcontrol_v1beta1_flow_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_flowcontrol_v1beta1_flow_schema.h"
io_k8s_api_flowcontrol_v1beta1_flow_schema_t* instantiate_io_k8s_api_flowcontrol_v1beta1_flow_schema(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"
#include "test_io_k8s_api_flowcontrol_v1beta1_flow_schema_spec.c"
#include "test_io_k8s_api_flowcontrol_v1beta1_flow_schema_status.c"


io_k8s_api_flowcontrol_v1beta1_flow_schema_t* instantiate_io_k8s_api_flowcontrol_v1beta1_flow_schema(int include_optional) {
  io_k8s_api_flowcontrol_v1beta1_flow_schema_t* io_k8s_api_flowcontrol_v1beta1_flow_schema = NULL;
  if (include_optional) {
    io_k8s_api_flowcontrol_v1beta1_flow_schema = io_k8s_api_flowcontrol_v1beta1_flow_schema_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_flowcontrol_v1beta1_flow_schema_spec(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_flowcontrol_v1beta1_flow_schema_status(0)
    );
  } else {
    io_k8s_api_flowcontrol_v1beta1_flow_schema = io_k8s_api_flowcontrol_v1beta1_flow_schema_create(
      "0",
      "0",
      NULL,
      NULL,
      NULL
    );
  }

  return io_k8s_api_flowcontrol_v1beta1_flow_schema;
}


#ifdef io_k8s_api_flowcontrol_v1beta1_flow_schema_MAIN

void test_io_k8s_api_flowcontrol_v1beta1_flow_schema(int include_optional) {
    io_k8s_api_flowcontrol_v1beta1_flow_schema_t* io_k8s_api_flowcontrol_v1beta1_flow_schema_1 = instantiate_io_k8s_api_flowcontrol_v1beta1_flow_schema(include_optional);

	cJSON* jsonio_k8s_api_flowcontrol_v1beta1_flow_schema_1 = io_k8s_api_flowcontrol_v1beta1_flow_schema_convertToJSON(io_k8s_api_flowcontrol_v1beta1_flow_schema_1);
	printf("io_k8s_api_flowcontrol_v1beta1_flow_schema :\n%s\n", cJSON_Print(jsonio_k8s_api_flowcontrol_v1beta1_flow_schema_1));
	io_k8s_api_flowcontrol_v1beta1_flow_schema_t* io_k8s_api_flowcontrol_v1beta1_flow_schema_2 = io_k8s_api_flowcontrol_v1beta1_flow_schema_parseFromJSON(jsonio_k8s_api_flowcontrol_v1beta1_flow_schema_1);
	cJSON* jsonio_k8s_api_flowcontrol_v1beta1_flow_schema_2 = io_k8s_api_flowcontrol_v1beta1_flow_schema_convertToJSON(io_k8s_api_flowcontrol_v1beta1_flow_schema_2);
	printf("repeating io_k8s_api_flowcontrol_v1beta1_flow_schema:\n%s\n", cJSON_Print(jsonio_k8s_api_flowcontrol_v1beta1_flow_schema_2));
}

int main() {
  test_io_k8s_api_flowcontrol_v1beta1_flow_schema(1);
  test_io_k8s_api_flowcontrol_v1beta1_flow_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_flowcontrol_v1beta1_flow_schema_MAIN
#endif // io_k8s_api_flowcontrol_v1beta1_flow_schema_TEST
