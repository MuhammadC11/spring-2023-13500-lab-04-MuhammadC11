#include <iostream>
#include "box.h"

int main()
{
    std::cout << box(5, 5) << std::endl;
    std::cout << checker(11, 5) << std::endl;
    std::cout << checker(12, 7) << std::endl;
    std::cout << checker(7, 5) << std::endl;
    std::cout << cross(5) << std::endl;
    std::cout << lower(5) << std::endl;
    std::cout << upper(5) << std::endl;
    std::cout << trapezoid(11, 5) << std::endl;
    std::cout << trapezoid(11, 8) << std::endl;
    std::cout << checker3x3(27, 15) << std::endl;
}
