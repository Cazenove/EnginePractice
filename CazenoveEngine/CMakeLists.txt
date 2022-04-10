cmake_minimum_required (VERSION 3.1)
set (CMAKE_C_STANDARD 11)
set (CMAKE_CXX_STANDARD 11)
project (CazenoveEngine)
include_directories("${PROJECT_SOURCE_DIR}/CazenoveCore")
include_directories("${PROJECT_SOURCE_DIR}/Dependencies/GLFW/include")
include_directories("${PROJECT_SOURCE_DIR}/Dependencies/GLEW/include")

link_directories("${PROJECT_SOURCE_DIR}/Dependencies/GLFW/lib-vc2022"
							"${PROJECT_SOURCE_DIR}/Dependencies/GLEW/lib/Release/Win32")

link_libraries("glew32.lib")
link_libraries("glfw3.lib")

add_subdirectory(CazenoveCore)
add_subdirectory(sample)