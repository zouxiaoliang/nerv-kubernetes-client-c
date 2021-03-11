#ifndef io_k8s_api_batch_v1_job_spec_TEST
#define io_k8s_api_batch_v1_job_spec_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_batch_v1_job_spec_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_batch_v1_job_spec.h"
io_k8s_api_batch_v1_job_spec_t* instantiate_io_k8s_api_batch_v1_job_spec(int include_optional);

#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.c"
#include "test_io_k8s_api_core_v1_pod_template_spec.c"


io_k8s_api_batch_v1_job_spec_t* instantiate_io_k8s_api_batch_v1_job_spec(int include_optional) {
  io_k8s_api_batch_v1_job_spec_t* io_k8s_api_batch_v1_job_spec = NULL;
  if (include_optional) {
    io_k8s_api_batch_v1_job_spec = io_k8s_api_batch_v1_job_spec_create(
      56,
      56,
      "0",
      56,
      1,
      56,
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_label_selector(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_pod_template_spec(0),
      56
    );
  } else {
    io_k8s_api_batch_v1_job_spec = io_k8s_api_batch_v1_job_spec_create(
      56,
      56,
      "0",
      56,
      1,
      56,
      NULL,
      NULL,
      56
    );
  }

  return io_k8s_api_batch_v1_job_spec;
}


#ifdef io_k8s_api_batch_v1_job_spec_MAIN

void test_io_k8s_api_batch_v1_job_spec(int include_optional) {
    io_k8s_api_batch_v1_job_spec_t* io_k8s_api_batch_v1_job_spec_1 = instantiate_io_k8s_api_batch_v1_job_spec(include_optional);

	cJSON* jsonio_k8s_api_batch_v1_job_spec_1 = io_k8s_api_batch_v1_job_spec_convertToJSON(io_k8s_api_batch_v1_job_spec_1);
	printf("io_k8s_api_batch_v1_job_spec :\n%s\n", cJSON_Print(jsonio_k8s_api_batch_v1_job_spec_1));
	io_k8s_api_batch_v1_job_spec_t* io_k8s_api_batch_v1_job_spec_2 = io_k8s_api_batch_v1_job_spec_parseFromJSON(jsonio_k8s_api_batch_v1_job_spec_1);
	cJSON* jsonio_k8s_api_batch_v1_job_spec_2 = io_k8s_api_batch_v1_job_spec_convertToJSON(io_k8s_api_batch_v1_job_spec_2);
	printf("repeating io_k8s_api_batch_v1_job_spec:\n%s\n", cJSON_Print(jsonio_k8s_api_batch_v1_job_spec_2));
}

int main() {
  test_io_k8s_api_batch_v1_job_spec(1);
  test_io_k8s_api_batch_v1_job_spec(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_batch_v1_job_spec_MAIN
#endif // io_k8s_api_batch_v1_job_spec_TEST
