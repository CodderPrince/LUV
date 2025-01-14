#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    map<ll, multiset<string>> marks_map;
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll marks;
        string name;
        cin >> name >> marks;
        marks_map[marks].insert(name);
        // every marks er sathe tar name store korbe
    }
    auto cur_it = --marks_map.end();
    // reverse order lagbe
    while (1)
    {
        // create set of students
        auto &students = (*cur_it).second;
        ll marks = (*cur_it).first;
        for (auto s : students)
        {
            cout << s << " " << marks << nl;
        }
        if (cur_it == marks_map.begin())
        {
            break;
        }
        else
        {
            cur_it--;
        }
    }

    return 0;
}