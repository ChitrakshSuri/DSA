#include <iostream>
#include <cmath>

using namespace std;

bool checkPrime(int num)
{
    for(int i = 2 ; i < num ; i++){
        if(num == 1)
            return;
        else if(num % i == 0){
            return false;
        }
        // return true;
    }
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    bool isPrime = checkPrime(num);
    if (isPrime)
    {
        cout << "Prime Number.";
    }
    else
        cout << "Composite Number.";
}