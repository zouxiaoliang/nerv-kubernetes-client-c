#ifndef io_k8s_api_rbac_v1_subject_TEST
#define io_k8s_api_rbac_v1_subject_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_rbac_v1_subject_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_rbac_v1_subject.h"
io_k8s_api_rbac_v1_subject_t* instantiate_io_k8s_api_rbac_v1_subject(int include_optional);



io_k8s_api_rbac_v1_subject_t* instantiate_io_k8s_api_rbac_v1_subject(int include_optional) {
  io_k8s_api_rbac_v1_subject_t* io_k8s_api_rbac_v1_subject = NULL;
  if (include_optional) {
    io_k8s_api_rbac_v1_subject = io_k8s_api_rbac_v1_subject_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    io_k8s_api_rbac_v1_subject = io_k8s_api_rbac_v1_subject_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return io_k8s_api_rbac_v1_subject;
}


#ifdef io_k8s_api_rbac_v1_subject_MAIN

void test_io_k8s_api_rbac_v1_subject(int include_optional) {
    io_k8s_api_rbac_v1_subject_t* io_k8s_api_rbac_v1_subject_1 = instantiate_io_k8s_api_rbac_v1_subject(include_optional);

	cJSON* jsonio_k8s_api_rbac_v1_subject_1 = io_k8s_api_rbac_v1_subject_convertToJSON(io_k8s_api_rbac_v1_subject_1);
	printf("io_k8s_api_rbac_v1_subject :\n%s\n", cJSON_Print(jsonio_k8s_api_rbac_v1_subject_1));
	io_k8s_api_rbac_v1_subject_t* io_k8s_api_rbac_v1_subject_2 = io_k8s_api_rbac_v1_subject_parseFromJSON(jsonio_k8s_api_rbac_v1_subject_1);
	cJSON* jsonio_k8s_api_rbac_v1_subject_2 = io_k8s_api_rbac_v1_subject_convertToJSON(io_k8s_api_rbac_v1_subject_2);
	printf("repeating io_k8s_api_rbac_v1_subject:\n%s\n", cJSON_Print(jsonio_k8s_api_rbac_v1_subject_2));
}

int main() {
  test_io_k8s_api_rbac_v1_subject(1);
  test_io_k8s_api_rbac_v1_subject(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_rbac_v1_subject_MAIN
#endif // io_k8s_api_rbac_v1_subject_TEST
