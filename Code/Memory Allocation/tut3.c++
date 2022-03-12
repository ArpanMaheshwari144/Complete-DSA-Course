// 2-D Arrays in dynamic memory allocation

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Enter number of rows: ";
    cin >> row;

    int col;
    cout << "Enter number of columns: ";
    cin >> col;

    int **arr = new int *[row];

    // creating the 2-d array
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // taking input
    cout << "Enter the array elements\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Output\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory(column) in the heap manually
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    // releasing memory(row) in the heap manually
    delete[] arr;

    return 0;
}