// Circular Linked List

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;

        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertNode(Node *&head, int element, int data)
{
    // empty list
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty list
        // assuming that the element is present in the list
        Node *curr = head;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found -> curr is representing that node
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node *&head, int value)
{
    // empty list
    if (head == NULL)
    {
        cout << "List is empty, please check again" << endl;
        return;
    }
    else
    {
        // non-empty
        // assuming that "value" is present in the Linked List
        Node *prev = head;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // one node is present in Linked List
        if (curr == prev)
        {
            head = NULL;
        }

        // >= 2 node present in the linked list
        else if (head == curr)
        {
            head = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *head)
{
    Node *temp = head;

    // empty list
    if (temp == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

bool isCircular(Node *head)
{
    // empty list
    if (head == NULL)
    {
        return true;
    }

    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == head)
    {
        return true;
    }
    return false;
}

int main()
{
    Node *head = NULL;
    insertNode(head, 5, 3);
    print(head);
    insertNode(head, 3, 5);
    print(head);
    insertNode(head, 5, 7);
    print(head);
    insertNode(head, 7, 9);
    print(head);
    insertNode(head, 5, 6);
    print(head);
    insertNode(head, 9, 10);
    print(head);
    insertNode(head, 3, 4);
    print(head);

    // delete the node
    deleteNode(head, 3);
    print(head);

    // bool ans = isCircular(head);
    // if (ans)
    // {
    //     cout << "Circular Linked List";
    // }
    // else
    // {
    //     cout << "Not a Circular Linked List";
    // }

    return 0;
}