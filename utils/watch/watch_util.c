#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "../../kubernetes/include/list.h"
#include "../../kubernetes/include/apiClient.h"

#include "watch_util.h"

#define JSON_ARRAY_DELIM "\r\n"

static int _convert_to_json_array(list_t *json_array, const char *json_string)
{
    if (!json_string || '\0' == json_string[0] || !json_array) {
        return -1;
    }

    int rc = 0;
    char *json_string_dup = strdup(json_string);

    char *token = NULL;
    token = strtok(json_string_dup, JSON_ARRAY_DELIM);
    while (token) {
        cJSON *cjson = cJSON_Parse(token);
        if (cjson == NULL) {
            rc = -1;
            goto end;
        }
        cJSON_Delete(cjson);
        list_addElement(json_array, strdup(token));
        token = strtok(NULL, JSON_ARRAY_DELIM);
    }

  end:
    if (json_string_dup) {
        free(json_string_dup);
        json_string_dup = NULL;
    }
    return rc;
}

void __kubernets_watch_handler(void **pData, long *pDataLen, KUBE_WATCH_EVENT_HANDLER_FUNC event_hander, void *userptr)
{
    char *data = *(char **) pData;

    list_t *watch_event_list = list_create();
    if (!watch_event_list) {
        fprintf(stderr, "Cannot create a list for watch events.\n");
        return;
    }
    int rc = _convert_to_json_array(watch_event_list, data);
    if (0 == rc) {

        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, watch_event_list) {
            char *list_item = listEntry->data;
            event_hander(userptr, list_item);
        }

        free(data);
        *pData = NULL;
        *pDataLen = 0;
    }

    clear_and_free_string_list(watch_event_list);
    watch_event_list = NULL;
}


typedef struct watch_t
{
    void *userptr;
    KUBE_WATCH_EVENT_HANDLER_FUNC fn;
} watch_t;

void _kubernets_watch_handler(void **pData, long *pDataLen, void *userptr)
{
    watch_t* watch = (watch_t*)userptr;
    __kubernets_watch_handler(pData, pDataLen, watch->fn, watch->userptr);
}

void attach_watch(apiClient_t *apiClient, KUBE_WATCH_EVENT_HANDLER_FUNC event_handler, void *userptr)
{
    void * watch = alloca(sizeof(watch_t));
    apiClient->data_callback_user_ptr = watch;
    apiClient->data_callback_func = _kubernets_watch_handler;
}

void detach_watch(apiClient_t *apiClient)
{
    if (NULL == apiClient) return;
    apiClient->data_callback_func = NULL;

    if (NULL == apiClient->data_callback_user_ptr) return;
    free(apiClient->data_callback_user_ptr);
    apiClient->data_callback_user_ptr = NULL;

}
