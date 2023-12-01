#include <iostream>
using namespace std;

float areaOfCircle(float radius)
{
    float area = 3.14 * radius * radius;
    return area;
}

int main()
{
    float radius;
    cout << "Enter the radius of circle: ";
    cin >> radius;
    // float result = areaOfCircle(radius);
    cout << "The area of circle is: " << areaOfCircle(radius) << " cm square.";
    return 0;
}