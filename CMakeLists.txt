cmake_minimum_required(VERSION 2.8.12)
project(nerv-kubernetes-client-c)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_CXX_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_BUILD_TYPE Debug)

option(SHOW_INSTALL_FILES "show the install files." OFF)

add_subdirectory(kubernetes)
add_subdirectory(examples)

include_directories(
    config
    config/authn_plugin
    watch
)

aux_source_directory(utils SOURCES)
aux_source_directory(utils/config SOURCES)
aux_source_directory(utils/config/authn_plugin SOURCES)
aux_source_directory(utils/watch SOURCES)

include_directories(/usr/local/include)
link_directories(/usr/local/lib)

if(APPLE)
    add_definitions(-Dsecure_getenv=getenv)
endif(APPLE)

set(pkgName "kubernetes")

# Add library with project file with project name as library name
add_library(nerv-${pkgName} SHARED ${SOURCES})

# Link dependent libraries
target_link_libraries(nerv-${pkgName} ${pkgName} yaml)

#install library to destination
install(TARGETS nerv-${pkgName} DESTINATION ${CMAKE_INSTALL_PREFIX})

#install head files to destination
file(GLOB HEAD_FILES "kubernetes/include/*.h")
install(FILES ${HEAD_FILES} DESTINATION include/kubernetes-c/kubernetes/include )

file(GLOB API_HEAD_FILES "kubernetes/api/*.h")
install(FILES ${API_HEAD_FILES} DESTINATION include/kubernetes-c/kubernetes/api )

file(GLOB MODEL_HEAD_FILES "kubernetes/model/*.h")
install(FILES ${MODEL_HEAD_FILES} DESTINATION include/kubernetes-c/kubernetes/model )

file(GLOB EXTERNAL_HEAD_FILES "kubernetes/external/*.h")
install(FILES ${EXTERNAL_HEAD_FILES} DESTINATION include/kubernetes-c/kubernetes/external )

file(GLOB CONFIG_HEAD_FILES "utils/config/*.h")
install(FILES ${CONFIG_HEAD_FILES} DESTINATION include/kubernetes-c/utils/config )

file(GLOB WATCH_HEAD_FILES "utils/watch/*.h")
install(FILES ${WATCH_HEAD_FILES} DESTINATION include/kubernetes-c/utils/watch )

file(GLOB UTILS_HEAD_FILES "utils/*.h")
install(FILES ${UTILS_HEAD_FILES} DESTINATION include/kubernetes-c/utils)

if(SHOW_INSTALL_FILES)
    message(STATUS "include head files: ${PUBLIC_HEAD_FILES}")
    message(STATUS "api head files: ${API_HEAD_FILES}")
    message(STATUS "model head files: ${MODEL_HEAD_FILES}")
    message(STATUS "external head files: ${EXTERNAL_HEAD_FILES}")
    message(STATUS "config head files: ${CONFIG_HEAD_FILES}")
    message(STATUS "watch head files: ${WATCH_HEAD_FILES}")
    message(STATUS "utils head files: ${UTILS_HEAD_FILES}")
endif()
