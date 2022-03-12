// Calculating power using Recursion

#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    if (b == 1)
    {
        return a;
    }

    int ans = power(a, b / 2);

    if (b % 2 == 0)
    {
        // if b is even
        return (ans * ans);
    }
    else
    {
        // if b is odd
        return a * (ans * ans);
    }
}

int main()
{
    int a, b;
    cout << "Enter Base: ";
    cin >> a;
    cout << "Enter Power: ";
    cin >> b;

    int ans = power(a, b);
    cout << a << " to the power " << b << " is: " << ans;

    return 0;
}