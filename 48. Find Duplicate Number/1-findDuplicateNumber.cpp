// SORT METHOD
#include <iostream>
#include <vector>
using namespace std;

int findDuplicateNumBySort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 4, 2, 2};
    int n = sizeof(arr) / sizeof(int);
    int duplicate = findDuplicateNumBySort(arr, n);
    cout << duplicate;
}