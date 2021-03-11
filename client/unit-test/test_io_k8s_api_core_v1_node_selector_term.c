#ifndef io_k8s_api_core_v1_node_selector_term_TEST
#define io_k8s_api_core_v1_node_selector_term_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_core_v1_node_selector_term_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_core_v1_node_selector_term.h"
io_k8s_api_core_v1_node_selector_term_t* instantiate_io_k8s_api_core_v1_node_selector_term(int include_optional);



io_k8s_api_core_v1_node_selector_term_t* instantiate_io_k8s_api_core_v1_node_selector_term(int include_optional) {
  io_k8s_api_core_v1_node_selector_term_t* io_k8s_api_core_v1_node_selector_term = NULL;
  if (include_optional) {
    io_k8s_api_core_v1_node_selector_term = io_k8s_api_core_v1_node_selector_term_create(
      list_create(),
      list_create()
    );
  } else {
    io_k8s_api_core_v1_node_selector_term = io_k8s_api_core_v1_node_selector_term_create(
      list_create(),
      list_create()
    );
  }

  return io_k8s_api_core_v1_node_selector_term;
}


#ifdef io_k8s_api_core_v1_node_selector_term_MAIN

void test_io_k8s_api_core_v1_node_selector_term(int include_optional) {
    io_k8s_api_core_v1_node_selector_term_t* io_k8s_api_core_v1_node_selector_term_1 = instantiate_io_k8s_api_core_v1_node_selector_term(include_optional);

	cJSON* jsonio_k8s_api_core_v1_node_selector_term_1 = io_k8s_api_core_v1_node_selector_term_convertToJSON(io_k8s_api_core_v1_node_selector_term_1);
	printf("io_k8s_api_core_v1_node_selector_term :\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_node_selector_term_1));
	io_k8s_api_core_v1_node_selector_term_t* io_k8s_api_core_v1_node_selector_term_2 = io_k8s_api_core_v1_node_selector_term_parseFromJSON(jsonio_k8s_api_core_v1_node_selector_term_1);
	cJSON* jsonio_k8s_api_core_v1_node_selector_term_2 = io_k8s_api_core_v1_node_selector_term_convertToJSON(io_k8s_api_core_v1_node_selector_term_2);
	printf("repeating io_k8s_api_core_v1_node_selector_term:\n%s\n", cJSON_Print(jsonio_k8s_api_core_v1_node_selector_term_2));
}

int main() {
  test_io_k8s_api_core_v1_node_selector_term(1);
  test_io_k8s_api_core_v1_node_selector_term(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_core_v1_node_selector_term_MAIN
#endif // io_k8s_api_core_v1_node_selector_term_TEST
