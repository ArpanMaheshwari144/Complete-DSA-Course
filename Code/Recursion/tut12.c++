// Bubble Sort using Recursion

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // base case - already sorted
    if (n == 0 || n == 1)
    {
        return;
    }

    // ek case solve karlia - largest element ko end me rakh dega
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    bubbleSort(arr, n - 1);
}

int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    bubbleSort(arr, n);

    cout << "\nAfter sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}