// Insertion in BST

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

struct Node *createTree(struct Node *root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }

    if (data < root->data)
    {
        root->left = createTree(root->left, data);
    }
    else
    {
        root->right = createTree(root->right, data);
    }
    return root;
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
    struct Node *root = NULL;
    int n;
    cout << "Enter how many elements you want to enter in the binary search tree: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int elementToBeInserted;
        cout << "Enter the element: ";
        cin >> elementToBeInserted;
        root = createTree(root, elementToBeInserted);
    }

    cout << "Level Order of BST is\n";
    levelOrderTraversal(root);

    return 0;
}