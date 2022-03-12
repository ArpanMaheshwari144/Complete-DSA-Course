/* Convert BST to Min Heap -> Given a binary search tree which is also a complete binary tree. The problem is to convert the given BST into a Min Heap with the condition that all the values in the left subtree of a node should be less than all the values in the right subtree of the node. This condition is applied on all the nodes in the so converted Min Heap.

Examples:
Input :          4
               /  \
              2    6
            /  \  / \
           1   3 5   7

Output :        1
              /  \
             2    5
           /  \  / \
          3   4 6  7

The given BST has been transformed into a Min Heap. All the nodes in the Min Heap satisfies the given
condition, that is, values in the left subtree of a node should be less than the values in the right
subtree of the node.
*/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void inOrder(struct Node *root, vector<int> &arr)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left, arr);
    arr.push_back(root->data);
    inOrder(root->right, arr);
}

// fill inorder as preorder in the tree
void BSTToMinHeap(struct Node *root, vector<int> &arr, int index)
{
    if (root == NULL)
    {
        return;
    }

    root->data = arr[index++];
    BSTToMinHeap(root->left, arr, index);
    BSTToMinHeap(root->right, arr, index);
}

int main()
{
    struct Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    vector<int> arr;
    inOrder(root, arr);
    BSTToMinHeap(root, arr, 0);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}