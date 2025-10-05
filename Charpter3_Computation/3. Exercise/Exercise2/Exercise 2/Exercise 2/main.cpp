/*
If we define the median of a sequence as ¡°a number so that exactly as many elements come before it in the sequence as come 
after it,¡± fix the program in ¡ì3.6.3so that it always prints out a median. Hint: A median need not be an element of the 
sequence
*/

import std;

int main()
{
	std::vector<double> temps;
	double sum = 0;
	double mid1 = 0, mid2 = 0, median = 0;

	std::cout << "Please enter temp value of double type: ";

	for (double temp; std::cin >> temp;)
		temps.push_back(temp);

	for (double x : temps)
	{
		sum += x;

	}

	std::cout << "average temperature: " << sum / temps.size() << "\n";

	std::sort(temps.begin(), temps.end());

	if(temps.size() %2 == 1)
		std::cout << "median temperature: " << temps[temps.size() / 2] << "\n";
	else
	{
		mid1 = temps[temps.size() / 2];
		mid2 = temps[temps.size() / 2 - 1];
		median = (mid1 + mid2) / 2;
		
		std::cout << "median temperature: " << median << "\n";

	}




	return 0;
}