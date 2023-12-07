#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{0, 2, 1, 2, 1, 2, 1, 0, 0, 0, 0, 2, 2, 2, 1, 1, 1, 1, 2, 0};
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;
    int i = 0;

    while (mid != high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    for (auto val : arr)
    {
        cout << val << " ";
    }
}