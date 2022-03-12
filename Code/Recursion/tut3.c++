// Print counting using Recursion

#include <bits/stdc++.h>
using namespace std;

// void display(int n)
// {
//     // base case
//     if (n == 0)
//     {
//         return;
//     }

//     cout << n << " ";
//     display(n - 1);
// }

void display(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    display(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    display(n);

    return 0;
}