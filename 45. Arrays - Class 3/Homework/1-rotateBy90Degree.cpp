#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int transposeArr[3][3];
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Transpose The Matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transposeArr[j][i] = arr[i][j];
            // or we can do
            // transposeArr[i][j] = arr[j][i];
        }
    }

    cout << "TRANSPOSE:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << transposeArr[i][j] << " ";
        }
        cout << endl;
    }

    int rotate[3][3] = transposeArr[3][3];
    // Interchange The Rows
    for (int i = 0; i < 3 / 2; i++)
    {
        for (int j = 0; i < 3; j++)
        {
            swap(transposeArr[i][j], transposeArr[3 - i - 1][j]);
        }
    }

    cout << "Rotate 90 Degree:" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << transposeArr[i][j] << " ";
        }
        cout << endl;
    }
}
