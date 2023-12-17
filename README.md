# Pico port of Lean stream IO by Steve Bush

[Documentation blog post](https://community.element14.com/products/raspberry-pi/raspberrypi_projects/b/blog/posts/lean-c-stream-library-for-pico)  

example code:  
```
#include <stdio.h>
#include "pico/stdio.h"
#include "filestream.hpp"

namespace mcu
{
    FileStream debug(1);
}

int main(int, char** )
{
    stdio_init_all();

    mcu::debug << "Hello, world!\r\n";

    mcu::debug << mcu::FileStream::RadixEnum::Hexadecimal << 6 << "\r\n";

    while (true) continue;
}
```
CMake file configuration: 
```
# add_subdirectory()
pico_add_subdirectory(lean_stream_io)

# ...

target_link_libraries(${CMAKE_PROJECT_NAME}
        pico_stdlib
        lean_stream_io
        )

# adjust to enable stdio via usb, or uart
pico_enable_stdio_usb(${CMAKE_PROJECT_NAME} 0)
pico_enable_stdio_uart(${CMAKE_PROJECT_NAME} 1)
```


[steve's github repo](https://github.com/sgbush/cppcon2022/tree/release/code/sections/4_lean_stream_io)

[video: Modern C++: C++ Patterns to Make Embedded Programming More Productive - Steve Bush - CppCon 2022](https://youtu.be/6pXhQ28FVlU?si=rgm-YdAsWRuEc9qz)  
[slides: Modern C++: C++ Patterns to Make Embedded Programming More Productive - Steve Bush - CppCon 2022](https://github.com/CppCon/CppCon2022/blob/main/Presentations/Cppcon2022-slides-Bush.pdf)  