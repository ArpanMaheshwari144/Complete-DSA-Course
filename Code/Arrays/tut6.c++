// Sort 0 and 1

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void sort0And1(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        if (arr[left] == 0 && left < right)
        {
            left++;
        }
        if (arr[right] == 1 && left < right)
        {
            right--;
        }

        // arr[left]==1 and arr[right]==0
        if (arr[left] == 1 && arr[right] == 0 && left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int arr[14] = {1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    sort0And1(arr, 14);
    printArray(arr, 14);

    return 0;
}