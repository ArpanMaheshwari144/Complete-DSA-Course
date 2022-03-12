// Quick Sort using Recursion

#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // place pivot at right position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // left and right part handling
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        // agar above case mei koi bhi true nhi hai to swap kardo
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
    // base case - already sorted
    if (start >= end)
    {
        return;
    }

    // parition
    int pivot = partition(arr, start, end);

    // go tle left part
    quickSort(arr, start, pivot - 1);

    // go to right part
    quickSort(arr, pivot + 1, end);
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

    quickSort(arr, 0, n - 1);

    cout << "\nAfter sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}