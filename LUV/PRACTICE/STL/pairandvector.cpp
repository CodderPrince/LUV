/*#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    pair<ll, ll> p_arr[3];
    p_arr[0] = {1, 2};
    p_arr[1] = {5, 4};
    p_arr[2] = {12, 28};
    swap(p_arr[0], p_arr[2]);
    for (ll i = 0; i < 3; i++)
    {
        cout << p_arr[i].first << " " << p_arr[i].second << " " << nl;
    }

    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

void printVec(vector<ll> v)
{
    for (ll i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << nl;
}

int main()
{
    vector<ll> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(2);
    v.pop_back();
    for(auto &x : v)
    {
        cout<<x<<nl;
    }
}
    /*ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    printVec(v);

    return 0;
}*/