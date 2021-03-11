#ifndef io_k8s_api_extensions_v1beta1_ingress_tls_TEST
#define io_k8s_api_extensions_v1beta1_ingress_tls_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_extensions_v1beta1_ingress_tls_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_extensions_v1beta1_ingress_tls.h"
io_k8s_api_extensions_v1beta1_ingress_tls_t* instantiate_io_k8s_api_extensions_v1beta1_ingress_tls(int include_optional);



io_k8s_api_extensions_v1beta1_ingress_tls_t* instantiate_io_k8s_api_extensions_v1beta1_ingress_tls(int include_optional) {
  io_k8s_api_extensions_v1beta1_ingress_tls_t* io_k8s_api_extensions_v1beta1_ingress_tls = NULL;
  if (include_optional) {
    io_k8s_api_extensions_v1beta1_ingress_tls = io_k8s_api_extensions_v1beta1_ingress_tls_create(
      list_create(),
      "0"
    );
  } else {
    io_k8s_api_extensions_v1beta1_ingress_tls = io_k8s_api_extensions_v1beta1_ingress_tls_create(
      list_create(),
      "0"
    );
  }

  return io_k8s_api_extensions_v1beta1_ingress_tls;
}


#ifdef io_k8s_api_extensions_v1beta1_ingress_tls_MAIN

void test_io_k8s_api_extensions_v1beta1_ingress_tls(int include_optional) {
    io_k8s_api_extensions_v1beta1_ingress_tls_t* io_k8s_api_extensions_v1beta1_ingress_tls_1 = instantiate_io_k8s_api_extensions_v1beta1_ingress_tls(include_optional);

	cJSON* jsonio_k8s_api_extensions_v1beta1_ingress_tls_1 = io_k8s_api_extensions_v1beta1_ingress_tls_convertToJSON(io_k8s_api_extensions_v1beta1_ingress_tls_1);
	printf("io_k8s_api_extensions_v1beta1_ingress_tls :\n%s\n", cJSON_Print(jsonio_k8s_api_extensions_v1beta1_ingress_tls_1));
	io_k8s_api_extensions_v1beta1_ingress_tls_t* io_k8s_api_extensions_v1beta1_ingress_tls_2 = io_k8s_api_extensions_v1beta1_ingress_tls_parseFromJSON(jsonio_k8s_api_extensions_v1beta1_ingress_tls_1);
	cJSON* jsonio_k8s_api_extensions_v1beta1_ingress_tls_2 = io_k8s_api_extensions_v1beta1_ingress_tls_convertToJSON(io_k8s_api_extensions_v1beta1_ingress_tls_2);
	printf("repeating io_k8s_api_extensions_v1beta1_ingress_tls:\n%s\n", cJSON_Print(jsonio_k8s_api_extensions_v1beta1_ingress_tls_2));
}

int main() {
  test_io_k8s_api_extensions_v1beta1_ingress_tls(1);
  test_io_k8s_api_extensions_v1beta1_ingress_tls(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_extensions_v1beta1_ingress_tls_MAIN
#endif // io_k8s_api_extensions_v1beta1_ingress_tls_TEST
