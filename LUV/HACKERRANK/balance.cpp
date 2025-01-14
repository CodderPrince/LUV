#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

unordered_map<char, int> symbols = {
    {'[', -1},
    {'{', -2},
    {'(', -3},
    {']', 1},
    {'}', 2},
    {')', 3},
};

string isBalan(string s)
{
    stack<char> st;
    for (char bracket : s)
    {
        if (symbols[bracket] < 0)
        {
            st.push(bracket);
        }
        else
        {
            if (st.empty()) //    test: ])}
            {
                return "NO";
            }
            char top = st.top();
            st.pop();
            if (symbols[top] + symbols[bracket] != 0)
            {
                return "NO";
            }
        }
    }
    if (st.empty())
    {
        return "YES";
    }
    return "NO";
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << isBalan(s) << nl;
    }

    return 0;
}