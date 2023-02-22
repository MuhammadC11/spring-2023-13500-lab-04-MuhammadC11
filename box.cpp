#include <iostream>

std::string box(int width, int height)
{
    std::string result = "";
    std::cout << "Shape with width " << width << " and height " << height << ": " << std::endl;
    for (int i = 0; i < height; i++) // for loop to print the height
    {
        for (int j = 0; j < width; j++) // for loop to print the width
        {
            result += "*"; // print the star
        }
        result += "\n";
    }
    return result;
}

std::string checker(int width, int height)
{
    int index = 0;
    std::string result = "";
    std::cout << "Shape with width " << width << " and height " << height << ": " << std::endl;
    for (int i = 0; i < height; i++) // for loop to print the height
    {
        for (int j = 0; j < width; j++) // for loop to print the width
        {
            if (i % 2 == 0) // if the row is even
            {
                if (j % 2 == 0) // if the column is even
                {
                    result += "*"; // print the star
                    index++;
                }
                else
                {
                    result += " "; // print the star
                    index++;
                }
            }
            else // if the row is odd
            {
                if (j % 2 == 0) // if the column is even
                {
                    result += " "; // print the star
                    index++;
                }
                else
                {
                    result += "*"; // print the star
                    index++;
                }
            }
        }
        result += "\n";
    }
    return result;
}

std::string cross(int size)
{
    std::string result = "";

    std::cout << "Shape with size " << size << ": " << std::endl;
    for (int i = 1; i <= size; i++) // for loop to print the height
    {
        for (int h = 1; h <= size; h++) // for loop to print the size
        {
            if (i + h == size + 1 || i == h)
            {
                result += "*"; // print the star
            }
            else
            {
                result += " "; // print the star
            }
        }
        result += "\n";
    }

    return result;
}

std::string lower(int length)
{
    std::string result = "";
    std::cout << "Shape with length " << length << ": " << std::endl;
    for (int i = 0; i < length; i++) // for loop to print the height
    {

        for (int j = 0; j < length; j++) // for loop to print the width
        {
            if (j <= i)
            {
                result += "*"; // print the star
            }
            else
            {
                result += " "; // print the star
            }
        }
        result += "\n";
    }
    return result;
}

std::string upper(int length)
{
    std::string result = "";
    std::cout << "Shape with length " << length << ": " << std::endl;
    for (int i = 0; i < length; i++) // for loop to print the height
    {

        for (int j = 0; j < length; j++) // for loop to print the width
        {
            if (j >= i)
            {
                result += "*"; // print the star
            }
            else
            {
                result += " "; // print the star
            }
        }
        result += "\n";
    }
    return result;
}

std::string trapezoid(int width, int height)
{
    std::string result = "";
    double validate = width / ((height - 1.0) * 2.0);
    std::cout << "Shape with width " << width << " and height " << height << ": " << std::endl;

    if (validate <= 1)
    {
        return "Impossible shape!";
    }
    else if (validate > 1)
    {
        for (int i = 0; i < height; i++) // for loop to print the height
        {
            for (int j = 0; j < width; j++) // for loop to print the width
            {
                if (j >= i && j <= width - i - 1)
                {
                    result += "*"; // print the star
                }

                else
                {
                    result += " "; // print the star
                }
            }
            result += "\n";
        }
    }

    return result;
}

std::string checker3x3(int width, int height)
{

    double three;
    std::string result = "";
    std::cout << "Shape with width " << width << " and height " << height << ": " << std::endl;
    for (int i = 0; i < height; i++) // for loop to print the height
    {
        for (int j = 0; j < width; j++) // for loop to print the width
        {
            if (i % 6 < 3) // if the row is even
            {
                if (j % 6 < 3) // if the column is even
                {
                    result += "*"; // print the star
                }
                else
                {
                    result += " "; // print the star
                }
            }
            else // if the row is odd
            {
                if (j % 6 < 3) // if the column is even
                {
                    result += " "; // print the star
                }
                else
                {
                    result += "*"; // print the star
                }
            }
        }
        result += "\n";
    }
    return result;
}