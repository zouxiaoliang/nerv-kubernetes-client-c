#ifndef _WATCH_UTIL_H
#define _WATCH_UTIL_H

#ifdef  __cplusplus
extern "C" {
#endif

typedef struct apiClient_t apiClient_t;

typedef void (*KUBE_WATCH_EVENT_HANDLER_FUNC)(void* userptr, const char*);

/**
 * @brief attach_watch bind a watch to the client
 * @param apiClient client
 * @param event_handler handle
 * @param userptr userptr
 * @post set api watch is 1
 */
void attach_watch(apiClient_t *apiClient, KUBE_WATCH_EVENT_HANDLER_FUNC event_handler, void* userptr);

void detach_watch(apiClient_t *apiClient);
#ifdef  __cplusplus
}
#endif
#endif                          /* _WATCH_UTIL_H */
