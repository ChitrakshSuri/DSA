#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 4, 6, 8, 10};
    int sizeOfArr = arr.size();
    // cout << sizeOfArr;
    vector<int> brr = {3, 4, 5, 6};
    int sizeOfBrr = brr.size();
    vector<int> ans;
    for (int i = 0; i < sizeOfArr; i++)
    {
        ans.push_back(arr[i]);
    }

    for (int i = 0; i < sizeOfArr; i++)
     {
        for (int j = 0; j < sizeOfBrr; j++)
        {
            if (arr[i] == brr[j])
            {
                // ans.push_back(brr[j]);
            //    // int value = brr[j];
            //     brr[j] = INT32_MIN;
                // cout << value << endl;
                break;
            } 
            
        }
     }

    // for (int j = 0; j < sizeOfBrr; j++)
    // {
    //     // if(brr[j] != value)
    //     ans.push_back(brr[j]);
    // }
    cout << "The elements of new Array after Union is: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ,";
    }
}