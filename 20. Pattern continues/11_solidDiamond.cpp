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
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 1; row <= rowCount; row++)
    {
        // Space
        for (int col = 1; col <= row - 1; col++)
        {
            cout << " ";
        }
        // Star
        for (int col = 1; col <= rowCount - row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}