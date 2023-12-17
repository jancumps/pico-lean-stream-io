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