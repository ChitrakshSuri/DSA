#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int transposeArr[3][3];
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transposeArr[j][i] = arr[i][j];
            // or we can do
            // transposeArr[i][j] = arr[j][i];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << transposeArr[i][j] << " ";
        }
        cout << endl;
    }
}