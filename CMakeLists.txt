cmake_minimum_required(VERSION 2.8.12)
project(nerv-kubernetes-client-c)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_CXX_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(client)

include_directories(
    config
    config/authn_plugin
    watch
)

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
file(GLOB HEAD_FILES "client/include/*.h")
message(STATUS "include head files: ${PUBLIC_HEAD_FILES}")
install(FILES ${HEAD_FILES} DESTINATION include/kubernetes-c/client/include )

file(GLOB API_HEAD_FILES "client/api/*.h")
message(STATUS "api head files: ${API_HEAD_FILES}")
install(FILES ${API_HEAD_FILES} DESTINATION include/kubernetes-c/client/api )

file(GLOB MODEL_HEAD_FILES "client/model/*.h")
message(STATUS "model head files: ${MODEL_HEAD_FILES}")
install(FILES ${MODEL_HEAD_FILES} DESTINATION include/kubernetes-c/client/model )

file(GLOB EXTERNAL_HEAD_FILES "client/external/*.h")
message(STATUS "external head files: ${EXTERNAL_HEAD_FILES}")
install(FILES ${EXTERNAL_HEAD_FILES} DESTINATION include/kubernetes-c/client/external )

file(GLOB CONFIG_HEAD_FILES "utils/config/*.h")
message(STATUS "config head files: ${CONFIG_HEAD_FILES}")
install(FILES ${CONFIG_HEAD_FILES} DESTINATION include/kubernetes-c/utils/config )

file(GLOB MODEL_HEAD_FILES "utils/watch/*.h")
message(STATUS "watch head files: ${MODEL_HEAD_FILES}")
install(FILES ${MODEL_HEAD_FILES} DESTINATION include/kubernetes-c/utisl/watch )
