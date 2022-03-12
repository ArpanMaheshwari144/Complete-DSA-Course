// Multiple Inheritance

#include <bits/stdc++.h>
using namespace std;

class Animal
{

public:
    int age;
    int weight;

    void bark()
    {
        cout << "Barking " << endl;
    }
};

class Human
{
public:
    string color;

    void speak()
    {
        cout << "Speaking " << endl;
    }
};

// Multiple Inheritance
class Hybrid : public Animal, public Human
{
};

int main()
{
    Hybrid obj1;
    obj1.speak();
    obj1.bark();

    return 0;
}