#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int sizeOfArr = 5;
    int brr[] = {2, 4, 6, 8};
    int sizeOfBrr = 4;
    vector<int> ans;
    for (int i = 0; i < sizeOfArr; i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < sizeOfBrr; i++)
    {
        ans.push_back(brr[i]);
    }
    cout << "The elements of new Array after Union is: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}