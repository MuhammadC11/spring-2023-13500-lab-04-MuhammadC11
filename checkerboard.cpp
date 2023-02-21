#include <iostream>

std::string checker(int width, int height)
{
    int index = 0;
    std::cout << "Shape with width " << width << " and height " << height << ": " << std::endl;
    for (int i = 0; i < height; i++) // for loop to print the height
    {
        for (int j = 0; j < width; j++) // for loop to print the width
        {
            if (index % 2 == 0)
            {
                std::cout << "*"; // print the star
                index++;
            }
            else
            {
                std::cout << " "; // print the star
                index++;
            }
        }
        std::cout << std::endl;
    }
    return "";
}