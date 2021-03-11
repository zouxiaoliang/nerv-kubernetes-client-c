#ifndef io_k8s_api_authorization_v1_self_subject_rules_review_spec_TEST
#define io_k8s_api_authorization_v1_self_subject_rules_review_spec_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_authorization_v1_self_subject_rules_review_spec_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_authorization_v1_self_subject_rules_review_spec.h"
io_k8s_api_authorization_v1_self_subject_rules_review_spec_t* instantiate_io_k8s_api_authorization_v1_self_subject_rules_review_spec(int include_optional);



io_k8s_api_authorization_v1_self_subject_rules_review_spec_t* instantiate_io_k8s_api_authorization_v1_self_subject_rules_review_spec(int include_optional) {
  io_k8s_api_authorization_v1_self_subject_rules_review_spec_t* io_k8s_api_authorization_v1_self_subject_rules_review_spec = NULL;
  if (include_optional) {
    io_k8s_api_authorization_v1_self_subject_rules_review_spec = io_k8s_api_authorization_v1_self_subject_rules_review_spec_create(
      "0"
    );
  } else {
    io_k8s_api_authorization_v1_self_subject_rules_review_spec = io_k8s_api_authorization_v1_self_subject_rules_review_spec_create(
      "0"
    );
  }

  return io_k8s_api_authorization_v1_self_subject_rules_review_spec;
}


#ifdef io_k8s_api_authorization_v1_self_subject_rules_review_spec_MAIN

void test_io_k8s_api_authorization_v1_self_subject_rules_review_spec(int include_optional) {
    io_k8s_api_authorization_v1_self_subject_rules_review_spec_t* io_k8s_api_authorization_v1_self_subject_rules_review_spec_1 = instantiate_io_k8s_api_authorization_v1_self_subject_rules_review_spec(include_optional);

	cJSON* jsonio_k8s_api_authorization_v1_self_subject_rules_review_spec_1 = io_k8s_api_authorization_v1_self_subject_rules_review_spec_convertToJSON(io_k8s_api_authorization_v1_self_subject_rules_review_spec_1);
	printf("io_k8s_api_authorization_v1_self_subject_rules_review_spec :\n%s\n", cJSON_Print(jsonio_k8s_api_authorization_v1_self_subject_rules_review_spec_1));
	io_k8s_api_authorization_v1_self_subject_rules_review_spec_t* io_k8s_api_authorization_v1_self_subject_rules_review_spec_2 = io_k8s_api_authorization_v1_self_subject_rules_review_spec_parseFromJSON(jsonio_k8s_api_authorization_v1_self_subject_rules_review_spec_1);
	cJSON* jsonio_k8s_api_authorization_v1_self_subject_rules_review_spec_2 = io_k8s_api_authorization_v1_self_subject_rules_review_spec_convertToJSON(io_k8s_api_authorization_v1_self_subject_rules_review_spec_2);
	printf("repeating io_k8s_api_authorization_v1_self_subject_rules_review_spec:\n%s\n", cJSON_Print(jsonio_k8s_api_authorization_v1_self_subject_rules_review_spec_2));
}

int main() {
  test_io_k8s_api_authorization_v1_self_subject_rules_review_spec(1);
  test_io_k8s_api_authorization_v1_self_subject_rules_review_spec(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_authorization_v1_self_subject_rules_review_spec_MAIN
#endif // io_k8s_api_authorization_v1_self_subject_rules_review_spec_TEST
