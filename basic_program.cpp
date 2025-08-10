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

    int n = 10; // Number of Fibonacci terms you want to print
    int a = 0, b = 1, c;
    cout << "Fibonacci sequence up to " << n << " terms: ";
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;

    return 0;
}
