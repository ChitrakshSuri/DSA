#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[3][3] = {{5, 6, 8}, {7, 2, 4}, {1, 6, 9}};
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(arr[i][j] == 6){
                cout << "Number found at index (" << i << ", " << j <<")" << endl;
            }
        }
    }
}