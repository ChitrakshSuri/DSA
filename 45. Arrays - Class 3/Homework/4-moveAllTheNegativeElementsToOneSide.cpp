#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, -1, 3, 2, -7, -5, 11, 6};
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while (i <= end)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[end]);
            i++;
            end--;
        }
        else
        {
            swap(arr[i], arr[start]);
            start++;
        }
    }
    for(auto val : arr){
        cout << val << " ";
    }
}