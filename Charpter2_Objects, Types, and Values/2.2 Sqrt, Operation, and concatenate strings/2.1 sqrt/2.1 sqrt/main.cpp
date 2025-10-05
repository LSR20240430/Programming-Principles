import std;

int main()
{

	double n = 4.5;
	double z = std::sqrt(4.5);

	int a = 9;
	int b = 2;

	int c = a / b * b + a % b; // The result of formula is a
	

	std::cout << "n:" << z <<"\nc(n's square root):" << c << "\n";


	// Operators and operations
	int x = 0;
	std::cout << "Please enter a int value: ";
	std::cin >> x;
	std::cout << " x == " << x << "\nx+1 == " << x + 1 << "\nthree times x == " << 3 * x << "\ntwice x ==" << x + x << "\n x squared ==" << x * x << "\n half of x ==" << x / 2 << "\n square root of x ==" << std::sqrt(x) << "\n";

	// concatenate strings

	std::string FirstName = "???";
	std::string SecondName = "???";

	std::cout << "Please enter your frist name and second name\n";
    
	std::cin >> FirstName >> SecondName;

	std::string s1 = FirstName + SecondName;
	std::cout << "concatenate FirstName and SecondName s1:" << s1;
	



	return 0;

}