#include <iostream>
using namespace std;

int main()
{
    int rowCount, colCount;
    cout << "Enter the number of Rows: ";
    cin >> rowCount;
    cout << "Enter the number of Rows: ";
    cin >> colCount;

    for (int row = 1; row <= rowCount; row++)
    {
        if (row == 1 || row == rowCount - 1)
        {
            for (int col = 1; col <= colCount; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int i = 1; i <= colCount - 1; i++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}
