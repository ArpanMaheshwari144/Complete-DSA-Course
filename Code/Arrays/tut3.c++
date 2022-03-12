// Scope of array

#include <bits/stdc++.h>
using namespace std;

void update(int arr[], int n)
{
    // updating array's first element
    arr[0] = 120;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[3] = {1, 2, 3};

    cout << "Before updation: ";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nAfter updation: ";
    update(arr, 3);

    return 0;
}