cmake_minimum_required(VERSION 2.6)

file(
	GLOB SOURCE_FILES
	Random.cpp
)

include_directories(
)

link_directories(
)

link_libraries(
)

add_library(random_shared SHARED ${SOURCE_FILES})
set_target_properties(random_shared PROPERTIES OUTPUT_NAME "random")

add_library(random_static STATIC ${SOURCE_FILES})
set_target_properties(random_static PROPERTIES OUTPUT_NAME "random")

install(
	TARGETS random_shared random_static
	LIBRARY DESTINATION "lib"
	ARCHIVE DESTINATION "lib"
)

set(HEADERS Random.h)
install(
	FILES ${HEADERS}
	DESTINATION "include"
)