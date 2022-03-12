// Insertion Sort

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                // ruk jao
                break;
            }
            j--;
        }

        // copy temp value
        arr[j + 1] = temp;
        i++;
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

    insertionSort(arr, n);

    cout << "\nAfter sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}