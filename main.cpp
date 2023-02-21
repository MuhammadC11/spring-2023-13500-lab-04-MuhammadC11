#include <iostream>
#include "checkerboard.h"
#include "box.h"
#include "cross.h"
int main()
{
    std::cout << checker(11, 5) << std::endl;
    std::cout << box(5, 5) << std::endl;
    std::cout << cross(5) << std::endl;
}
