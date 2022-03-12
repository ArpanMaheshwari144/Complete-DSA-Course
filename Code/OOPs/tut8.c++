// Hybrid Inheritance

#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};

class Fare
{
public:
    Fare()
    {
        cout << "Fare of Vehicle\n";
    }
};

// Single Inheritance
class Car : public Vehicle
{
};

// Multiple Inheritance
class Bus : public Vehicle, public Fare
{
};

int main()
{

    Bus obj;

    return 0;
}