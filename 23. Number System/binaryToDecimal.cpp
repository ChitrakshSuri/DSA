#include<iostream>
#include<cmath>

using namespace std;

int binaryToDecimal(int num){
    int decimalNum = 0;
    int i = 0;
    while(num){
        int bit = num % 10;
        decimalNum = bit * pow(2, i++) + decimalNum;
        num = num / 10;
    }
    return decimalNum;
}

int main(){
    int num;
    cout << "Enter the binary number: ";
    cin >> num;
    int decimal = binaryToDecimal(num);
    cout << decimal;
}