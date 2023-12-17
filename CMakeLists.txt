cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 23)

include(pico_sdk_import.cmake)
# uncomment the following line if using a Pico W board
set(PICO_BOARD pico)
# set the project name (change to suit)
project(lightweight_stream)

pico_sdk_init()

# add_subdirectory()
pico_add_subdirectory(lean_stream_io)

# rest of your project
add_executable(${CMAKE_PROJECT_NAME}
        main.cpp
        )

target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC
        )

target_link_libraries(${CMAKE_PROJECT_NAME} 
        pico_stdlib
        lean_stream_io
        )


# adjust to enable stdio via usb, or uart
pico_enable_stdio_usb(${CMAKE_PROJECT_NAME} 0)
pico_enable_stdio_uart(${CMAKE_PROJECT_NAME} 1)

# create map/bin/hex/uf2 file in addition to ELF.
pico_add_extra_outputs(${CMAKE_PROJECT_NAME})
