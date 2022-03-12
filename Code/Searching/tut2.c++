// Binary Search -> This works only in sorting array(either increasing or decreasing)

#include <bits/stdc++.h>
using namespace std;

// TC -> O(log(n))
int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        // with this formula now for large testcases our mid value is not going to overflow
        int mid = (start + (end - start) / 2); // ==> (start + end) / 2
        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right part
        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        // go to left part
        else // key < arr[mid]
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 12);
    if (evenIndex != -1)
    {
        cout << "Index of 12 is " << evenIndex << endl;
    }
    else
    {
        cout << "Element is not present" << endl;
    }

    int oddIndex = binarySearch(odd, 5, 14);
    if (oddIndex != -1)
    {
        cout << "Index of 14 is " << oddIndex << endl;
    }
    else
    {
        cout << "Element is not present" << endl;
    }

    return 0;
}