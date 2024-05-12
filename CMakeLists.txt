cmake_minimum_required(VERSION 3.25)

project(liblsp VERSION 0.1.0 LANGUAGES CXX)

set(CXX_STANDARD 20)
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