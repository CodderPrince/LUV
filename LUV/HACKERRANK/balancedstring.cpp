/*#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

void isbalan()
{
    ll a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    // stack<string>;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        char ch;

        if (str[i] == '(')
        {
            a++;
        }
        else if (str[i] == '{')
        {
            b++;
        }
        else if (str[i] == '[')
        {
            c++;
        }
        else if (str[i] == ']')
        {
            d++;
        }
        else if (str[i] == '}')
        {
            e++;
        }
        else if (str[i] == ')')
        {
            f++;
        }
    }
    cout<<a<<nl<<b<<nl<<c<<nl<<d<<nl<<e<<nl<<f<<nl;
    if (a == f && b == e && c == d)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        isbalan();
    }

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
   stack<int> s;
   s.push(4);
   s.push(5);

   while(!s.empty())
   {
     cout<<s.top()<<nl;
     s.pop();
   }

return 0;
}

