#include <iostream>
using namespace std;

int allPrime(int num){
    for(int i = 2 ; i <= num ; i++){
        for(int j = 2 ; j < num ; j++){
            if(i % j != 0){
                cout << i <<" is Prime" << endl;
            }
        }
    }
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int result = allPrime(num);
}