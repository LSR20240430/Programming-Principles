/*
Let¡¯s consider a slightly different question: Once you have checked a set of arguments and found an error, 
what should you do? Sometimes you can return an ¡°error value.¡±

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
	if (length <= 0)
		return -1; // the called function test
		
	if (width <= 0)
		return -1;
		
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
	constexpr int frame_width = 2;
	

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
	int area1 = area(x, y);
	if (area1 == -1)
	{

	   // the caller function test
	}
	int area2 = framed_area(1, z);
	if (area2 == -1)
	{

	}
	int area3 = framed_area(y, z);
	if (area3 == -1)
	{

	}
	double ratio = double(area1) / area3;

	cout << ratio;
	cout << area3;


}

int main()
{
	test(-1, 2, 3); // area1 will be get negative (due to -1), area3 will be get zero (due to 2)


	return 0;
}