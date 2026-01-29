// Array and Addresses

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {21, 65, 35, 41, 52, 67, 37, 88, 99, 90};

    cout << "Address of an array(arr): " << arr << endl;
    cout << "Address of first element (&arr[0]): " << &arr[0] << endl;

    cout << arr[0] << endl;
    cout << "*arr: " << *arr << endl;
    cout << "*arr+1: " << *arr + 1 << endl;

    cout << "*(arr+1): " << *(arr + 1) << endl;
    cout << "(*arr)+1: " << (*arr) + 1 << endl;

    cout << "arr[2]: " << arr[2] << endl;
    cout << "*(arr+2): " << *(arr + 2) << endl;

    int i = 3;
    cout << "i[arr]: " << i[arr] << endl;
    


    return 0;
}