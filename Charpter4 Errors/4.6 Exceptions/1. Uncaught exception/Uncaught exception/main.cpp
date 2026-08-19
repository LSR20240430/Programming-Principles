/*
If you don¡¯t catch an exception, you¡¯ll get a default system error (an ¡°uncaught exception¡± error).
Try This
To see what an uncaught exception error looks like, run a small program that uses error()without catching 
any exceptions.

*/


import std;

double divide(double a, double b)
{
    if (b == 0) {
        throw std::runtime_error("Division by zero!");  // Actually throw the exception
    }
    return a / b;
}

int main()
{
    std::cout << divide(1.5, 0) << "\n";  // This will cause an uncaught exception
    return 0;
}