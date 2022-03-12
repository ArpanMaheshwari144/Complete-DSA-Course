#include <bits/stdc++.h>
using namespace std;

class Hero
{

private:
    int health;

public:
    char *name; // array
    char level;
    static int timeToComplete; // static member -> belongs to class

    Hero()
    {
        cout << "Simple constructor called" << endl;
        name = new char[100]; // dynamically initialize the array
    }

    // parameterisex constructor
    Hero(int health)
    {
        // this -> pointer to current object
        cout << "this " << this << endl;
        this->health = health;
    }

    // parameterisex constructor
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // copy constructor
    Hero(Hero &temp)
    {
        /* in this we use a dummy array of same length so when we change the array so the dummy array will change not the original array */
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "Name: " << this->name << ", ";
        cout << "Health: " << this->health << ", ";
        cout << "Level: " << this->level << " ";
        cout << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    static int func()
    {
        return timeToComplete;
    }

    // destructor
    ~Hero()
    {
        cout << "Destructor called" << endl;
    }
};

// intialization of static memeber
int Hero::timeToComplete = 5;

int main()
{
    // calling to static function
    cout << Hero::func() << endl;

    /*
    // calling to static member
    cout << Hero::timeToComplete << endl;
    */

    /*
    // destructor
    // static -> this will call destructor automatically
    Hero a;

    // dynamic -> in this we have to call destructor manually
    Hero *b = new Hero();
    delete b; // explicit calling destructor
    */

    /*
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[10] = "Arpan";
    hero1.setName(name);

    Hero hero2(hero1);
    hero1.name[0] = 'G';
    hero1.print();
    hero2.print();

   // assignment operator
    hero1 = hero2;

    hero1.print();
    hero2.print();
    */

    /*
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[10] = "Arpan";
    hero1.setName(name);
    hero1.print();

    // use default copy constructor which uses deep copy
    Hero hero2(hero1);
    hero1.name[0] = 'G';
    hero1.print();
    hero2.print();
    */

    /*
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[10] = "Arpan";
    hero1.setName(name);
    hero1.print();

    // use default copy constructor which uses shallow copy(pass by reference)
    Hero hero2(hero1);
    hero1.name[0] = 'G';
    hero1.print();
    hero2.print();
    */

    /*
    // copy constructor
    Hero s(70, 'C');
    s.print();

    Hero r(s);
    r.print();
    */

    /*
    Hero ramesh(10);
    // cout << "Address " << &ramesh << endl;
    // ramesh.getHealth();
    ramesh.print();

    // dynamically
    Hero *h = new Hero();
    h->print();

    Hero temp(22, 'B');
    temp.print();
    */

    /*
    // static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('A');
    cout << "Level: " << a.level << endl;
    cout << "Health: " << a.getHealth() << endl;

    // dynamically allocation
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout << "Level: " << (*b).level << endl;
    cout << "Health: " << (*b).getHealth() << endl;
    // OR
    cout << "Level: " << b->level << endl;
    cout << "Health: " << b->getHealth() << endl;
    */

    /*
    Hero ramesh;
    cout << "Size of ramesh is: " << sizeof(ramesh) << endl;

    // use setter
    ramesh.setHealth(70);
    ramesh.setLevel('A');

    cout << "Health " << ramesh.getHealth() << endl;
    cout << "Level " << ramesh.getLevel() << endl;
    */

    return 0;
}