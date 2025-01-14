/*Given T Test cases and in eachtest case a number N. Print its factorial
for each test case % M.
Where M = 10^9+7.
Constraints:
1<=T<=10^5+7
1<=N<=10^5+7
*/
/*
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl
int main()
{
    // ll N = 1e5+10;
    ll t;
    cin >> t;
    while (t--)
    {
        ll N;
        cin >> N;
        ll i, fact = 1;
        for (i = 2; i <= N; i++)
        {
            fact = fact * i;
        }
        cout << fact << nl;
    }
    return 0;
}*/
// Time complexity:
/*
 O(T) * O(N) = O(N^2) = 10^10
 But online compiler run code in 1s only 10^7
 So optimize the code
*/

// Pre-computation Method
// Store factorial value previously

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

const int N = 1e5 + 10;
ll fact[N];

int main()
{
    fact[0] = fact[1] = 1;
    for (ll i = 2; i < N; i++)
    {
        fact[i] = fact[i - 1] * i;
    }

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << fact[n] << nl;
    }

    return 0;
}

// Time complexity:
/*
 O(N) = 10^5
 So online compiler accept the code
*/