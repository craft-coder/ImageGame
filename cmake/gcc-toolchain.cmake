set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR ${CMAKE_HOST_SYSTE})

set (CMAKE_SYSTEM_NAME Linux)

set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

set(VCPKG_DEFAULT_TRIPLET x64-linux)
set(REPO_ROOT)
get_filename_component(REPO_ROOT ${CMAKE_CURRENT_LIST_DIR} DIRECTORY)
include(${REPO_ROOT}/vcpkg/scripts/buildsystems/vcpkg.cmake)
