#include <iostream>
using namespace std;
int main()
{
    // Left Shift
    int a = 12;
    a = a << 2; // Doubles the number two times
    cout << a << endl;

    int b = -12;
    b = b << 2; // Doubles the number two times
    cout << b << endl;

    // int c = 12;
    // c = c << -1; // Not Possible
    // cout << c << endl;

    // Right Shift
    int d = 12;
    d = d >> 1; // Halves the number
    cout << d << endl;

    int e = -12;
    e = e >> 1; // Halves the number
    cout << e << endl;

    int f = 23;
    f = f >> 1; // Halves the number to the approximate lower number 11.5 to 11
    cout << f << endl;

    int g = -23;
    g = g >> 1; // Halves the number to the approximate lower number -11.5 to -12
    cout << g << endl;
}