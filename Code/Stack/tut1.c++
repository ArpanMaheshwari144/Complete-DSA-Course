#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty";
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    // implement stack using stl
    /*
    stack<int> s;
    s.push(2);
    s.push(3);

    s.pop();

    cout << "Print top element: " << s.top() << endl;

    if (s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    cout << "Size of the stack is: " << s.size();
    */

    // implement stack using class
    Stack s(5);
    s.push(2);
    s.push(3);
    s.push(5);

    s.pop();

    cout << "Print top element: " << s.peek() << endl;

    if (s.isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}