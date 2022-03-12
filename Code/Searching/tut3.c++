//  Find Pivot(minimum and maximum) in an Sorted & Rotated Array using Binary Search

#include <bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }

    // return start or return end both will return same index
    return start;
}

int main()
{
    int arr[5] = {8, 10, 17, 1, 3};
    cout << "Pivot element is at index: " << getPivot(arr, 5);

    return 0;
}