#include<iostream>
#include<cmath>

using namespace std;

int decimalToBinary(int num){
    int binaryNum = 0;
    
    for(int i = 0 ; i < num ; i++){
        int bit = num % 2;
        binaryNum = bit * pow(10, i) + binaryNum;
        num = num / 2;
    }
    return binaryNum;
}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int binaryNum = decimalToBinary(num);
    cout << binaryNum;
    
}