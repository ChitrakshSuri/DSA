#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {2, 4, 5, 334, 35, 23, 43, -23};
    int size = 8;
    int minNum = INT_MAX;
    for(int i = 0 ; i < size ; i++){
        if(arr[i] < arr[minNum]){
            minNum = arr[i];
        }
    }
    cout << "Minimum number is: " << minNum;
}