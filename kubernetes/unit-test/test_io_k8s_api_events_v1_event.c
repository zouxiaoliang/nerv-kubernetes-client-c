#ifndef io_k8s_api_events_v1_event_TEST
#define io_k8s_api_events_v1_event_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_events_v1_event_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_events_v1_event.h"
io_k8s_api_events_v1_event_t* instantiate_io_k8s_api_events_v1_event(int include_optional);

#include "test_io_k8s_api_core_v1_event_source.c"
#include "test_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.c"
#include "test_io_k8s_api_core_v1_object_reference.c"
#include "test_io_k8s_api_core_v1_object_reference.c"
#include "test_io_k8s_api_events_v1_event_series.c"


io_k8s_api_events_v1_event_t* instantiate_io_k8s_api_events_v1_event(int include_optional) {
  io_k8s_api_events_v1_event_t* io_k8s_api_events_v1_event = NULL;
  if (include_optional) {
    io_k8s_api_events_v1_event = io_k8s_api_events_v1_event_create(
      "0",
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_event_source(0),
      "2013-10-20T19:20:30+01:00",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_apimachinery_pkg_apis_meta_v1_object_meta(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_object_reference(0),
       // false, not to have infinite recursion
      instantiate_io_k8s_api_core_v1_object_reference(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_io_k8s_api_events_v1_event_series(0),
      "0"
    );
  } else {
    io_k8s_api_events_v1_event = io_k8s_api_events_v1_event_create(
      "0",
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      NULL,
      "2013-10-20T19:20:30+01:00",
      "0",
      NULL,
      "0",
      "0",
      NULL,
      NULL,
      "0",
      "0",
      NULL,
      "0"
    );
  }

  return io_k8s_api_events_v1_event;
}


#ifdef io_k8s_api_events_v1_event_MAIN

void test_io_k8s_api_events_v1_event(int include_optional) {
    io_k8s_api_events_v1_event_t* io_k8s_api_events_v1_event_1 = instantiate_io_k8s_api_events_v1_event(include_optional);

	cJSON* jsonio_k8s_api_events_v1_event_1 = io_k8s_api_events_v1_event_convertToJSON(io_k8s_api_events_v1_event_1);
	printf("io_k8s_api_events_v1_event :\n%s\n", cJSON_Print(jsonio_k8s_api_events_v1_event_1));
	io_k8s_api_events_v1_event_t* io_k8s_api_events_v1_event_2 = io_k8s_api_events_v1_event_parseFromJSON(jsonio_k8s_api_events_v1_event_1);
	cJSON* jsonio_k8s_api_events_v1_event_2 = io_k8s_api_events_v1_event_convertToJSON(io_k8s_api_events_v1_event_2);
	printf("repeating io_k8s_api_events_v1_event:\n%s\n", cJSON_Print(jsonio_k8s_api_events_v1_event_2));
}

int main() {
  test_io_k8s_api_events_v1_event(1);
  test_io_k8s_api_events_v1_event(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_events_v1_event_MAIN
#endif // io_k8s_api_events_v1_event_TEST
