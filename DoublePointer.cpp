// Double pointer

#include <iostream>
using namespace std;

int main() {

    int n=5;
    int* p = &n;
    int** p2 = &p;

    cout << "p: " << p << endl;
    cout << "&p: " << &p << endl;
    cout << endl;

    cout << "p2: " << p2 << endl;
    cout << "*p2: " << *p2 << endl;
    cout << endl;

    cout << "n: " << n << endl;
    cout << "*p: " << *p << endl;
    cout << "**p2: " << **p2 << endl;
    cout << endl;

    cout << "&n: " << &n << endl;
    cout << "p: " << p << endl;
    cout << "*p2: " << *p2 << endl;
    cout << endl;

    cout << "&p: " << &p << endl; 
    cout << "p2: " << p2 << endl; 



    return 0;
}