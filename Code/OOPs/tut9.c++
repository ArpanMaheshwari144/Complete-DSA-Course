// Inheritance Ambiguity

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "I am A" << endl;
    }
};

class B
{
public:
    void func()
    {
        cout << "I am B" << endl;
    }
};

class C : public A, public B
{
};

int main()
{

    C obj;
    obj.A::func(); // Scope resolution operator this will call A class function
    obj.B::func(); // Scope resolution operator this will call B class function

    return 0;
}