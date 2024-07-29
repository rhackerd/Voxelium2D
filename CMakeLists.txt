cmake_minimum_required(VERSION 3.10)
project(Voxelium2D)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add every .cpp file to the executable
file(GLOB SOURCE_FILES "src/*.cpp")

# Find the raylib package
find_package(raylib REQUIRED)

# Add the executable
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# Link the executable with the raylib library
target_link_libraries(${PROJECT_NAME} raylib)

