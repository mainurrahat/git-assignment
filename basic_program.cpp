// Add factorial function and example usage
#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    cout << "Hello, World!" << endl;

    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}
