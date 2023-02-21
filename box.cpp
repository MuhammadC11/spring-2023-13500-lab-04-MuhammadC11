#include <iostream>

std::string box(int width, int height)
{

    std::cout << "Shape with width " << width << " and height " << height << ": " << std::endl;
    for (int i = 0; i < height; i++) // for loop to print the height
    {
        for (int j = 0; j < width; j++) // for loop to print the width
        {
            std::cout << "*"; // print the star
        }
        std::cout << std::endl;
    }
    return "";
}