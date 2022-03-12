// Double pointers in functions

#include <bits/stdc++.h>
using namespace std;

void update(int **p2)
{
    // this will affect the value of p
    // *p2 = *p2 + 1;

    // this will affect the value of i
    **p2 = **p2 + 1;
}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "Before i: " << i << endl;
    cout << "Before p: " << p << endl;
    cout << "Before p2: " << p2 << endl;
    update(p2);
    cout << "After i: " << i << endl;
    cout << "After p: " << p << endl;
    cout << "After p2: " << p2 << endl;

    return 0;
}