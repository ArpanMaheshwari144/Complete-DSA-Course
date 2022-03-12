#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Decimal to Binary
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;

    // int ans = 1;
    // int i = 0;
    // while (n != 0)
    // {
    //     int bit = n & 1;
    //     ans += (bit * pow(10, i));
    //     n = n >> 1;
    //     i++;
    // }
    // cout << "Answer: " << ans;

    // Binary to Decimal
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int i = 0, ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << "Answer: " << ans;

    return 0;
}