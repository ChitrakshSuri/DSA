#include <iostream>
using namespace std;

int main()
{
    // Take 5 elements input in an array and print their double
    int arr[5];
    cout << "Enter the 5 elemnts of an array: ";
    for(int i = 0 ; i < 5 ; i++){
        cin >> arr[i];
    }

    for(int i = 0 ; i < 5 ; i++){
        cout << arr[i] * 2 << " ";
    }
}
