// Arrays

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the array: ";
    // print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // declare
    int number[15];

    // accessing an array
    cout << "Value at 0 index " << number[0] << endl;

    // initialising an array
    int second[3] = {5, 7, 11};

    // accesing an element
    cout << "Value at 2 index " << second[2] << endl;

    int third[15] = {2, 7};
    int n = 15;
    printArray(third, n);
    int thirdSize = sizeof(third) / sizeof(int);
    cout << "Size of third array is " << thirdSize << endl;

    // initialising all locations with 0
    int fourth[10] = {0};
    n = 10;
    printArray(fourth, 10);

    // initialising all locations with 1 [not possible with below line]
    int fifth[10] = {1};
    n = 10;
    printArray(fifth, 10);
    int fifthSize = sizeof(fifth) / sizeof(int);
    cout << "Size of fifth array is " << fifthSize << endl;

    char ch[5] = {'a', 'b', 'c', 'r', 'p'};
    cout << ch[3] << endl;
    cout << "Printing the array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }

    return 0;
}