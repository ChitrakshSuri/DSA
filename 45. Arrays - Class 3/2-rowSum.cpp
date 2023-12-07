#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[5][4] = {{1, 2, 3, 4},
                     {2, 3, 4, 1},
                     {5, 6, 1, 3},
                     {2, 4, 6, 8},
                     {1, 9, 9, 6}};

    for (int i = 0; i < 5; i++)
    {
        int num = 0;
        for (int j = 0; j < 4; j++)
        {
            num = num + arr[i][j];
            // cout << arr[i][j] << " ";
        }
        // cout << endl;
        cout << num << endl;
    }
}