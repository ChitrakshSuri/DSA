#include <iostream>
#include <vector>
using namespace std;

int moveAllNegToLeft(int*arr, int n){
    // Dutch National flag Algo
    int low = 0;
    int high = n - 1;
    while(low <= high){
        if(arr[low] < 0){
            low++;
        }
        else if(arr[high] > 0){
            high--;
        }
        else{
            swap(arr[low], arr[high]);
        }
    }
    return 0;
}

int main()
{
    int arr[] = {-1, 2, -3, 4, -5, 6, 0, -5, 34, -7};
    int n = sizeof(arr) / sizeof(int);

    moveAllNegToLeft(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}