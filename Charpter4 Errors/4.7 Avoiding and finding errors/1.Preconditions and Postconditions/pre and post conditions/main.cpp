/*
Try this.
Find a pair of values so that the precondition of this verson of area holds, but the postconditions doesn't

*/

import std;
#include <climits>

/*
* @brief: calculate the area of rectangle
* @parameter1 length: the length of rectangle
* @parameter2 width: the width of rectangle
* @note: width and length must should be greater than 0

*/

int area(int length, int width) 
{
    // Precondition: both must be positive
    if (!(0 < length && 0 < width)) 
    {
        std::cout << "Precondition failed!\n";
        return -1;
    }

    int a = length * width;

    // Postcondition: result must be positive  
    if (!(0 < a)) 
    {
        std::cout << "Postcondition failed! ";
        std::cout << length << " * " << width << " = " << a << "\n";
        return -1;
    }

    return a;
}

int main() {
    // This will pass precondition but fail postcondition due to overflow
    area(INT_MAX, 2);

    return 0;
}
