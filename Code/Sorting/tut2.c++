// Bubble Sort

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // 1st Way
    // for (int i = 0; i < n - 1; i++)
    // {
    //     bool isSwap = false;
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swap(arr[j], arr[j + 1]);
    //             isSwap = true;
    //         }
    //     }
    //     if (isSwap == false)
    //     {
    //         break;
    //     }
    // }

    // 2nd Way
    for (int i = 1; i < n; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (isSwap == false)
        {
            break;
        }
    }
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