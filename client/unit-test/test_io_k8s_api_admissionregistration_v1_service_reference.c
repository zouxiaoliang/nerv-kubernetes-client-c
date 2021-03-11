#ifndef io_k8s_api_admissionregistration_v1_service_reference_TEST
#define io_k8s_api_admissionregistration_v1_service_reference_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_admissionregistration_v1_service_reference_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_admissionregistration_v1_service_reference.h"
io_k8s_api_admissionregistration_v1_service_reference_t* instantiate_io_k8s_api_admissionregistration_v1_service_reference(int include_optional);



io_k8s_api_admissionregistration_v1_service_reference_t* instantiate_io_k8s_api_admissionregistration_v1_service_reference(int include_optional) {
  io_k8s_api_admissionregistration_v1_service_reference_t* io_k8s_api_admissionregistration_v1_service_reference = NULL;
  if (include_optional) {
    io_k8s_api_admissionregistration_v1_service_reference = io_k8s_api_admissionregistration_v1_service_reference_create(
      "0",
      "0",
      "0",
      56
    );
  } else {
    io_k8s_api_admissionregistration_v1_service_reference = io_k8s_api_admissionregistration_v1_service_reference_create(
      "0",
      "0",
      "0",
      56
    );
  }

  return io_k8s_api_admissionregistration_v1_service_reference;
}


#ifdef io_k8s_api_admissionregistration_v1_service_reference_MAIN

void test_io_k8s_api_admissionregistration_v1_service_reference(int include_optional) {
    io_k8s_api_admissionregistration_v1_service_reference_t* io_k8s_api_admissionregistration_v1_service_reference_1 = instantiate_io_k8s_api_admissionregistration_v1_service_reference(include_optional);

	cJSON* jsonio_k8s_api_admissionregistration_v1_service_reference_1 = io_k8s_api_admissionregistration_v1_service_reference_convertToJSON(io_k8s_api_admissionregistration_v1_service_reference_1);
	printf("io_k8s_api_admissionregistration_v1_service_reference :\n%s\n", cJSON_Print(jsonio_k8s_api_admissionregistration_v1_service_reference_1));
	io_k8s_api_admissionregistration_v1_service_reference_t* io_k8s_api_admissionregistration_v1_service_reference_2 = io_k8s_api_admissionregistration_v1_service_reference_parseFromJSON(jsonio_k8s_api_admissionregistration_v1_service_reference_1);
	cJSON* jsonio_k8s_api_admissionregistration_v1_service_reference_2 = io_k8s_api_admissionregistration_v1_service_reference_convertToJSON(io_k8s_api_admissionregistration_v1_service_reference_2);
	printf("repeating io_k8s_api_admissionregistration_v1_service_reference:\n%s\n", cJSON_Print(jsonio_k8s_api_admissionregistration_v1_service_reference_2));
}

int main() {
  test_io_k8s_api_admissionregistration_v1_service_reference(1);
  test_io_k8s_api_admissionregistration_v1_service_reference(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_admissionregistration_v1_service_reference_MAIN
#endif // io_k8s_api_admissionregistration_v1_service_reference_TEST
