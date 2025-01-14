/*Given array a of N integers.
and in each query given a number X, print
count of that number in array.
Constraints:
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5
*/
/*
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        ll cnt = 0;
        for (i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                cnt++;
            }
        }
        cout << cnt << nl;
    }

    return 0;
}
*/

/*
TIME COMPLEXITY: O(N) + O(Q * N) = O(O * O)
= 10^5 * 10^5 = 10^10
BUT LIMIT IN 1S ONLY 10^7
APPLY HASHING TECHNIQUES
HASING ARRAY IS A ARRAY WHICH STORE ELEMENT
IN EVERY INDEX
SUPPOSE GIVEN 2 THEN HASHING STORE AT 2 INDEX
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

const ll N = 10e7 + 10;
ll hashing[N];

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        hashing[arr[i]]++;
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        cout << hashing[x] << nl;
    }

    return 0;
}

/*TIME COMPLEXITY: O(N) = 10^5*/