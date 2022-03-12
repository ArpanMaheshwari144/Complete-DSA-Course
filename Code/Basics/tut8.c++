#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int num = 1;
    // switch (num)
    // {
    // case 1:
    //     cout << "First";
    //     break;

    // case 2:
    //     cout << "Second";
    //     break;

    // default:
    //     cout << "Default";
    // }

    // int a, b;
    // cout << "Enter the value of a: ";
    // cin >> a;

    // cout << "Enter the value of b: ";
    // cin >> b;

    // char op;
    // cout << "Enter the Operation you want to perform: ";
    // cin >> op;

    // switch (op)
    // {

    // case '+':
    //     cout << "a + b: " << (a + b) << endl;
    //     break;

    // case '-':
    //     cout << "a - b: " << (a - b) << endl;
    //     break;

    // case '*':
    //     cout << "a * b: " << (a * b) << endl;
    //     break;

    // case '/':
    //     cout << "a / b: " << (a / b) << endl;
    //     break;

    // case '%':
    //     cout << "a % b: " << (a % b) << endl;
    //     break;

    // default:
    //     cout << "Please enter a valid Operation " << endl;
    // }

    // Ques
    int amount, hundered = 0, fifty = 0, twenty = 0, one = 0;
    cout << "Enter amount: ";
    cin >> amount;

    switch (1)
    {
    case 1:
        hundered = amount / 100;
        cout << "Hundered notes required: " << hundered << endl;
        amount = amount % 100;

    case 2:
        fifty = amount / 50;
        cout << "Fifty notes required: " << fifty << endl;
        amount = amount % 50;

    case 3:
        twenty = amount / 20;
        cout << "Twenty notes required: " << twenty << endl;
        amount = amount % 20;

    case 4:
        one = amount / 1;
        cout << "One notes required: " << one << endl;
        amount = amount % 1;
    }

    return 0;
}