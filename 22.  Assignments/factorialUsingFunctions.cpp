#include <iostream>
using namespace std;

int factorial(unsigned long long num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << num << " is: " << fact << endl;
    return 0;
}

int main()
{
    unsigned long long num;
    unsigned long long fact = 1;
    cout << "Enter the number: ";
    cin >> num;
    int callFactorial = factorial( num);
}