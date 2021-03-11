#ifndef io_k8s_api_admissionregistration_v1beta1_mutating_webhook_TEST
#define io_k8s_api_admissionregistration_v1beta1_mutating_webhook_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_admissionregistration_v1beta1_mutating_webhook_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_admissionregistration_v1beta1_mutating_webhook.h"
io_k8s_api_admissionregistration_v1beta1_mutating_webhook_t* instantiate_io_k8s_api_admissionregistration_v1beta1_mutating_webhook(int include_optional);

#include "test_io_k8s_api_admissionregistration_v1beta1_webhook_client_config.c"
#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.c"
#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.c"


io_k8s_api_admissionregistration_v1beta1_mutating_webhook_t* instantiate_io_k8s_api_admissionregistration_v1beta1_mutating_webhook(int include_optional) {
  io_k8s_api_admissionregistration_v1beta1_mutating_webhook_t* io_k8s_api_admissionregistration_v1beta1_mutating_webhook = NULL;
  if (include_optional) {
    io_k8s_api_admissionregistration_v1beta1_mutating_webhook = io_k8s_api_admissionregistration_v1beta1_mutating_webhook_create(
      list_create(),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_admissionregistration_v1beta1_webhook_client_config(0),
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector(0),
      "0",
      list_create(),
      "0",
      56
    );
  } else {
    io_k8s_api_admissionregistration_v1beta1_mutating_webhook = io_k8s_api_admissionregistration_v1beta1_mutating_webhook_create(
      list_create(),
      NULL,
      "0",
      "0",
      "0",
      NULL,
      NULL,
      "0",
      list_create(),
      "0",
      56
    );
  }

  return io_k8s_api_admissionregistration_v1beta1_mutating_webhook;
}


#ifdef io_k8s_api_admissionregistration_v1beta1_mutating_webhook_MAIN

void test_io_k8s_api_admissionregistration_v1beta1_mutating_webhook(int include_optional) {
    io_k8s_api_admissionregistration_v1beta1_mutating_webhook_t* io_k8s_api_admissionregistration_v1beta1_mutating_webhook_1 = instantiate_io_k8s_api_admissionregistration_v1beta1_mutating_webhook(include_optional);

	cJSON* jsonio_k8s_api_admissionregistration_v1beta1_mutating_webhook_1 = io_k8s_api_admissionregistration_v1beta1_mutating_webhook_convertToJSON(io_k8s_api_admissionregistration_v1beta1_mutating_webhook_1);
	printf("io_k8s_api_admissionregistration_v1beta1_mutating_webhook :\n%s\n", cJSON_Print(jsonio_k8s_api_admissionregistration_v1beta1_mutating_webhook_1));
	io_k8s_api_admissionregistration_v1beta1_mutating_webhook_t* io_k8s_api_admissionregistration_v1beta1_mutating_webhook_2 = io_k8s_api_admissionregistration_v1beta1_mutating_webhook_parseFromJSON(jsonio_k8s_api_admissionregistration_v1beta1_mutating_webhook_1);
	cJSON* jsonio_k8s_api_admissionregistration_v1beta1_mutating_webhook_2 = io_k8s_api_admissionregistration_v1beta1_mutating_webhook_convertToJSON(io_k8s_api_admissionregistration_v1beta1_mutating_webhook_2);
	printf("repeating io_k8s_api_admissionregistration_v1beta1_mutating_webhook:\n%s\n", cJSON_Print(jsonio_k8s_api_admissionregistration_v1beta1_mutating_webhook_2));
}

int main() {
  test_io_k8s_api_admissionregistration_v1beta1_mutating_webhook(1);
  test_io_k8s_api_admissionregistration_v1beta1_mutating_webhook(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_admissionregistration_v1beta1_mutating_webhook_MAIN
#endif // io_k8s_api_admissionregistration_v1beta1_mutating_webhook_TEST
