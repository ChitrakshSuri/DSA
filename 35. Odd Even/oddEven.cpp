#include <iostream>
#include <cmath>

using namespace std;

int functionOddEven(int num){
    if((num & 1) == 0){
        return true;
    }
    else{
        return false;
    }
    }

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int oddEven = functionOddEven(num);
    if(oddEven == 1){
        cout << "Number is Even.";
    }
    else
    cout << "Number is Odd.";

}