// Detect Loop in Linked List

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

bool detectLoop(struct Node *head)
{
    if (head == NULL)
    {
        return false;
    }

    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        // cycle is present
        if (visited[temp] == true)
        {
            cout << "Present at element: " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

// Floyd's Cycle Detection Algo
bool floydCycleDetection1(struct Node *head)
{
    if (head == NULL)
    {
        return false;
    }

    struct Node *slow = head;
    struct Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            cout << "Present at element: " << slow->data << endl;
            return true;
        }
    }
    return false;
}

// Floyd's Cycle Detection Algo
Node *floydCycleDetection2(struct Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    struct Node *slow = head;
    struct Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}

Node *getStartingNodeOfCycle(struct Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    struct Node *pointOfIntersection = floydCycleDetection2(head);
    struct Node *slow = head;
    while (slow != pointOfIntersection)
    {
        slow = slow->next;
        pointOfIntersection = pointOfIntersection->next;
    }
    return slow;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(12);
    head->next->next = new Node(15);
    head->next->next->next = new Node(22);
    head->next->next->next->next = head->next;

    // if (detectLoop(head))
    // {
    //     cout << "Loop detected";
    // }
    // else
    // {
    //     cout << "Loop is not detected";
    // }

    // if (floydCycleDetection1(head))
    // {
    //     cout << "Loop detected";
    // }
    // else
    // {
    //     cout << "Loop is not detected";
    // }

    Node *ans = getStartingNodeOfCycle(head);
    cout << "Starting Node of loop is: " << ans->data;

    return 0;
}