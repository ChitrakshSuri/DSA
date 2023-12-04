#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {10, 20, 30, 50, 60, 70, 80};
    int size = 7;
    int end = size - 1;
    for(int i = end ; i >= 0 ; i--){
        cout << arr[i] << " ";
    }
}