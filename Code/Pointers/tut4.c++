// Pointers in character arrays

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde"; // 6 bcoz of '\0' character
    cout << arr << endl;
    cout << ch << endl; // prints entire string

    // cout function is differently implemented in the character arrays
    char *c = &ch[0];
    cout << c << endl; // prints entire string

    char temp = 'z';
    char *p = &temp;
    cout << p << endl;

    // this will risky
    // char *str = "abcde";

    return 0;
}