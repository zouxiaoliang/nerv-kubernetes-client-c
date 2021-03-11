#ifndef io_k8s_api_rbac_v1_role_ref_TEST
#define io_k8s_api_rbac_v1_role_ref_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_rbac_v1_role_ref_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_rbac_v1_role_ref.h"
io_k8s_api_rbac_v1_role_ref_t* instantiate_io_k8s_api_rbac_v1_role_ref(int include_optional);



io_k8s_api_rbac_v1_role_ref_t* instantiate_io_k8s_api_rbac_v1_role_ref(int include_optional) {
  io_k8s_api_rbac_v1_role_ref_t* io_k8s_api_rbac_v1_role_ref = NULL;
  if (include_optional) {
    io_k8s_api_rbac_v1_role_ref = io_k8s_api_rbac_v1_role_ref_create(
      "0",
      "0",
      "0"
    );
  } else {
    io_k8s_api_rbac_v1_role_ref = io_k8s_api_rbac_v1_role_ref_create(
      "0",
      "0",
      "0"
    );
  }

  return io_k8s_api_rbac_v1_role_ref;
}


#ifdef io_k8s_api_rbac_v1_role_ref_MAIN

void test_io_k8s_api_rbac_v1_role_ref(int include_optional) {
    io_k8s_api_rbac_v1_role_ref_t* io_k8s_api_rbac_v1_role_ref_1 = instantiate_io_k8s_api_rbac_v1_role_ref(include_optional);

	cJSON* jsonio_k8s_api_rbac_v1_role_ref_1 = io_k8s_api_rbac_v1_role_ref_convertToJSON(io_k8s_api_rbac_v1_role_ref_1);
	printf("io_k8s_api_rbac_v1_role_ref :\n%s\n", cJSON_Print(jsonio_k8s_api_rbac_v1_role_ref_1));
	io_k8s_api_rbac_v1_role_ref_t* io_k8s_api_rbac_v1_role_ref_2 = io_k8s_api_rbac_v1_role_ref_parseFromJSON(jsonio_k8s_api_rbac_v1_role_ref_1);
	cJSON* jsonio_k8s_api_rbac_v1_role_ref_2 = io_k8s_api_rbac_v1_role_ref_convertToJSON(io_k8s_api_rbac_v1_role_ref_2);
	printf("repeating io_k8s_api_rbac_v1_role_ref:\n%s\n", cJSON_Print(jsonio_k8s_api_rbac_v1_role_ref_2));
}

int main() {
  test_io_k8s_api_rbac_v1_role_ref(1);
  test_io_k8s_api_rbac_v1_role_ref(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_rbac_v1_role_ref_MAIN
#endif // io_k8s_api_rbac_v1_role_ref_TEST
