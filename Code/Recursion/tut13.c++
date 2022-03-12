// Merge Sort using Recursion

#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int end)
{
    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy the values
    int mainArrayIndex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted arrays
    int index1 = 0, index2 = 0;
    mainArrayIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int arr[], int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    // left part sort karna hai
    mergeSort(arr, start, mid);

    // right part sort karna hai
    mergeSort(arr, mid + 1, end);

    // merge
    merge(arr, start, end);
}

int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 11, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    mergeSort(arr, 0, n - 1);

    cout << "\nAfter sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}