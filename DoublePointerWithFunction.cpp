// Double pointer wiht function

#include <iostream>
using namespace std;

void update(int **p2)
{
    // p2 = p2+1;        // no change

    // *p2 = *p2 + 1;      // chnage hoga

    **p2 = **p2 + 1;        // chnage hoga
}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "before i: " << i << endl;
    cout << "before p: " << p << endl;
    cout << "before p2: " << p2 << endl;
    cout << endl
         << endl;

    update(p2);

    cout << "after i: " << i << endl;
    cout << "after p: " << p << endl;
    cout << "after p2: " << p2 << endl;

    return 0;
}