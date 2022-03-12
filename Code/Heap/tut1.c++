// Heap implementation -> insert in heap, delete in heap, heapify algorithm

#include <bits/stdc++.h>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    // inserting the values according to max-heap
    void insertInHeap(int value)
    {
        size = size + 1;
        int index = size;
        arr[index] = value;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    // deleting the value in the heap(by default we delete the root node value)
    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "Heap is empty";
            return;
        }

        // put last element into first index;
        arr[1] = arr[size];

        // remove last element
        size--;

        // take root node to it's correct position
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;      // 1 based indexing
    int right = 2 * i + 1; // 1 based indexing

    // 1 based indexing
    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }

    // 1 based indexing
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

int main()
{
    /*
    heap h;
    h.insertInHeap(50);
    h.insertInHeap(55);
    h.insertInHeap(53);
    h.insertInHeap(52);
    h.insertInHeap(54);
    // h.print();

    cout << "Before deletion: ";
    h.print();
    h.deleteFromHeap();
    cout << "After deletion: ";
    h.print();
    */

    int arr[] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    // heap creation
    // only heapify the nodes other then leaf nodes(n/2+1 -> n)
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    cout << "Max-heap is: ";
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}