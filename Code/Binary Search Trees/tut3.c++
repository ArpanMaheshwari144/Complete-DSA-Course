// Min/Max value in BST

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

Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }

    if (data < root->data)
    {
        root->left = insertIntoBST(root->left, data);
    }
    else
    {
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int minValue(Node *root)
{
    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->data;
}

int maxValue(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}

int main()
{
    struct Node *root = NULL;

    cout << "Enter the elements: ";
    takeInput(root);

    cout << "Min value is: " << minValue(root);
    cout << "\nMax value is: " << maxValue(root);

    return 0;
}