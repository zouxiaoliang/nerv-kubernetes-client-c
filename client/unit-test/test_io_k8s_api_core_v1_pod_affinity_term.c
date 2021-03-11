#ifndef io_k8s_api_core_v1_pod_affinity_term_TEST
#define io_k8s_api_core_v1_pod_affinity_term_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_pod_affinity_term_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_pod_affinity_term.h"
io_k8s_api_core_v1_pod_affinity_term_t* instantiate_io_k8s_api_core_v1_pod_affinity_term(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.c"
#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.c"


io_k8s_api_core_v1_pod_affinity_term_t* instantiate_io_k8s_api_core_v1_pod_affinity_term(int include_optional) {
  io_k8s_api_core_v1_pod_affinity_term_t* io_k8s_api_core_v1_pod_affinity_term = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_pod_affinity_term = io_k8s_api_core_v1_pod_affinity_term_create(
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector(0),
      list_create(),
      "0"
    );
  } else {
    io_k8s_api_core_v1_pod_affinity_term = io_k8s_api_core_v1_pod_affinity_term_create(
      NULL,
      NULL,
      list_create(),
      "0"
    );
  }

  return io_k8s_api_core_v1_pod_affinity_term;
}


#ifdef io_k8s_api_core_v1_pod_affinity_term_MAIN

void test_io_k8s_api_core_v1_pod_affinity_term(int include_optional) {
    io_k8s_api_core_v1_pod_affinity_term_t* io_k8s_api_core_v1_pod_affinity_term_1 = instantiate_io_k8s_api_core_v1_pod_affinity_term(include_optional);

	cJSON* jsonio_k8s_api_core_v1_pod_affinity_term_1 = io_k8s_api_core_v1_pod_affinity_term_convertToJSON(io_k8s_api_core_v1_pod_affinity_term_1);
	printf("io_k8s_api_core_v1_pod_affinity_term :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_pod_affinity_term_1));
	io_k8s_api_core_v1_pod_affinity_term_t* io_k8s_api_core_v1_pod_affinity_term_2 = io_k8s_api_core_v1_pod_affinity_term_parseFromJSON(jsonio_k8s_api_core_v1_pod_affinity_term_1);
	cJSON* jsonio_k8s_api_core_v1_pod_affinity_term_2 = io_k8s_api_core_v1_pod_affinity_term_convertToJSON(io_k8s_api_core_v1_pod_affinity_term_2);
	printf("repeating io_k8s_api_core_v1_pod_affinity_term:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_pod_affinity_term_2));
}

int main() {
  test_io_k8s_api_core_v1_pod_affinity_term(1);
  test_io_k8s_api_core_v1_pod_affinity_term(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_pod_affinity_term_MAIN
#endif // io_k8s_api_core_v1_pod_affinity_term_TEST
