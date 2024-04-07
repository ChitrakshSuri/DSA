// NEGATIVE MARKING METHOD
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 3, 4, 2, 2};
    int ans = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);
        if(arr[index] < 0){
            ans = index;
            break;
        }
        // Visited Mark
        arr[index] *= -1;
    }
    cout << ans;
    
}