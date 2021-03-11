#ifndef io_k8s_api_events_v1beta1_event_series_TEST
#define io_k8s_api_events_v1beta1_event_series_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define io_k8s_api_events_v1beta1_event_series_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/io_k8s_api_events_v1beta1_event_series.h"
io_k8s_api_events_v1beta1_event_series_t* instantiate_io_k8s_api_events_v1beta1_event_series(int include_optional);



io_k8s_api_events_v1beta1_event_series_t* instantiate_io_k8s_api_events_v1beta1_event_series(int include_optional) {
  io_k8s_api_events_v1beta1_event_series_t* io_k8s_api_events_v1beta1_event_series = NULL;
  if (include_optional) {
    io_k8s_api_events_v1beta1_event_series = io_k8s_api_events_v1beta1_event_series_create(
      56,
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    io_k8s_api_events_v1beta1_event_series = io_k8s_api_events_v1beta1_event_series_create(
      56,
      "2013-10-20T19:20:30+01:00"
    );
  }

  return io_k8s_api_events_v1beta1_event_series;
}


#ifdef io_k8s_api_events_v1beta1_event_series_MAIN

void test_io_k8s_api_events_v1beta1_event_series(int include_optional) {
    io_k8s_api_events_v1beta1_event_series_t* io_k8s_api_events_v1beta1_event_series_1 = instantiate_io_k8s_api_events_v1beta1_event_series(include_optional);

	cJSON* jsonio_k8s_api_events_v1beta1_event_series_1 = io_k8s_api_events_v1beta1_event_series_convertToJSON(io_k8s_api_events_v1beta1_event_series_1);
	printf("io_k8s_api_events_v1beta1_event_series :\n%s\n", cJSON_Print(jsonio_k8s_api_events_v1beta1_event_series_1));
	io_k8s_api_events_v1beta1_event_series_t* io_k8s_api_events_v1beta1_event_series_2 = io_k8s_api_events_v1beta1_event_series_parseFromJSON(jsonio_k8s_api_events_v1beta1_event_series_1);
	cJSON* jsonio_k8s_api_events_v1beta1_event_series_2 = io_k8s_api_events_v1beta1_event_series_convertToJSON(io_k8s_api_events_v1beta1_event_series_2);
	printf("repeating io_k8s_api_events_v1beta1_event_series:\n%s\n", cJSON_Print(jsonio_k8s_api_events_v1beta1_event_series_2));
}

int main() {
  test_io_k8s_api_events_v1beta1_event_series(1);
  test_io_k8s_api_events_v1beta1_event_series(0);

  printf("Hello world \n");
  return 0;
}

#endif // io_k8s_api_events_v1beta1_event_series_MAIN
#endif // io_k8s_api_events_v1beta1_event_series_TEST
