# CMake Minimum Version
cmake_minimum_required(VERSION 3.25)

# CMake Version
PROJECT( AirfoilTools
    VERSION 1.0.0
    LANGUAGES C CXX
    )

# Add subdirectories
ADD_SUBDIRECTORY(src)
ADD_SUBDIRECTORY(Executables)

# Set C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -Werror -std=c++20")

# Add GoogleTest library
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
target_compile_options(gtest PRIVATE "-Wno-restrict")

# Enable testing
enable_testing()
include(GoogleTest)
include(CTest)