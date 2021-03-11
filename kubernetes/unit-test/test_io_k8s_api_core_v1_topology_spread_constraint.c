#ifndef io_k8s_api_core_v1_topology_spread_constraint_TEST
#define io_k8s_api_core_v1_topology_spread_constraint_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_topology_spread_constraint_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_topology_spread_constraint.h"
io_k8s_api_core_v1_topology_spread_constraint_t* instantiate_io_k8s_api_core_v1_topology_spread_constraint(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.c"


io_k8s_api_core_v1_topology_spread_constraint_t* instantiate_io_k8s_api_core_v1_topology_spread_constraint(int include_optional) {
  io_k8s_api_core_v1_topology_spread_constraint_t* io_k8s_api_core_v1_topology_spread_constraint = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_topology_spread_constraint = io_k8s_api_core_v1_topology_spread_constraint_create(
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector(0),
      56,
      "0",
      "0"
    );
  } else {
    io_k8s_api_core_v1_topology_spread_constraint = io_k8s_api_core_v1_topology_spread_constraint_create(
      NULL,
      56,
      "0",
      "0"
    );
  }

  return io_k8s_api_core_v1_topology_spread_constraint;
}


#ifdef io_k8s_api_core_v1_topology_spread_constraint_MAIN

void test_io_k8s_api_core_v1_topology_spread_constraint(int include_optional) {
    io_k8s_api_core_v1_topology_spread_constraint_t* io_k8s_api_core_v1_topology_spread_constraint_1 = instantiate_io_k8s_api_core_v1_topology_spread_constraint(include_optional);

	cJSON* jsonio_k8s_api_core_v1_topology_spread_constraint_1 = io_k8s_api_core_v1_topology_spread_constraint_convertToJSON(io_k8s_api_core_v1_topology_spread_constraint_1);
	printf("io_k8s_api_core_v1_topology_spread_constraint :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_topology_spread_constraint_1));
	io_k8s_api_core_v1_topology_spread_constraint_t* io_k8s_api_core_v1_topology_spread_constraint_2 = io_k8s_api_core_v1_topology_spread_constraint_parseFromJSON(jsonio_k8s_api_core_v1_topology_spread_constraint_1);
	cJSON* jsonio_k8s_api_core_v1_topology_spread_constraint_2 = io_k8s_api_core_v1_topology_spread_constraint_convertToJSON(io_k8s_api_core_v1_topology_spread_constraint_2);
	printf("repeating io_k8s_api_core_v1_topology_spread_constraint:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_topology_spread_constraint_2));
}

int main() {
  test_io_k8s_api_core_v1_topology_spread_constraint(1);
  test_io_k8s_api_core_v1_topology_spread_constraint(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_topology_spread_constraint_MAIN
#endif // io_k8s_api_core_v1_topology_spread_constraint_TEST
