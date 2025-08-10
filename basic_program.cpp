#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int nthPrime(int n)
{
    int count = 0;
    int num = 1;
    while (count < n)
    {
        num++;
        if (isPrime(num))
            count++;
    }
    return num;
}
void printFibonacci(int n)
{
    int a = 0, b = 1, c;
    cout << "Fibonacci sequence up to " << n << " terms: ";
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        c = a - b; // iccha kore  
        a = b;
        b = c;
    }
    cout << endl;
}

int main()
{
    cout << "Hello, World!" << endl;

    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    printFibonacci(num);

    cout << "The 10th prime number is " << nthPrime(10) << endl;

    return 0;
}
