// Deletion in BST

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

Node *deleteFromBST(Node *root, int value)
{
    if (root == NULL)
    {
        return root;
    }

    if (root->data == value)
    {
        // if root has 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // if root has 1 child in that case we have 2 case:
        // for left child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // for right child
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // if root has 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minValue(root->right);
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }
    else if (root->data > value)
    {
        root->left = deleteFromBST(root->left, value);
        return root;
    }
    else
    {
        root->right = deleteFromBST(root->right, value);
        return root;
    }
    return NULL;
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

    cout << "Enter the elements: ";
    takeInput(root);

    cout << "Before deletion the level order of BST is\n";
    levelOrderTraversal(root);

    root = deleteFromBST(root, 50);

    cout << "After deletion the level order of BST is\n";
    levelOrderTraversal(root);

    return 0;
}