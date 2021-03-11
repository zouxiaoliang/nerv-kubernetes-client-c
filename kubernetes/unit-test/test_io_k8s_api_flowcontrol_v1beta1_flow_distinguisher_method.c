#ifndef io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_TEST
#define io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method.h"
io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t* instantiate_io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method(int include_optional);



io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t* instantiate_io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method(int include_optional) {
  io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t* io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method = NULL;
  if (include_optional) {
    io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method = io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_create(
      "0"
    );
  } else {
    io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method = io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_create(
      "0"
    );
  }

  return io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method;
}


#ifdef io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_MAIN

void test_io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method(int include_optional) {
    io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t* io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_1 = instantiate_io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method(include_optional);

	cJSON* jsonio_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_1 = io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_convertToJSON(io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_1);
	printf("io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method :\n%s\n", cJSON_Print(jsonio_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_1));
	io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t* io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_2 = io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_parseFromJSON(jsonio_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_1);
	cJSON* jsonio_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_2 = io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_convertToJSON(io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_2);
	printf("repeating io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method:\n%s\n", cJSON_Print(jsonio_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_2));
}

int main() {
  test_io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method(1);
  test_io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_MAIN
#endif // io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_TEST
