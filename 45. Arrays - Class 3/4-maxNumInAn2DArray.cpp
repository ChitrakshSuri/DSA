#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[3][3] = {{5, 6, 8}, {7, 2, 4}, {12, 6, 9}};
    int maxNum = INT32_MIN; 
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(arr[i][j] > maxNum){
                maxNum = arr[i][j];
            }
        }
    }
    cout << "Maximum number is: " << maxNum;
}