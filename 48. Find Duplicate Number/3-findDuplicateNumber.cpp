// POSITIONING METHOD
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 3, 4, 2, 2};
    while (arr[0] != arr[arr[0]])
    {
        swap(arr[0], arr[arr[0]]);
    }
    cout << arr[0];
}