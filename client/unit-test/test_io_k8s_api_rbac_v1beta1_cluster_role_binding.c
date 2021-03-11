#ifndef io_k8s_api_rbac_v1beta1_cluster_role_binding_TEST
#define io_k8s_api_rbac_v1beta1_cluster_role_binding_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_rbac_v1beta1_cluster_role_binding_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_rbac_v1beta1_cluster_role_binding.h"
io_k8s_api_rbac_v1beta1_cluster_role_binding_t* instantiate_io_k8s_api_rbac_v1beta1_cluster_role_binding(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"
#include "test_io_k8s_api_rbac_v1beta1_role_ref.c"


io_k8s_api_rbac_v1beta1_cluster_role_binding_t* instantiate_io_k8s_api_rbac_v1beta1_cluster_role_binding(int include_optional) {
  io_k8s_api_rbac_v1beta1_cluster_role_binding_t* io_k8s_api_rbac_v1beta1_cluster_role_binding = NULL;
  if (include_optional) {
    io_k8s_api_rbac_v1beta1_cluster_role_binding = io_k8s_api_rbac_v1beta1_cluster_role_binding_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_rbac_v1beta1_role_ref(0),
      list_create()
    );
  } else {
    io_k8s_api_rbac_v1beta1_cluster_role_binding = io_k8s_api_rbac_v1beta1_cluster_role_binding_create(
      "0",
      "0",
      NULL,
      NULL,
      list_create()
    );
  }

  return io_k8s_api_rbac_v1beta1_cluster_role_binding;
}


#ifdef io_k8s_api_rbac_v1beta1_cluster_role_binding_MAIN

void test_io_k8s_api_rbac_v1beta1_cluster_role_binding(int include_optional) {
    io_k8s_api_rbac_v1beta1_cluster_role_binding_t* io_k8s_api_rbac_v1beta1_cluster_role_binding_1 = instantiate_io_k8s_api_rbac_v1beta1_cluster_role_binding(include_optional);

	cJSON* jsonio_k8s_api_rbac_v1beta1_cluster_role_binding_1 = io_k8s_api_rbac_v1beta1_cluster_role_binding_convertToJSON(io_k8s_api_rbac_v1beta1_cluster_role_binding_1);
	printf("io_k8s_api_rbac_v1beta1_cluster_role_binding :\n%s\n", cJSON_Print(jsonio_k8s_api_rbac_v1beta1_cluster_role_binding_1));
	io_k8s_api_rbac_v1beta1_cluster_role_binding_t* io_k8s_api_rbac_v1beta1_cluster_role_binding_2 = io_k8s_api_rbac_v1beta1_cluster_role_binding_parseFromJSON(jsonio_k8s_api_rbac_v1beta1_cluster_role_binding_1);
	cJSON* jsonio_k8s_api_rbac_v1beta1_cluster_role_binding_2 = io_k8s_api_rbac_v1beta1_cluster_role_binding_convertToJSON(io_k8s_api_rbac_v1beta1_cluster_role_binding_2);
	printf("repeating io_k8s_api_rbac_v1beta1_cluster_role_binding:\n%s\n", cJSON_Print(jsonio_k8s_api_rbac_v1beta1_cluster_role_binding_2));
}

int main() {
  test_io_k8s_api_rbac_v1beta1_cluster_role_binding(1);
  test_io_k8s_api_rbac_v1beta1_cluster_role_binding(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_rbac_v1beta1_cluster_role_binding_MAIN
#endif // io_k8s_api_rbac_v1beta1_cluster_role_binding_TEST
