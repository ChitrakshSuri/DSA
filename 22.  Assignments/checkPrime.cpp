#include <iostream>
using namespace std;

// int main()
// {
//     unsigned long long num, flag = 0;
//     cout << "Enter the number: ";
//     cin >> num;
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             cout << "Number is not prime." << endl;
//             break;
//         }
//         else
//         {
//             cout << "Number is prime." << endl;
//             break;
//         }
//     }
// }

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    bool flag = true;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
    }

    if (num == 1)
    {
        cout << "1 is neither prime nor composite.";
    }
    else if (flag == true)
    {
        cout << num << " is a prime number.";
    }
    else
    {
        cout << num << " is a composite number.";
    }
}