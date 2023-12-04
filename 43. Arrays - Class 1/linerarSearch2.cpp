#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int key = 15;
    bool flag = 0;
    // if found = 1
    // if not found = 0

    // Linear Search
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << "Found";
    else
        cout << "Not Found";
}