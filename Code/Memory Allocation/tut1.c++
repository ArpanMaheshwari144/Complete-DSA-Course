// Reference variable

#include <bits/stdc++.h>
using namespace std;

/*
BAD PRACTICES -> got errors
int& func(int a) 
{
    int num = a;
    int& ans = num;
    return ans; -> local variable
}

int* fun(int n) 
{
    int* ptr = &n;
    return ptr; -> local variable
}
*/

void update1(int n)
{
    n++;
}

void update2(int &n)
{
    n++;
}

int main()
{
    /*
    int i = 5;
    int &j = i; // reference varible
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;
    */

    int n = 5;
    cout << "Before: " << n << endl;
    // update1(n);
    update2(n);
    cout << "After: " << n << endl;

    return 0;
}