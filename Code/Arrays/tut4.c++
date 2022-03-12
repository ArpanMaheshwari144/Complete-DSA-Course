// Reverse the array

#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {1, 4, 0, 5, -2, 15};
    reverse(arr, 6);
    printArray(arr, 6);

    return 0;
}