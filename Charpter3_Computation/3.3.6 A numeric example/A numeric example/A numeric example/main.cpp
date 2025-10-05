// Compute mean and median temperatures
import std;

int main()
{
	std::vector<double> temps;
	double sum = 0;

	std::cout << "Please enter temp value of double type: ";

	for (double temp; std::cin >> temp;)
		temps.push_back(temp);

	for (double x:temps)
	{
		sum += x;

	}

	std::cout << "average temperature: " << sum / temps.size()<<"\n";

	std::sort(temps.begin(), temps.end()); 

	std::cout << "median temperature: " << temps[temps.size() / 2] <<"\n";




	return 0;
}