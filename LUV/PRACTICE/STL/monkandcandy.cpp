#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        multiset<ll> bags;
        for (int i = 0; i < n; i++)
        {
            ll candy_cnt;
            cin >> candy_cnt;
            bags.insert(candy_cnt); // 1 2 2 4 7
        }
        ll total_cnt = 0;
        for (int i = 0; i < k; i++)
        {
            // auto last_it = bags.end();
            /*multiset sort kore rakhe tai last element khaite hobe
            bags.end() means before last element*/
            auto last_it = (--bags.end()); // 7
            ll candy_cnt = *last_it;
            total_cnt = total_cnt + candy_cnt; // 0+7
            bags.erase(last_it);               // 1 2 2 4
            bags.insert(candy_cnt / 2);        // 1 2 2 3 4
        }
        cout << total_cnt << nl;
    }

    return 0;
}