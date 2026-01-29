#include <iostream>
using namespace std;

int main()
{
    // Pointer Arithmetic
    int i = 5;
    int *p = &i;

    cout << "before (*p)++ " << (*p)++ << endl;
    cout << "after (*p)++ " << (*p)++  << endl;



    cout << "before p " << p << endl;
    p = p + 1;
    cout << "after p " << p << endl;

    return 0;
}