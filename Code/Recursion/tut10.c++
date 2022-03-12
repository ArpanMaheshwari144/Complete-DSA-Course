// Check if a string is palindrome or not using Recursion

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int i, int j, string str)
{
    if (i > j)
    {
        return true;
    }

    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return checkPalindrome(i + 1, j - 1, str);
    }
}

int main()
{
    string str = "mamm";

    bool ans = checkPalindrome(0, str.length() - 1, str);
    if (ans)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}