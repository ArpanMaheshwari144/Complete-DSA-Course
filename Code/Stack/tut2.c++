// Reverse a string using stack

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Arpan";
    int n = str.length();

    stack<char> st;

    for (int i = 0; i < n; i++)
    {
        char ch = str[i];
        st.push(ch);
    }

    string ans = "";
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }

    cout << ans;

    return 0;
}