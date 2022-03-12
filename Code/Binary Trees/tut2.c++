// Build tree from level-order traversal

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void buildTreeFromLevelOrder(Node *&root)
{
    int data;
    cout << "Enter data for root: " << endl;
    cin >> data;

    queue<Node *> q;
    root = new Node(data);
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        int leftData;
        cout << "Enter left node for " << temp->data << endl;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        int rightData;
        cout << "Enter right node for " << temp->data << endl;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        // ek level complete ho gya hai
        if (temp == NULL)
        {
            cout << endl;

            // if there are more elements in the queue
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    Node *root = NULL;
    buildTreeFromLevelOrder(root);

    cout << "Level order traversal: " << endl;
    levelOrderTraversal(root);

    return 0;
}