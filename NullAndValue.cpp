// Null Pointer and Value Access

#include <iostream>
using namespace std;

int main() {
    int i=5;

    int *p = &i;
    cout << p << endl;
    cout << *p << endl;

    int *q = 0;
    q = &i;
    cout << q << endl;
    cout << *p << endl;


    return 0;
}