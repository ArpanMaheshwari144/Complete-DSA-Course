// Encapsulation

#include <bits/stdc++.h>
using namespace std;

class Student
{

private:
    string name;
    int age;
    int height;

public:
    void setAge(int age)
    {
        this->age = age;
    }

    int getAge()
    {
        return age;
    }
};

int main()
{
    Student first;
    first.setAge(19);
    cout << first.getAge();

    return 0;
}