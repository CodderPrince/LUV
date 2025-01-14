#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    string str;
    getline(cin, str);
    for (ll i = 0; i < str.size(); i++)
    {
        str[i] = toupper(str[i]);
    }
    for (ll i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ')
        {
            cout << str[i];
        }
        else if (str[i] == ' ' && str[i + 1] != ' ')
        {
            cout << nl;
        }
    }
    cout << nl;

    return 0;
}