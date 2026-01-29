#include <iostream>
using namespace std;

int main() {
    int num= 5;
    int *p =  &num;

    // Copying a Pointer 
    int *q = p;

    cout << &num;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;
    



    return 0;
}