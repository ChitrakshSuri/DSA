#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{10, 20, 40, 60, 70};
    for (int i = 0; i < arr.size(); i++)
    {
        // cout << arr[i] << " ";
        for (int j = i+1; j < arr.size(); j++)
        {
            // cout << "(" << arr[i] << "," << arr[j] << ") ";
            if(arr[i] + arr[j] == 80){
                cout << "Pair Found is: " << arr[i] << "," << arr[j] << endl;
            }
        }
        // cout << endl;
    }
}