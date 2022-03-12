// HeapSort

#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;      // 1 based indexing
    int right = 2 * i + 1; // 1 based indexing

    // 1 based indexing
    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }

    // 1 based indexing
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    int size = n;
    while (size > 1)
    {
        // swap
        swap(arr[size], arr[1]);
        size--;

        heapify(arr, size, 1);
    }
}

int main()
{
    int arr[] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    // heap creation
    // only heapify the nodes other then leaf nodes(n/2+1 -> n)
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    heapSort(arr, n);

    cout << "After heap sort: ";
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}