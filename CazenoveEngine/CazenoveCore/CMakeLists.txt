set(DIR_LIB_SRCS "./src/")
file (GLOB_RECURSE SOURCES
	"${DIR_LIB_SRCS}/*.h"
	"${DIR_LIB_SRCS}/*.cpp"
	#${PROJECT_SOURCE_DIR}/Depencencies/src/glad/src/glad.c
)

add_library(CazenoveCore
	${SOURCES}
)
#target_include_directories(CazenoveCore PRIVATE "${PROJECT_SOURCE_DIR}/Dependencies/src/glad/include")