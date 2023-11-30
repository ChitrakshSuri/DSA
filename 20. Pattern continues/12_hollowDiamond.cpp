#include <iostream>
using namespace std;
int main()
{
    int rowCount;
    cout << "Enter the number of rows: ";
    cin >> rowCount;

    for (int row = 1; row <= rowCount; row++)
    {
        // Space
        for (int col = 1; col <= rowCount - row; col++)
        {
            cout << " ";
        }
        // Star
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1)
            {
                cout << "*";
            }
            else if (col == 2 * row - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Inverted
    for (int row = 1; row <= rowCount; row++)
    {
        for (int col = 1; col <= row ; col++)
        {
            cout << " ";
        }
        for (int col = 1; col <= 2 * rowCount - (2 * row - 1); col++)
        {
            if (col == 1 || col == 2 * rowCount - (2 * row - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}