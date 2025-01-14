// HASHING AND PREFIX SUM

/*
Given integers. Given Q queriesand in each query given L and R print sum of
array elemnts from index L to R(L, R included)
Constraints:
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N
*/
/*
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl
const ll N = 1e5 + 10;
ll arr[N];

int main()
{
    ll n;
    cin >> n;

    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        ll sum = 0;
        for (ll i = l; i <= r; i++)
        {
            sum += arr[i];
        }
        cout << sum << nl;
    }

    return 0;
}*/

/*TIME COMPLEXITY: O(N) + O(Q * N) = 10 ^ 10
CREATE HASH ARRAY AND PREFIX SUM*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

const ll N = 1e5 + 10;
ll arr[N];
ll prefix_sum[N];

int main()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << prefix_sum[r] - prefix_sum[l - 1] << nl;
    }

    return 0;
}

/*TIME COMPLEXITY: O(N) + O(Q) = 10 ^ 5
CREATE HASH ARRAY AND PREFIX SUM
value   3   6   2   8   9   2
index   1   2   3   4   5   6

hash array
value   3   6   2   8   9   2
sum     3   9   11  19  28  30
index   1   2   3   4   5   6

note: when we globally declare an array by default arr[0] = 0
*/