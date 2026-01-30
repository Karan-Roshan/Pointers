// Array And Function

// Pointers And Functions

#include <iostream>
using namespace std;

int arrSum(int arr[], int n)        // Here array isn't create. It create the pointer and pass the first block element address
{
    int sum = 0;

    cout << endl << "Size of an array: " << sizeof(arr) << endl;  // so the size of the array gives the size of the pointer which is 8
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Sum of an arr: " << arrSum(arr, 5) << endl;

    return 0;
}