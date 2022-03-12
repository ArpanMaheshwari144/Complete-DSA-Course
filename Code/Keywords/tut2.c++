// Global Variables

#include <bits/stdc++.h>
using namespace std;

// global variable -> it can be modified and reflects in the other functions as well
int score = 15;

void func1()
{
    score++;
    cout << score << " in a" << endl;
}

void func2()
{
    cout << score << " in b" << endl;
}

int main()
{
    cout << score << " in main" << endl;
    func1();
    func2();

    return 0;
}
