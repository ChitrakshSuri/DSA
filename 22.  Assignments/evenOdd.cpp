#include <iostream>
using namespace std;

int check(int num)
{

    if (num % 2 == 0)
    {
        cout << num << " is even.";
    }
    else if (num % 2 != 0)
    {
        cout << num << " is odd.";
    }

    return 0;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int callcheck = check(num);
}
