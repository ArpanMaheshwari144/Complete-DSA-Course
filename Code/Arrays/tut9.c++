// 2-D arrays

#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

// to print col wise sum
void printColSum(int arr[][3], int row, int col)
{
    cout << "Printing Sum: ";
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

// to print row wise sum
void printRowSum(int arr[][3], int row, int col)
{
    cout << "Printing Sum: ";
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
}

void largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    cout << "Max row is at index " << rowIndex << endl;
}

void largestColSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int colIndex = -1;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            colIndex = col;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    cout << "Max col is at index " << colIndex << endl;
}

int main()
{
    int arr[3][3];
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,14,16};
    //int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

    // taking input -> row wise input
    cout << "Enter the elements: " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    // taking input -> col wise input
    // cout << "Enter the elements: " << endl;
    // for (int col = 0; col < 4; col++)
    // {
    //     for (int row = 0; row < 3; row++)
    //     {
    //         cin >> arr[row][col];
    //     }
    // }

    // print
    // cout << "Printing the array: " << endl;
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 3; col++)
    //     {
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }

    // int target;
    // cout << "Enter the element to search: ";
    // cin >> target;
    // if (isPresent(arr, target, 3, 3))
    // {
    //     cout << "Element found";
    // }
    // else
    // {
    //     cout << "Not Found";
    // }

    // printColSum(arr, 3, 3);
    // printRowSum(arr, 3, 3);

    // largestRowSum(arr, 3, 3);
    largestColSum(arr, 3, 3);

    return 0;
}