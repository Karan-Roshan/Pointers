#include <iostream>
using namespace std;

int main() {
    int num = 5;
    cout << "Num = " << num << endl;

    // address of operator - &
    cout << "Address of the operator = " << &num << endl;

    int *ptr = &num;

    cout << "Value is: " << *ptr << endl;
    cout << "Address is: " << *ptr << endl;

    cout << "Size of integer is : " << sizeof(num) << endl;
    cout << "Size of pointer is : " << sizeof(ptr) << endl;
}