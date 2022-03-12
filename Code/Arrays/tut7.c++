// Merge two sorted arrays and after merging them place them into the new array

#include <bits/stdc++.h>
using namespace std;

void mergerSortedArray(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    // copy first array remaining elements
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    // copy second array remaining elements
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}

void printArray(int arr3[], int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << arr3[i] << " ";
    }
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[4] = {2, 4, 6, 8};
    int arr3[9] = {0};

    mergerSortedArray(arr1, 5, arr2, 4, arr3);

    cout << "After merge: ";
    printArray(arr3, 9);

    return 0;
}