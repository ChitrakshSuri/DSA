#include <iostream>
using namespace std;

bool allPrime(int num){
    for(int i = 2 ; i < num ; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    for(int i = 2 ; i < num ; i++){
        bool result = allPrime(num);
        if(result){
        cout << i << " is a prime number." << endl;
        }
    }
}