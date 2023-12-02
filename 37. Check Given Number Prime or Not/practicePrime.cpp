#include <iostream>
#include <cmath>

using namespace std;

bool checkPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int result = checkPrime(num);
    if (num == 1)
    {
        cout << num << " is neither prime number nor composite number";
    }
    else if (result)
    {
        cout << num << " is a Prime Number.";
    }
    else
    {
        cout << num << " is a Composite Number.";
    }
}