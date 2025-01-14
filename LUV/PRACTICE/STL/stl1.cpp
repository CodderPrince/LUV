#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (auto &x : arr)
    {
        cin >> x;
    }
    ll minn = *min_element(arr.begin(), arr.end());
    ll maxx = *max_element(arr.begin(), arr.end());
    ll sum = accumulate(arr.begin(), arr.end(), 0);
    ll cnt = count(arr.begin(),arr.end(),3);
    ll element = *find(arr.begin(),arr.end(),8);
    reverse(arr.begin(),arr.end());
    for(auto &x: arr)
    {
        cout<<x<<" ";
    }
    cout<<nl;

    cout<<minn<<nl;
    cout<<maxx<<nl;
    cout<<sum<<nl;
    cout<<cnt<<nl;
    cout<<element<<nl;

    return 0;
}