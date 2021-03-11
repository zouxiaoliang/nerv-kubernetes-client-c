#ifndef io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_TEST
#define io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service.h"
io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_t* instantiate_io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"
#include "test_io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_spec.c"
#include "test_io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status.c"


io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_t* instantiate_io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service(int include_optional) {
  io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_t* io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service = NULL;
  if (include_optional) {
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service = io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_spec(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status(0)
    );
  } else {
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service = io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_create(
      "0",
      "0",
      NULL,
      NULL,
      NULL
    );
  }

  return io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service;
}


#ifdef io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_MAIN

void test_io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service(int include_optional) {
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_t* io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_1 = instantiate_io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service(include_optional);

	cJSON* jsonio_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_1 = io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_convertToJSON(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_1);
	printf("io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service :\n%s\n", cJSON_Print(jsonio_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_1));
	io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_t* io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_2 = io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_parseFromJSON(jsonio_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_1);
	cJSON* jsonio_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_2 = io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_convertToJSON(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_2);
	printf("repeating io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service:\n%s\n", cJSON_Print(jsonio_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_2));
}

int main() {
  test_io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service(1);
  test_io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_MAIN
#endif // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_TEST
