/*
Read a sequence of double values into a vector. Think of each value as the distance between two cities along a given route. 
Compute and print the total distance (the sum of all distances). Find and print the smallest and greatest distance between 
two neighboring cities. Find and print the mean distance between two neighboring cities.
*/


import std;

int main()
{
	std::vector<double> city_distances;
	double sum = 0, median = 0;

	std::cout << "Please enter the the distance between two neighboring cities: ";

	for (double city_distance; std::cin >> city_distance;)
		city_distances.push_back(city_distance);

	for (double x : city_distances)
	{
		sum += x;
		
	}

	std::cout << "sum city_distances is: " << sum<<"\n";

	std::sort(city_distances.begin(), city_distances.end());
	
	std::cout << "the median is: " << city_distances[city_distances.size() / 2]<<"\n";
	std::cout << "the min value: " << city_distances[0] << "\n";
	std::cout << "the max value: " << city_distances[city_distances.size() -1 ] << "\n";


	return 0;
}
