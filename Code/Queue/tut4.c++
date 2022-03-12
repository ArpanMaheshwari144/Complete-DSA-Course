/* Sum of minimum and maximum elements of all subarrays of size k. -> Given an array of both positive and negative integers, the task is to compute sum of minimum and maximum elements of all sub-array of size k.

Examples:
Input : arr[] = {2, 5, -1, 7, -3, -1, -2}, K = 4
Output : 18
Explanation : Subarrays of size 4 are :
{2, 5, -1, 7},   min + max = -1 + 7 = 6
{5, -1, 7, -3},  min + max = -3 + 7 = 4
{-1, 7, -3, -1}, min + max = -3 + 7 = 4
{7, -3, -1, -2}, min + max = -3 + 7 = 4
Sum of all min & max = 6 + 4 + 4 + 4 = 18
*/

#include <bits/stdc++.h>
using namespace std;

int solve(int *arr, int n, int k)
{
    deque<int> maxi(k), mini(k);

    // addition of first k size window
    for (int i = 0; i < k; i++)
    {
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }

        while (!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
    }

    // first k size window ke liye answer nikal liya
    int ans = 0;
    ans += arr[maxi.front()] + arr[mini.front()];

    // remaining windows ko process karo
    for (int i = k; i < n; i++)
    {

        // next window mei chalte hai or phle removal karte hai
        while (!maxi.empty() && i - maxi.front() >= k)
        {
            maxi.pop_back();
        }

        // next window mei chalte hai or phle removal karte hai
        while (!mini.empty() && i - mini.front() >= k)
        {
            mini.pop_back();
        }

        // addition logic
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }

        while (!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);

        ans += arr[maxi.front()] + arr[mini.front()];
    }
    return ans;
}

int main()
{
    int arr[] = {2, 5, -1, 7, -3, -1, -2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    cout << solve(arr, n, k);

    return 0;
}