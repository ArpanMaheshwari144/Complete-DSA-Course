// Queue in stl

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // creating a queue
    queue<int> q;
    q.push(10);
    q.push(11);
    q.push(12);

    cout << "Front of queue: " << q.front() << endl;
    cout << "Size of the queue: " << q.size() << endl;

    q.pop();
    q.pop();

    cout << "Size of the queue: " << q.size() << endl;

    if (q.empty())
    {
        cout << "Queue is empty";
    }
    else
    {
        cout << "Queue is not empty";
    }

    return 0;
}