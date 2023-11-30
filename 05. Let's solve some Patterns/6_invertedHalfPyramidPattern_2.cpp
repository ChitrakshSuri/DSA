#include <iostream>
using namespace std;
int main()

{
    int rowCount;
    cout << "Enter the number of rows: ";
    cin >> rowCount;

    for(int row = 1 ; row <= rowCount ; row++){
        for(int col = rowCount - row ; col >= 1 ; col--){
            cout << "* ";
        }
        cout << endl;
    }
}