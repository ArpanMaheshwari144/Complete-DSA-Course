// Polymorphism

#include <bits/stdc++.h>
using namespace std;

class A
{

public:
    void sayHello()
    {
        cout << "Hello Arpan" << endl;
    }

    void sayHello(string name)
    {
        cout << "Hello " << name << endl;
    }
};

class B
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl;
    }
};

class Animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{

public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    // A obj;
    // obj.sayHello();
    // obj.sayHello("Adrash");

    /*
    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2; // this will call operator+() function
    */

    Dog obj;
    obj.speak();

    return 0;
}