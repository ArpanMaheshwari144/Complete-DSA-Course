#include <bits/stdc++.h>
using namespace std;

// ********* Power Function *********
int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

// ********* Even and Odd Function *********
bool isEven(int a)
{
    /* a = 5
       101
      &001
       001 -> odd
    */
    //    Odd
    if (a & 1)
    {
        return 0;
    }
    // Even
    else
    {
        return 1;
    }
}

// ********* nCr Function *********
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    return (factorial(n)) / (factorial(r) * factorial(n - r));
}

// ********* Prime Number Function *********
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    // ********* Power Function *********
    // int a, b;
    // cout << "Enter the value of a and b: ";
    // cin >> a >> b;

    // int ans = power(a, b);
    // cout << a << " to the power " << b << " is: " << ans;

    // ********* Even and Odd Function *********
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;

    // if (isEven(num))
    // {
    //     cout << "Number is Even";
    // }
    // else
    // {
    //     cout << "Number is Odd";
    // }

    // ********* nCr Function *********
    // int n, r;
    // cout << "Enter the value of n and r: ";
    // cin >> n >> r;
    // cout << "Answer is " << nCr(n, r) << endl;

    // ********* Prime Number Function *********
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
    {
        cout << num << " is a prime number" << endl;
    }
    else
    {
        cout << num << " is not a Prime number" << endl;
    }

    return 0;
}