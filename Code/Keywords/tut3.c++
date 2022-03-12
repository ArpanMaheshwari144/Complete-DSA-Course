// In-Line functions

#include <bits/stdc++.h>
using namespace std;

// a or b ki copy ban rahi hai jo ki memory utilise kar rahi hai
// inline int getMax(int a, int b)
// {
//     return (a > b) ? a : b;
// }

// a or b as reference variable pass ho rahe hai or unki copy nhi ban rahi hai
inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a = 1, b = 2;
    cout << getMax(a, b);

    return 0;
}