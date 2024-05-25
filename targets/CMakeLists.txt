

# For each "Executable" in targets 
add_executable(simple-program simple-program.cpp)
target_link_libraries(simple-program PRIVATE src-lib)