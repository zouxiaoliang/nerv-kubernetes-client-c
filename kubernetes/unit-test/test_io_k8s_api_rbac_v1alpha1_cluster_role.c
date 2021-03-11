#ifndef io_k8s_api_rbac_v1alpha1_cluster_role_TEST
#define io_k8s_api_rbac_v1alpha1_cluster_role_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_rbac_v1alpha1_cluster_role_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_rbac_v1alpha1_cluster_role.h"
io_k8s_api_rbac_v1alpha1_cluster_role_t* instantiate_io_k8s_api_rbac_v1alpha1_cluster_role(int include_optional);

#include "test_io_k8s_api_rbac_v1alpha1_aggregation_rule.c"
#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"


io_k8s_api_rbac_v1alpha1_cluster_role_t* instantiate_io_k8s_api_rbac_v1alpha1_cluster_role(int include_optional) {
  io_k8s_api_rbac_v1alpha1_cluster_role_t* io_k8s_api_rbac_v1alpha1_cluster_role = NULL;
  if (include_optional) {
    io_k8s_api_rbac_v1alpha1_cluster_role = io_k8s_api_rbac_v1alpha1_cluster_role_create(
       // false, not to have infinite recursion
      instantiate_io_k8s_api_rbac_v1alpha1_aggregation_rule(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
      list_create()
    );
  } else {
    io_k8s_api_rbac_v1alpha1_cluster_role = io_k8s_api_rbac_v1alpha1_cluster_role_create(
      NULL,
      "0",
      "0",
      NULL,
      list_create()
    );
  }

  return io_k8s_api_rbac_v1alpha1_cluster_role;
}


#ifdef io_k8s_api_rbac_v1alpha1_cluster_role_MAIN

void test_io_k8s_api_rbac_v1alpha1_cluster_role(int include_optional) {
    io_k8s_api_rbac_v1alpha1_cluster_role_t* io_k8s_api_rbac_v1alpha1_cluster_role_1 = instantiate_io_k8s_api_rbac_v1alpha1_cluster_role(include_optional);

	cJSON* jsonio_k8s_api_rbac_v1alpha1_cluster_role_1 = io_k8s_api_rbac_v1alpha1_cluster_role_convertToJSON(io_k8s_api_rbac_v1alpha1_cluster_role_1);
	printf("io_k8s_api_rbac_v1alpha1_cluster_role :\n%s\n", cJSON_Print(jsonio_k8s_api_rbac_v1alpha1_cluster_role_1));
	io_k8s_api_rbac_v1alpha1_cluster_role_t* io_k8s_api_rbac_v1alpha1_cluster_role_2 = io_k8s_api_rbac_v1alpha1_cluster_role_parseFromJSON(jsonio_k8s_api_rbac_v1alpha1_cluster_role_1);
	cJSON* jsonio_k8s_api_rbac_v1alpha1_cluster_role_2 = io_k8s_api_rbac_v1alpha1_cluster_role_convertToJSON(io_k8s_api_rbac_v1alpha1_cluster_role_2);
	printf("repeating io_k8s_api_rbac_v1alpha1_cluster_role:\n%s\n", cJSON_Print(jsonio_k8s_api_rbac_v1alpha1_cluster_role_2));
}

int main() {
  test_io_k8s_api_rbac_v1alpha1_cluster_role(1);
  test_io_k8s_api_rbac_v1alpha1_cluster_role(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_rbac_v1alpha1_cluster_role_MAIN
#endif // io_k8s_api_rbac_v1alpha1_cluster_role_TEST
