// Heap using stl(priority queue)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Max-Heap
    /*
    priority_queue<int> pq;
    pq.push(54);
    pq.push(55);
    pq.push(52);
    pq.push(50);

    cout << "Element at the top: " << pq.top() << endl;
    pq.pop();
    cout << "Element at the top: " << pq.top() << endl;
    pq.pop();
    cout << "Element at the top: " << pq.top() << endl;
    pq.pop();

    cout << "Size is: " << pq.size() << endl;

    if (pq.empty())
    {
        cout << "Heap is empty";
    }
    else
    {
        cout << "Heap is not empty";
    }
    */

    // Min-Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(54);
    pq.push(55);
    pq.push(52);
    pq.push(50);

    cout << "Element at the top: " << pq.top() << endl;
    pq.pop();
    cout << "Element at the top: " << pq.top() << endl;
    pq.pop();
    cout << "Element at the top: " << pq.top() << endl;
    pq.pop();

    cout << "Size is: " << pq.size() << endl;

    if (pq.empty())
    {
        cout << "Heap is empty";
    }
    else
    {
        cout << "Heap is not empty";
    }

    return 0;
}