cmake_minimum_required(VERSION 3.15)

# set the project name and version
project(BeanieWeenie VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_COMPILE_WARNING_AS_ERROR ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)


enable_testing()
add_subdirectory(src)
add_subdirectory(targets)

## Per Target if Needed 
# set_target_properties( targets...
#     PROPERTIES
#     ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
#     LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
#     RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
# )

# link_directories("${PROJECT_SOURCE_DIR}/src/")

# add_executable(BT main.cpp)

# target_include_directories(BT PUBLIC
#     "${PROJECT_SOURCE_DIR}/src/include" 
# )