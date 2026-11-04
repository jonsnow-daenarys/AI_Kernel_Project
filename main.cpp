#include <iostream>
#include "common_utils/memory.h"

int main()
{
    allocate_memory();

    std::cout << "AI Kernel Project started" << std::endl;

    release_memory();
    return 0;
}
