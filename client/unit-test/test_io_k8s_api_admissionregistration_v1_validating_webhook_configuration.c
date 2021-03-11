#ifndef io_k8s_api_admissionregistration_v1_validating_webhook_configuration_TEST
#define io_k8s_api_admissionregistration_v1_validating_webhook_configuration_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_admissionregistration_v1_validating_webhook_configuration_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_admissionregistration_v1_validating_webhook_configuration.h"
io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t* instantiate_io_k8s_api_admissionregistration_v1_validating_webhook_configuration(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"


io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t* instantiate_io_k8s_api_admissionregistration_v1_validating_webhook_configuration(int include_optional) {
  io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t* io_k8s_api_admissionregistration_v1_validating_webhook_configuration = NULL;
  if (include_optional) {
    io_k8s_api_admissionregistration_v1_validating_webhook_configuration = io_k8s_api_admissionregistration_v1_validating_webhook_configuration_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
      list_create()
    );
  } else {
    io_k8s_api_admissionregistration_v1_validating_webhook_configuration = io_k8s_api_admissionregistration_v1_validating_webhook_configuration_create(
      "0",
      "0",
      NULL,
      list_create()
    );
  }

  return io_k8s_api_admissionregistration_v1_validating_webhook_configuration;
}


#ifdef io_k8s_api_admissionregistration_v1_validating_webhook_configuration_MAIN

void test_io_k8s_api_admissionregistration_v1_validating_webhook_configuration(int include_optional) {
    io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t* io_k8s_api_admissionregistration_v1_validating_webhook_configuration_1 = instantiate_io_k8s_api_admissionregistration_v1_validating_webhook_configuration(include_optional);

	cJSON* jsonio_k8s_api_admissionregistration_v1_validating_webhook_configuration_1 = io_k8s_api_admissionregistration_v1_validating_webhook_configuration_convertToJSON(io_k8s_api_admissionregistration_v1_validating_webhook_configuration_1);
	printf("io_k8s_api_admissionregistration_v1_validating_webhook_configuration :\n%s\n", cJSON_Print(jsonio_k8s_api_admissionregistration_v1_validating_webhook_configuration_1));
	io_k8s_api_admissionregistration_v1_validating_webhook_configuration_t* io_k8s_api_admissionregistration_v1_validating_webhook_configuration_2 = io_k8s_api_admissionregistration_v1_validating_webhook_configuration_parseFromJSON(jsonio_k8s_api_admissionregistration_v1_validating_webhook_configuration_1);
	cJSON* jsonio_k8s_api_admissionregistration_v1_validating_webhook_configuration_2 = io_k8s_api_admissionregistration_v1_validating_webhook_configuration_convertToJSON(io_k8s_api_admissionregistration_v1_validating_webhook_configuration_2);
	printf("repeating io_k8s_api_admissionregistration_v1_validating_webhook_configuration:\n%s\n", cJSON_Print(jsonio_k8s_api_admissionregistration_v1_validating_webhook_configuration_2));
}

int main() {
  test_io_k8s_api_admissionregistration_v1_validating_webhook_configuration(1);
  test_io_k8s_api_admissionregistration_v1_validating_webhook_configuration(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_admissionregistration_v1_validating_webhook_configuration_MAIN
#endif // io_k8s_api_admissionregistration_v1_validating_webhook_configuration_TEST
