/*
Modify the program from the previous exercise to use double instead of int. Also, make a vector of doubles 
containing the N-1 differences between adjacent values and write out that vector of differences.

*/

#include "PPP.h"

/*
* @brief: a function get Values of N and return N
* @No parameter
*/
int get_integer()
{
	cout << "we need to calculate the sum of first N values, so we first get values of N.\n";

	int N = 0;
	cin >> N;

	return N;

}

/*
* @brief: read and store float-point, then return float_point by vector. Terminate by '|'
* @No parameter
*/
vector<double> read_and_store_float_point()
{
	cout << "Please enter integer values, terminate by '|'.\n";

	vector<double> float_points;
	for (double a = 0; cin >> a;)
	{
		float_points.push_back(a);
	}

	if (cin.fail())  // detect status of error
		cin.clear(); // clear status of error

	char terminate = ' ';

	if (cin >> terminate && terminate == '|')  // cin >> terminate will get value from buffer, instead of from keyboard
	{
	}
	else
		error("expected integers or '|' to terminate.\n");




	return float_points;
}

/*
* @brief: calculate the sum of values of first N
* @parameter one N: the first N values
* @parameter two float_poingts: the flota_point values you input
*/
double float_point_sum(int N, vector<double> float_points)
{
	cout << "we start calculate sum by now.\n";

	double sum = 0.0;

	if (N > float_points.size())
		error("Oops, N of your input exceed the numbers of values\n");


	for (int i = 0; i < N; ++i)
	{
		double float_point = float_points[i];

		// detect if the sum exceeds it's range of int with the way of logic
		if ((float_point > 0 && sum > DBL_MAX - float_point) || (float_point < 0 && sum < DBL_MIN - float_point))
		{
			error("sum exceeds the range of int.\n");
			break;
		}


		sum += float_point;


	}

	cout << "the sum of first N values are: " << sum << "\n";

	return sum;
}


/*
* @brief: calculate new vector from prvious vector, using differences between adjacent values in prvious vector,
*  and print out new vector
* @parameter float_points: previous vector you input
*/
vector<double> new_vector(vector<double> float_points)
{
	cout << "construt a new vector of doubles the N-1 differences between adjacent values and write out that vector of differences.";

	vector<double> new_vector_float_point;

	for(int i=0; i < float_points.size() - 1; ++i)
	{ 
		double difference = float_points[i + 1] - float_points[i];

		new_vector_float_point.push_back(difference);
	
	}

	
	for (int i = 0; i < new_vector_float_point.size(); ++i)
		cout << "vector[" << i << "]= " << new_vector_float_point[i] << "\t\n";
	

	
	
	
	cout << "\n";

	return new_vector_float_point;

}

int main()
{

	try {
		int N = get_integer();
		vector<double> float_point = read_and_store_float_point();
		double sum = float_point_sum(N, float_point);

		vector<double> new_vector_float_point = new_vector(float_point);

		
		
		return 0;
	}

	catch (exception& e)
	{
		cerr << "error: " << e.what();
		return 1;
	}
	catch (...)
	{
		cerr << "Opos, unknown exception";
		return 2;
	}

}