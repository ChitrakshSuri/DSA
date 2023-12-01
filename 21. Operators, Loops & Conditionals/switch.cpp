#include <iostream>
using namespace std;
int main()
{
    int val;
    cout << "Enter the value: ";
    cin >> val;

    switch (val)
    {
    case 1:
        cout << "Chitraksh ";
        break;
    case 2:
        cout << "Suri ";
        break;
    case 3:
        cout << "Neeraj ";
        break;
    case 4:
        cout << "Yogita ";
        break;
    default:
        cout << "Ram";
    }
}