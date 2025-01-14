/*
Luffy with his crew is on the way to Dressrosa,
where he will be fighting
one of the warlords of the sea Doflamingo. But now
he is getting bored and wants do a fun activity.
He is very much obsessed with palindromes.
Given a string S of lower case
English alphabet of length N and two Integers L and R he
wants to know whether all the letters of the substring
from index L
to R (L and R included) can be rearranged to form a palindrome or not.
He wants to know this for Q valuers of L and R and
needs your help in finding the answer.
Palindrome is a string of characters which when reversed
reads same as the original String.
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

const ll N = 1e5 + 10;
ll hsh[N][26];

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        for (ll i = 0; i < N; i++)
        {
            for (ll j = 0; j < 26; j++)
            {
                hsh[j][i] = 0;
            }
        }
        ll n, q;
        cin >> n >> q;
        string str;
        cin >> str;
        for (ll i = 0; i < n; i++)
        {
            hsh[i + 1][str[i] - 'a']++;
            // i+1 means one based array
        }

        // prefix sum of array
        for (ll i = 0; i < 26; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                hsh[j][i] += hsh[j - 1][i];
            }
        }

        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            ll oddcnt = 0;
            for (ll i = 0; i < 26; i++)
            {
                ll charCnt = hsh[r][i] - hsh[l - 1][i];
                // count every character from prefix sum array
                if (charCnt % 2 != 0)
                {
                    oddcnt++;
                }
            }
            if (oddcnt > 1)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }

    return 0;
}