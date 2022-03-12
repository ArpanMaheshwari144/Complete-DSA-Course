#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Bitwise Operators
    // int a = 4;
    // int b = 6;

    // cout << "a & b: " << (a & b) << endl;
    // cout << "a | b: " << (a | b) << endl;

    // // not operator -> invert the number -> take 1's compliment -> take 2's compliment
    // cout << "~a: " << ~a << endl;
    // cout << "~b: " << ~b << endl;

    // cout << "a ^ b: " << (a ^ b) << endl;

    // Left & Right Shift Operators
    // // Right Shift Operator
    // cout << (17 >> 1) << endl; // 17 >> 1 -> 17 / 2
    // cout << (17 >> 2) << endl;

    // // Left Shift Operator
    // cout << (19 << 1) << endl; // 19 << 1 -> 19 * 2
    // cout << (19 << 2) << endl;

    // Pre or Post Increment and Decrement
    // int i = 7;
    // cout << (++i) << endl; // Output -> 8, i = 8
    // cout << (i++) << endl; // Output -> 8, i = 9
    // cout << (i--) << endl; // Output -> 9, i = 8
    // cout << (--i) << endl; // Output -> 7, i = 7

    // for-loop
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << i << " ";
    // }

    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // int i = 0;
    // for (; i <= n; i++)
    // {
    //     cout << i << " ";
    // }

    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // int i = 0;
    // for (; i <= n;)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    // Break Keyword
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // int i = 0;
    // for (;;)
    // {
    //     if (i <= n)
    //     {
    //         cout << i << " ";
    //     }
    //     else
    //     {
    //         break;
    //     }
    //     i++;
    // }

    // for (int a = 0, b = 1; a >= 0 && b >= 1; a--, b--)
    // {
    //     cout << a << " " << b;
    // }

    // for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--)
    // {
    //     cout << a << " " << b << " " << c;
    // }

    // Sum from 1 to n
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout << sum;

    // Fibonacci Series
    // int n;
    // cout << "Enter trhe value of n: ";
    // cin >> n;
    // int a = 0;
    // int b = 1;
    // cout << a << " " << b << " ";
    // for (int i = 1; i <= n - 2; i++)
    // {
    //     int c = a + b;
    //     cout << c << " ";

    //     a = b;
    //     b = c;
    // }

    // Prime Number
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // bool isPrime = true;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if (isPrime == false)
    // {
    //     cout << "Number is not prime";
    // }
    // else
    // {
    //     cout << "Number is prime";
    // }

    // Continue Keyword
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Hii" << endl;
    //     continue;

    //     cout << "Hello" << endl;
    // }

    // Scope of Variables
    // int a = 1;
    // cout << a << endl;
    // if (true)
    // {
    //     cout << a << endl;
    // }

    // int a = 1;
    // cout << a << endl;
    // if (true)
    // {
    //     int a = 2;
    //     cout << a << endl;
    // }

    int a = 1;
    cout << a << endl;
    if (true)
    {
        int a = 2;
        cout << a << endl;
    }
    cout << a << endl;

    return 0;
}

/*
In this We done 2 LeetCode Problems:
1. https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
2. https://leetcode.com/problems/number-of-1-bits/
*/