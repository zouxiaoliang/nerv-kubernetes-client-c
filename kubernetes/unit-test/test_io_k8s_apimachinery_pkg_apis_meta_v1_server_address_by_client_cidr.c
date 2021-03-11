#ifndef io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_TEST
#define io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr.h"
io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr(int include_optional);



io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t* instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr(int include_optional) {
  io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t* io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr = NULL;
  if (include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr = io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_create(
      "0",
      "0"
    );
  } else {
    io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr = io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_create(
      "0",
      "0"
    );
  }

  return io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr;
}


#ifdef io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_MAIN

void test_io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr(int include_optional) {
    io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t* io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_1 = instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr(include_optional);

	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_1 = io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_1);
	printf("io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr :\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_1));
	io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t* io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_2 = io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_parseFromJSON(jsonio_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_1);
	cJSON* jsonio_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_2 = io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_2);
	printf("repeating io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr:\n%s\n", cJSON_Print(jsonio_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_2));
}

int main() {
  test_io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr(1);
  test_io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_MAIN
#endif // io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_TEST
