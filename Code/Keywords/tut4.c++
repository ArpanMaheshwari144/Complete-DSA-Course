// Default arguments

#include <bits/stdc++.h>
using namespace std;

// default argument ki intitialisation hamesha right-most element se start hogi
void print(int arr[], int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 4, 7, 8, 9};
    int size = 5;

    // yaha par start as default argument treat ho jayega
    print(arr, size);

    // yaha par start as default argument treat nhi hoga
    // print(arr, size, 1);

    return 0;
}