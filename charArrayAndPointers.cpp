// Char Array And Pointers

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {24, 54, 83, 92, 57};
    char ch[6] = "abcde";   // char array always end with null character

    cout << "arr: " << arr << endl;
    cout << "ch: " << ch << endl;

    char *c = &ch[0];
    // print entire string
    cout << "c: " << c << endl;


    char temp = 'z';
    char *p = &temp;
    cout << "p: " << p << endl;

    return 0;
}