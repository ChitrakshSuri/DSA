#include <iostream>
using namespace std;

// int factorial(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         int fact = 1;
//         fact = fact * i;
//         return fact;
//     }
// }

int main()
{
    unsigned long long num;
    unsigned long long fact = 1;
    cout << "Enter the number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;

        // int callFactorial = factorial(num);
    }
    cout << "Factorial of " << num << " is: " << fact << endl;
}