// BAD Practice, Never do this

#include <iostream>
using namespace std;

int main() {

    // pointer to int is created, and pointing to some garbage address
    int *p;

    cout << *p << endl; 




    return 0;
}