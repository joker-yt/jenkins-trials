set (TARGET appmain)

add_executable(${TARGET})
target_sources(${TARGET}
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
