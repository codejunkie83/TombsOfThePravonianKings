cmake_minimum_required(VERSION 3.9)
project(TombsOfThePravonianKings)

find_package(OpenGL REQUIRED)

set(CMAKE_CXX_STANDARD 11)

#set(GLFW_INCLUDE_PATH "GLFW INCLUDE" CACHE PATH "include" )
set(GLFW_LIBRARY "" CACHE FILEPATH "glfw3" )

#set(GLEW_INCLUDE_PATH "GLEW INCLUDE" CACHE PATH "include" )
set(GLEW_LIBRARY "" CACHE FILEPATH "glew32" )

#set(GLM_INCLUDE_PATH "GLM INCLUDE" CACHE PATH "include" )

include_directories(include)

link_directories(lib)

add_executable(TombsOfThePravonianKings main.cpp Display.cpp Display.h)

target_link_libraries(TombsOfThePravonianKings
        ${OPENGL_LIBRARY} # filled by "find_package(OpenGL REQUIRED)"
        libglfw3.a
        glew32.lib
        )