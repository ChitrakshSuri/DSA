#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 3; row++)
    {
        if (row == 1 || row == 3)
        {
            for (int col = 1; col <= 5; col++)
            {
                cout << "*";
            }
        }
        else if (row == 2)
        {
            cout << "*";
            for (int col = 2; col <= 4; col++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}
