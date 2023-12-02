#include <iostream>
using namespace std;

bool checkPrime(int num){
    int i = 2;
    for(i = 2 ; i < num ; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    for(int i = 2 ; i <= num ; i++){
        bool isPrime = checkPrime(i);
        if(isPrime){
            cout << i << " is a prime number." << endl;
        }
    }
}