/*
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl
const ll N = 1e7 + 10;
ll arr[N];
int main()
{
    ll n, m;
    cin >> n >> m;
    while (m--)
    {
        ll a, b, k;
        cin >> a >> b >> k;
        for (ll i = a; i <= b; i++)
        {
            arr[i] += k;
        }
    }
    ll max = -1;
    for (ll i = 1; i <= n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << nl;

    return 0;
}*/
/*TIME COMPLEXITY IS HIGH*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl
const ll N = 1e7 + 10;
ll arr[N];
int main()
{
    ll n, m;
    cin >> n >> m;
    while (m--)
    {
        ll a, b, k;
        cin >> a >> b >> k;
        arr[a] += k;
        arr[b + 1] -= k;
    }

    // prefix sum
    for (ll i = 1; i <= n; i++)
    {
        arr[i] += arr[i - 1];
    }

    // maximum sum
    ll max = -1;
    for (ll i = 1; i <= n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << nl;

    return 0;
}