// Find Square Root of an Integer[integer part and floating part] using Binary Search

#include <bits/stdc++.h>
using namespace std;

long long int sqrtIntger(int n)
{
    int start = 0;
    int end = n;

    long long int ans = -1;
    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

double sqrtFloat(int n, int precision, int tempSolution)
{
    double factor = 1;
    double ans = tempSolution;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int tempSolution = sqrtIntger(n);
    cout << n << " square root is: " << sqrtFloat(n, 3, tempSolution);

    return 0;
}