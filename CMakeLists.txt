cmake_minimum_required(VERSION 3.9)

project(liblsp)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)

if (UNIX)
find_package (Threads REQUIRED)
link_libraries(${CMAKE_THREAD_LIBS_INIT})
endif()

find_package(asio CONFIG REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)

# Add include directories
include_directories(include)


add_subdirectory(lib)
add_subdirectory(tests)