#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll j = 0, temp[5];
    for (int i = n - 1; i >= 0; i--)
    {

        temp[j] = arr[i];
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    cout<<nl;


    ll *x = lower_bound(arr, arr + n, 7);
    cout << *x << nl;

    ll *y = upper_bound(arr,arr+n,6);
    cout<<*y<<nl;
    return 0;
}