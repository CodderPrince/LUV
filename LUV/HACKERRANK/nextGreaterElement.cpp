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
    for (int i = 0; i < n; i++)
    {
        // ll cnt = 0;
        bool f = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                cout << arr[i] << " " << arr[j] << nl;
                // cnt=1;
                f = true;
                break;
            }
        }
        if (!f)
        {
            cout << arr[i] << " -1\n";
        }
    }

    return 0;
}