#ifndef io_k8s_api_core_v1_seccomp_profile_TEST
#define io_k8s_api_core_v1_seccomp_profile_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_seccomp_profile_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_seccomp_profile.h"
io_k8s_api_core_v1_seccomp_profile_t* instantiate_io_k8s_api_core_v1_seccomp_profile(int include_optional);



io_k8s_api_core_v1_seccomp_profile_t* instantiate_io_k8s_api_core_v1_seccomp_profile(int include_optional) {
  io_k8s_api_core_v1_seccomp_profile_t* io_k8s_api_core_v1_seccomp_profile = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_seccomp_profile = io_k8s_api_core_v1_seccomp_profile_create(
      "0",
      "0"
    );
  } else {
    io_k8s_api_core_v1_seccomp_profile = io_k8s_api_core_v1_seccomp_profile_create(
      "0",
      "0"
    );
  }

  return io_k8s_api_core_v1_seccomp_profile;
}


#ifdef io_k8s_api_core_v1_seccomp_profile_MAIN

void test_io_k8s_api_core_v1_seccomp_profile(int include_optional) {
    io_k8s_api_core_v1_seccomp_profile_t* io_k8s_api_core_v1_seccomp_profile_1 = instantiate_io_k8s_api_core_v1_seccomp_profile(include_optional);

	cJSON* jsonio_k8s_api_core_v1_seccomp_profile_1 = io_k8s_api_core_v1_seccomp_profile_convertToJSON(io_k8s_api_core_v1_seccomp_profile_1);
	printf("io_k8s_api_core_v1_seccomp_profile :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_seccomp_profile_1));
	io_k8s_api_core_v1_seccomp_profile_t* io_k8s_api_core_v1_seccomp_profile_2 = io_k8s_api_core_v1_seccomp_profile_parseFromJSON(jsonio_k8s_api_core_v1_seccomp_profile_1);
	cJSON* jsonio_k8s_api_core_v1_seccomp_profile_2 = io_k8s_api_core_v1_seccomp_profile_convertToJSON(io_k8s_api_core_v1_seccomp_profile_2);
	printf("repeating io_k8s_api_core_v1_seccomp_profile:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_seccomp_profile_2));
}

int main() {
  test_io_k8s_api_core_v1_seccomp_profile(1);
  test_io_k8s_api_core_v1_seccomp_profile(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_seccomp_profile_MAIN
#endif // io_k8s_api_core_v1_seccomp_profile_TEST
