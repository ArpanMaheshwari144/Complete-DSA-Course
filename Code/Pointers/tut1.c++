#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 5;

    cout << num << endl;

    // address of Operator - &
    cout << "Address of num is: " << &num << endl;

    int *ptr = &num;
    cout << "Address is: " << ptr << endl;
    cout << "Value is: " << *ptr << endl;

    double d = 4.3;
    double *ptr2 = &d;
    cout << "Address is: " << ptr2 << endl;
    cout << "Value is: " << *ptr2 << endl;

    /*
    size of pointer is 8 in most of the cases but there is also a another output which is 4 and it depends on the what system you work on.
    Why 8 -> bcoz it stores the address
    */
    cout << "Size of integer pointer is: " << sizeof(num) << endl;
    cout << "Size of pointer is: " << sizeof(ptr) << endl;
    cout << "Size of double pointer is: " << sizeof(d) << endl;
    cout << "Size of pointer is: " << sizeof(ptr2) << endl;

    return 0;
}