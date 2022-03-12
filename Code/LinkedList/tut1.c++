// Singly Linked List

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

void insertAtHead(Node *&head, int data)
{
    // new node create
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    // new node create
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{

    // insert at Start
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at Last Position
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    // creating a node for data
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head, Node *&tail)
{

    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;

        // memory free start ndoe
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            tail = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty";
        return;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // created a new node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // insert at head
    /*
    Node *head = node1;
    print(head);
    insertAtHead(head, 12);
    print(head);
    */

    // insert at tail
    /*
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);
    */

    // insert at position
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);
    insertAtPosition(head, tail, 3, 22);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    // deleting the node
    deleteNode(4, head, tail);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteNode(3, head, tail);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    return 0;
}