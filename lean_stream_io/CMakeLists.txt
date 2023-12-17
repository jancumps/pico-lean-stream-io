
pico_add_library(lean_stream_io)


target_sources(lean_stream_io INTERFACE
        ${CMAKE_CURRENT_LIST_DIR}/filestream.hpp
        ${CMAKE_CURRENT_LIST_DIR}/port.c
)

target_include_directories(lean_stream_io INTERFACE
        ${CMAKE_CURRENT_LIST_DIR}

)

target_link_libraries(lean_stream_io INTERFACE pico_stdlib)