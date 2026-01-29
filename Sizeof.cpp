#include <iostream>
using namespace std;

int main() {
    /*
    // Sizeof
    int arr[10] = {21, 65, 35, 41, 52, 67, 37, 88, 99, 90};

    int *p = &arr[0];
    cout << "Size of an array: " << sizeof(arr) << endl;
    cout << "*arr: " << sizeof(*arr) << endl;
    cout << "&arr: " << sizeof(&arr) << endl;

    cout << "Size of the first index element: " << sizeof(*p) << endl;
    cout << "Size of the pointer: " << sizeof(p) << endl;
    cout << "&p: " << sizeof(&p) << endl;
    */


    int arr[20] = {24, 65, 39, 82};

    cout << "&arr[0]: " <<  &arr[0]<< endl;
    cout << "&arr: " << &arr << endl;
    cout << "arr: " << arr << endl;

    int *p = &arr[0];
    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;
    cout << "&p: " << &p << endl;

    return 0;
}