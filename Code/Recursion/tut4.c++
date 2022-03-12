// Reaching Home using Recursion

#include <bits/stdc++.h>
using namespace std;

void reachHome(int src, int dest)
{
    cout << "Source: " << src << " "
         << " Destination: " << dest << endl;

    // base case
    if (src == dest)
    {
        cout << "Reach destination" << endl;
        return;
    }

    // processing - ek step aage badhjao
    src++;

    // recursive call
    reachHome(src, dest);
}

int main()
{
    int src = 1;
    int dest = 10;

    reachHome(src, dest);

    return 0;
}