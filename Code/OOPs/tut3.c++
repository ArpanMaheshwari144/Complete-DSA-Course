// Inheritance and Access Modifiers

#include <bits/stdc++.h>
using namespace std;

class Human
{

public:
    int age;
    int height;
    int weight;

    void setAge(int age)
    {
        this->age = age;
    }

    int getAge()
    {
        return age;
    }

    void setWeight(int weight)
    {
        this->weight = weight;
    }

    int getWeight()
    {
        return weight;
    }
};

class Male : public Human
{

public:
    string color;

    void setColor(string color)
    {
        this->color = color;
    }

    string getColor()
    {
        return color;
    }

    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }
};

int main()
{

    Male obj;
    obj.setAge(19);
    obj.setWeight(50);
    obj.setColor("Black");
    cout << obj.getAge() << endl;
    cout << obj.getWeight() << endl;
    cout << obj.getColor() << endl;
    obj.sleep();

    return 0;
}