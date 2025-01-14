#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    multiset<string> s;
    s.insert("abc");
    s.insert("abcd");
    s.insert("abcdae");
    s.insert("abcd");
    // s.erase("abcd");
    /*when we passed value then it's delete all value
    in our database. Here abcd is twin then deleted all*/
    // but if we want to delete only one value then use iterators function
    auto it = s.find("abcd");
    s.erase("it");
    if (it != s.end())
    {
        s.erase(it);
    }
    // this is the method to delete only one value from database
    // but other duplicate value is still there
    for (auto x : s)
    {
        cout << x << nl;
    }

    return 0;
}