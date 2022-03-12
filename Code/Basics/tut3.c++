#include <bits/stdc++.h>
using namespace std;

int main()
{
    // if-else
    // int a;
    // cin >> a;
    // if (a > 0)
    // {
    //     cout << "Positive" << endl;
    // }
    // else
    // {
    //     cout << "Negative" << endl;
    // }

    // int a, b;
    // cout << "Enter the value of a: ";
    // cin >> a;
    // cout << "Enter the value of b: ";
    // cin >> b;
    // if (a > b)
    // {
    //     cout << "a is greater";
    // }
    // else
    // {
    //     cout << "b is greater";
    // }

    // int a;
    // cout << "Enter the value of a: ";
    // cin >> a;
    // if (a > 0)
    // {
    //     cout << "a is positive";
    // }
    // else
    // {
    //     if (a < 0)
    //     {
    //         cout << "a is negative";
    //     }
    //     else
    //     {
    //         cout << "a is zero";
    //     }
    // }

    // if-else-if
    // int a;
    // cout << "Enter the value of a: ";
    // cin >> a;
    // if (a > 0)
    // {
    //     cout << "a is positive";
    // }
    // else if (a < 0)
    // {
    //     cout << "a is negative";
    // }
    // else
    // {
    //     cout << "a is zero";
    // }

    // while-loop
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // int sum = 0;
    // int i = 1;
    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i++;
    // }
    // cout << sum;

    // Check whether the number is prime or not
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // int i = 2;
    // while (i < n)
    // {
    //     // divide ho gya, not prime
    //     if (n % i == 0)
    //     {
    //         cout << "Not prime for " << i << endl;
    //     }
    //     else
    //     {
    //         cout << "Prime for " << i << endl;
    //     }
    //     i++;
    // }

    // Patterns
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}