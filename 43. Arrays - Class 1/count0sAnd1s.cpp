#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 0, 1, 0, 1, 1, 1, 0, 0};
    int size = 9;
    int countZero = 0;
    int countOne = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            countZero++;
        }
        else if (arr[i] == 1)
        {
            countOne++;
        }
    }
    cout << "Number of Zero's: " << countZero << endl;

    cout << "Number of One's: " << countOne << endl;
}