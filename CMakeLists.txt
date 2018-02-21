cmake_minimum_required(VERSION 3.9)
project(template_2D_SDL)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -mwindows")
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

include_directories(headers SDL2/include/SDL2 SDL2_image/include/SDL2)
link_directories(SDL2/lib SDL2_image/lib)

set(SOURCE_FILES
        main.cpp headers/Game.h src/Game.cpp headers/globals.h src/globals.cpp headers/Graphics.h src/Graphics.cpp
        headers/Input.h src/Input.cpp headers/Scroll.h src/Scroll.cpp
        )

add_executable(template_2D_SDL ${SOURCE_FILES})

target_link_libraries(template_2D_SDL mingw32 SDL2main SDL2 SDL2_image)
