// Factorial using Recursion

#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 0)
        return 1;

    // recursive relation
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << n << " factorial is: " << factorial(n);

    return 0;
}