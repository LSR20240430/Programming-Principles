/*
Let the caller of area()deal with bad arguments.
Let¡¯s try the first alternative (¡°Let the user beware!¡±) first. That¡¯s the one we¡¯d have to choose if 
area()was a function in a library where we couldn¡¯t modify it. For better or worse, this is the most common 
approach.

*/

#include "PPP.h"

constexpr int frame_width = 2;

/*
* @brief: calculate the area of rectangle
* @parameter1 length: the length of rectangle
* @parameter2 width: the width of rectangle
* @note: agguments should be greater than 0

*/
int area(int length, int width)
{
 // in PPP_supportwe supply an error() that by default terminates the program with a system error message plus the string we passed as an argument to error()
	

	return length * width;
}

/*
* @brief: calculate the framed area of rectangle
* @parameter1 x: the length of framed rectangle
* @parameter2 y: the width of framed rectangle
* @note: x and y should be greater than 2

*/
int framed_area(int x, int y)
{


	return area(x - frame_width, y - frame_width);
}

/*
* @brief£ºaim to test function of area and framed_area
* @parameter1 x: should be greater than 0
* @parameter2 y: should be greater than 2
* @parameter3 z: should be greater than 2

*/
void test(int x, int y, int z)
{
	if (x <= 0)
		error("non-positive 1st area() argument");
	if (y <= 0)
		error("non-positive 2nd area() argument");
	int area1 = area(x, y);

	if (1 - frame_width <= 0)
		error("non-positive 1st area() argument called by framed_area");
	if (z - frame_width <= 0)
		error("non-positive 2nd area() argument called by framed_area");
	int area2 = framed_area(1, z);

	if (y - frame_width <= 0)
		error("non-positive 1st area() argument called by framed_area");
	if (z - frame_width <= 0)
		error("non-positive 2nd area() argument called by framed_area");
	int area3 = framed_area(y, z);
	
	double ratio = double(area1) / area3;

	cout << ratio;
	cout << area3;


}

int main()
{

	test(-1, 2, 3);
	


	return 0;
}