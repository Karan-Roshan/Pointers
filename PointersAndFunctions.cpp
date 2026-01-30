// Pointers And Functions

#include <iostream>
using namespace std;

void print(int *p)
{
    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;
}

void update(int *p)
{

    /*
    // address of p
    p = p+1;
    cout << "Inside: " << p << endl;
    */

    // values of *p
    *p = *p + 1;
}

int main()
{
    int value = 5;
    int *p = &value;

    // print(p);

    /*
    // address of p
    cout << "Before update - p: " << p << endl;
    update(p);
    cout << "After update - p: " << p << endl;
    */

    // values of *p
    cout << "Before update - *p: " << *p << endl;
    update(p);
    cout << "After update - *p: " << *p << endl;

    return 0;
}