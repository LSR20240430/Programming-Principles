/*
When you write the program you are able to detect errors, but it is not always to know what to do with an error
once you catch it at run time. There is a run-time error example.

*/

#include "PPP.h"

/*
* @brief: calculate the area of rectangle
* @parameter1 length: the length of rectangle
* @parameter2 width: the width of rectangle
* @note: agguments should be greater than 0

*/

int area(int length, int width)
{

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

	return area(x - 2, y - 2);
}

/*
* @brief£ºaim to test function of area and framed_area 
* @parameter1 x: should be greater than 0
* @parameter2 y: should be greater than 2
* @parameter3 z: should be greater than 2

*/

void test(int x, int y, int z)
{
	int area1 = area(x,y);
	int area2 = framed_area(1,z);
	int area3 = framed_area(y,z);
	double ratio = double(area1) / area3;
	
	cout << ratio;
	cout << area3;
	

}

int main()
{
	test(-1, 2, 3); // area1 will be get negative (due to -1), area3 will be get zero (due to 2)
	
	
	return 0;
}
#include "PPP.h"

/*
* @brief: calculate the area of rectangle
* @parameter1 length: the length of rectangle
* @parameter2 width: the width of rectangle
* @note: agguments should be greater than 0

*/

int area(int length, int width)
{

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

	return area(x - 2, y - 2);
}

/*
* @brief£ºaim to test function of area and framed_area 
* @parameter1 x: should be greater than 0
* @parameter2 y: should be greater than 2
* @parameter3 z: should be greater than 2

*/

void test(int x, int y, int z)
{
	int area1 = area(x,y);
	int area2 = framed_area(1,z);
	int area3 = framed_area(y,z);
	double ratio = double(area1) / area3;
	
	cout << ratio;
	cout << area3;
	

}

int main()
{
	test(-1, 2, 3); // area1 will be get negative (due to -1), area3 will be get zero (due to 2)
	
	
	return 0;
}
