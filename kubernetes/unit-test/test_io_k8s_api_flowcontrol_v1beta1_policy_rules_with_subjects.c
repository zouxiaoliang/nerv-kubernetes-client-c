#ifndef io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_TEST
#define io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects.h"
io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_t* instantiate_io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects(int include_optional);



io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_t* instantiate_io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects(int include_optional) {
  io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_t* io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects = NULL;
  if (include_optional) {
    io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects = io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_create(
      list_create(),
      list_create(),
      list_create()
    );
  } else {
    io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects = io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_create(
      list_create(),
      list_create(),
      list_create()
    );
  }

  return io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects;
}


#ifdef io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_MAIN

void test_io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects(int include_optional) {
    io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_t* io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_1 = instantiate_io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects(include_optional);

	cJSON* jsonio_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_1 = io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_convertToJSON(io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_1);
	printf("io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects :\n%s\n", cJSON_Print(jsonio_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_1));
	io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_t* io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_2 = io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_parseFromJSON(jsonio_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_1);
	cJSON* jsonio_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_2 = io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_convertToJSON(io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_2);
	printf("repeating io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects:\n%s\n", cJSON_Print(jsonio_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_2));
}

int main() {
  test_io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects(1);
  test_io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_MAIN
#endif // io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_TEST
