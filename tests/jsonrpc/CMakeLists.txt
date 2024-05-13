find_package(GTest CONFIG REQUIRED)
file(GLOB_RECURSE TEST_SOURCES "test_*.cpp")
add_executable(jsonrpc_tests ${TEST_SOURCES})
target_link_libraries(jsonrpc_tests PRIVATE lsp GTest::gtest GTest::gtest_main)