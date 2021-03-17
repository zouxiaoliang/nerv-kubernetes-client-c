cmake_minimum_required(VERSION 2.8.12)
project(nerv-kubernetes-client-example-c)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_CXX_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_BUILD_TYPE Debug)

link_directories(/usr/local/lib)

include_directories(
    ../kubernetes
    ../kubernetes/include
    ../kubernetes/api
    ../kubernetes/external
    ../kubernetes/model
    ../utils/
    ../utils/config
    ../utils/watch
    )

if (APPLE)
    add_definitions(-Dsecure_getenv=getenv)
endif()

add_executable(delete_pod delete_pod/main.c)
target_link_libraries(delete_pod nerv-kubernetes)

add_executable(watch_list_pod watch_list_pod/main.c)
target_link_libraries(watch_list_pod nerv-kubernetes)

add_executable(auth_provider auth_provider/main.c)
target_link_libraries(auth_provider nerv-kubernetes)

add_executable(exec_provider exec_provider/my_exec_provider.c)
target_link_libraries(exec_provider nerv-kubernetes)

add_executable(list_pod_by_exec_provider exec_provider/list_pod_by_exec_provider.c)
target_link_libraries(list_pod_by_exec_provider nerv-kubernetes)

add_executable(generic generic/main.c)
target_link_libraries(generic nerv-kubernetes)

add_executable(create_pod create_pod/main.c)
target_link_libraries(create_pod nerv-kubernetes)

add_executable(list_pod_incluster list_pod_incluster/main.c)
target_link_libraries(list_pod_incluster nerv-kubernetes)

add_executable(list_pod list_pod/main.c)
target_link_libraries(list_pod nerv-kubernetes)

add_executable(multi_thread
    multi_thread/create_pod.c
    multi_thread/watch_pod.c
    multi_thread/main.c
    multi_thread/mt.h
    )
target_link_libraries(multi_thread nerv-kubernetes)

add_executable(list_pod_cpp
    list_pod_cpp/pod.cpp list_pod_cpp/main.cpp)
target_link_libraries(list_pod_cpp nerv-kubernetes)
