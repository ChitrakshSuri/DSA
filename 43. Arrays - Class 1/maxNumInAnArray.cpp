#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 5, 334, 35, 23, 43};
    int size = 8;
    int maxNum = INT_MIN;
    for(int i = 0 ; i < size ; i++){
        if(arr[i] > arr[maxNum]){
            maxNum = arr[i];
        }
    }
    cout << "Maximum number is: " << maxNum;
}