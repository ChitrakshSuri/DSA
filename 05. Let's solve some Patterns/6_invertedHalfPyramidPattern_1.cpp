#include <iostream>
using namespace std;
int main()

{
    int rowCount;
    cout << "Enter the number of rows: ";
    cin >> rowCount;

    for(int row = rowCount ; row >= 1 ; row--){
        for(int col = 1 ; col <= row ; col++ ){
            cout << "* ";
        }
        cout << endl;
    }
}