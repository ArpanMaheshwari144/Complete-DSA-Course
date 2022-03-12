// Sum of the array using Recursion

#include <bits/stdc++.h>
using namespace std;

int getSum(int *arr, int size)
{
    // base case
    if (size == 0)
    {
        return 0;
    }

    if (size == 1)
    {
        return arr[0];
    }

    int remainingPart = getSum(arr + 1, size - 1);
    int ans = arr[0] + remainingPart;
    return ans;
}

int main()
{
    int arr[5] = {2, 4, 5, 7, 9};
    int size = 5;

    int ans = getSum(arr, size);
    cout << "Answer is: " << ans;

    return 0;
}