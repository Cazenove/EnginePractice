add_executable(sample main.cpp)

add_custom_command(TARGET sample
	POST_BUILD COMMAND
	${CMAKE_COMMAND} -E copy_directory "${PROJECT_SOURCE_DIR}/Dependencies/GLEW/bin/Release/Win32" "$<TARGET_FILE_DIR:sample>")

target_link_libraries(sample CazenoveCore opengl32.lib glfw3.lib glew32.lib)