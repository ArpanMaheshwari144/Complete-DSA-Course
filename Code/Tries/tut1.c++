// Implementation of Trie -> TC -> O(length of word)

#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        // assumption words will be in capital letters
        int index = word[0] - 'A';
        TrieNode *child;

        // if the node is present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // if the node is not present
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // recursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        // assumption words will be in capital letters
        int index = word[0] - 'A';
        TrieNode *child;

        // if the node is present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }

        // recursion
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }

    // returns true if root has no children, else false
    bool isEmpty(TrieNode *root)
    {
        for (int i = 0; i < 26; i++)
        {
            if (root->children[i])
            {
                return false;
            }
        }
        return true;
    }

    TrieNode *removeUtil(TrieNode *root, string key, int depth = 0)
    {
        // if tree is empty
        if (!root)
        {
            return NULL;
        }

        // if last character of key is being processed
        if (depth == key.size())
        {
            // this node is no more end of word after removal of given key
            if (root->isTerminal)
            {
                root->isTerminal = false;
            }

            // if given is not prefix of any other word
            if (isEmpty(root))
            {
                delete (root);
                root = NULL;
            }
            return root;
        }

        // if not last character, recur for the child obtained using ASCII value
        int index = key[depth] - 'A';
        root->children[index] = removeUtil(root->children[index], key, depth + 1);

        // If root does not have any child (its only child got deleted), and it is not end of another word.
        if (isEmpty(root) && root->isTerminal == false)
        {
            delete (root);
            root = NULL;
        }
        return root;
    }

    TrieNode *removeWord(string word)
    {
        return removeUtil(root, word);
    }
};

int main()
{
    Trie *t = new Trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");
    cout << "Present or not: " << t->searchWord("ARM") << endl;
    cout << "Present or not: " << t->searchWord("DO") << endl;
    cout << "Present or not: " << t->searchWord("TIME") << endl;

    t->removeWord("ARM");
    cout << "Present or not: " << t->searchWord("ARM") << endl;

    return 0;
}