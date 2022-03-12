// Power of 2 using Recursion

#include <bits/stdc++.h>
using namespace std;

int power(int n)
{
    // base case
    if (n == 0)
        return 1;

    // recursive relation
    return 2 * power(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << 2 << " to the power " << n << " is: " << power(n);

    return 0;
}