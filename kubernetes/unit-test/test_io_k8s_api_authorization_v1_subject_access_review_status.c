#ifndef io_k8s_api_authorization_v1_subject_access_review_status_TEST
#define io_k8s_api_authorization_v1_subject_access_review_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_authorization_v1_subject_access_review_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_authorization_v1_subject_access_review_status.h"
io_k8s_api_authorization_v1_subject_access_review_status_t* instantiate_io_k8s_api_authorization_v1_subject_access_review_status(int include_optional);



io_k8s_api_authorization_v1_subject_access_review_status_t* instantiate_io_k8s_api_authorization_v1_subject_access_review_status(int include_optional) {
  io_k8s_api_authorization_v1_subject_access_review_status_t* io_k8s_api_authorization_v1_subject_access_review_status = NULL;
  if (include_optional) {
    io_k8s_api_authorization_v1_subject_access_review_status = io_k8s_api_authorization_v1_subject_access_review_status_create(
      1,
      1,
      "0",
      "0"
    );
  } else {
    io_k8s_api_authorization_v1_subject_access_review_status = io_k8s_api_authorization_v1_subject_access_review_status_create(
      1,
      1,
      "0",
      "0"
    );
  }

  return io_k8s_api_authorization_v1_subject_access_review_status;
}


#ifdef io_k8s_api_authorization_v1_subject_access_review_status_MAIN

void test_io_k8s_api_authorization_v1_subject_access_review_status(int include_optional) {
    io_k8s_api_authorization_v1_subject_access_review_status_t* io_k8s_api_authorization_v1_subject_access_review_status_1 = instantiate_io_k8s_api_authorization_v1_subject_access_review_status(include_optional);

	cJSON* jsonio_k8s_api_authorization_v1_subject_access_review_status_1 = io_k8s_api_authorization_v1_subject_access_review_status_convertToJSON(io_k8s_api_authorization_v1_subject_access_review_status_1);
	printf("io_k8s_api_authorization_v1_subject_access_review_status :\n%s\n", cJSON_Print(jsonio_k8s_api_authorization_v1_subject_access_review_status_1));
	io_k8s_api_authorization_v1_subject_access_review_status_t* io_k8s_api_authorization_v1_subject_access_review_status_2 = io_k8s_api_authorization_v1_subject_access_review_status_parseFromJSON(jsonio_k8s_api_authorization_v1_subject_access_review_status_1);
	cJSON* jsonio_k8s_api_authorization_v1_subject_access_review_status_2 = io_k8s_api_authorization_v1_subject_access_review_status_convertToJSON(io_k8s_api_authorization_v1_subject_access_review_status_2);
	printf("repeating io_k8s_api_authorization_v1_subject_access_review_status:\n%s\n", cJSON_Print(jsonio_k8s_api_authorization_v1_subject_access_review_status_2));
}

int main() {
  test_io_k8s_api_authorization_v1_subject_access_review_status(1);
  test_io_k8s_api_authorization_v1_subject_access_review_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_authorization_v1_subject_access_review_status_MAIN
#endif // io_k8s_api_authorization_v1_subject_access_review_status_TEST
