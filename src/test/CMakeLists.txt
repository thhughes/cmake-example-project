

add_executable(src-test-simple-class test-class.cpp)

target_link_libraries(src-test-simple-class src-lib)

add_test(
  NAME
    src-test-simple-class
  COMMAND
    $<TARGET_FILE:src-test-simple-class>
  )