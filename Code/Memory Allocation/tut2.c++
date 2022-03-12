// Arrays in dynamic memory allocation

#include <bits/stdc++.h>
using namespace std;

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // this will store in the stack space -> static memory allocation(automatic release memory)
    // int arr[n]; // bad practice bcoz we decide the size of the array at run-time

    // if we use heap memory, we have to use 'new' keyword
    // this will store in the heap space -> dynamic memory allocation(manually releasing the memory)
    int *arr = new int[n]; // in this we decide the size of the array at compile-time

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = getSum(arr, n);
    cout << "Answer is: " << ans << endl;

    return 0;
}

/*
int *arr -> stores in the stack, size -> 4 or 8 depends on machine
new int[n] -> stores in the heap, size -> 4
*/