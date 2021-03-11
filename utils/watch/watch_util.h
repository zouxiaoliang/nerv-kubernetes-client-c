#ifndef _WATCH_UTIL_H
#define _WATCH_UTIL_H

#ifdef  __cplusplus
extern "C" {
#endif

typedef void (*KUBE_WATCH_EVENT_HANDLER_FUNC)(void* userptr, const char*);

void kubernets_watch_handler(void** pData, long* pDataLen, KUBE_WATCH_EVENT_HANDLER_FUNC event_hander, void *userptr);

#ifdef  __cplusplus
}
#endif
#endif                          /* _WATCH_UTIL_H */
