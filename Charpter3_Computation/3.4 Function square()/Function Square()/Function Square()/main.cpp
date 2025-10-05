// Implement square() without using the multipliaction operator;

import std;

double square(double x)
{
	double result = 0;

	for (int i = 0;i < x;++i)
	{
		result += x;
		
	}
	
	return result;

}



int main()
{
	
	std::cout << "Output the number 1 to 10 and its square:\n\n";

	for (int i = 0;i <= 10;++i)
	{
		std::cout<<i<<"\t"<<square(i)<<"\n\n";

	}




	return 0;
}