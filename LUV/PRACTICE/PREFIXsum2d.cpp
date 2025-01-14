// HASHING AND PREFIX SUM

/*Given 2d array a of N*N integers. Given Q
queries and in each query given a, b, c and d
print sum of square represented by (a, b) as
top left point and (c,d) as top bottom right
point
Constraints:
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a,b,c,d <= N
*/
/*
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl
const ll N = 1e3 + 10;
ll arr[N][N];
int main()
{
    ll n;
    cin >> n;
    ll i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll sum = 0;
        for (i = a; i <= c; i++)
        {
            for (j = b; j <= d; j++)
            {
                sum += arr[i][j];
            }
        }
        cout << sum << nl;
    }

    return 0;
}*/
/*T.C = O(N^2) + O(Q * N^2) = 10^6 + 10^5 = 10 ^ 11*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

const ll N = 1e3 + 10;
ll arr[N][N];
ll pf[N][N];

int main()
{
    ll n;
    cin >> n;
    ll i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
            pf[i][j] = arr[i][j] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
        }
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << pf[c][d] - pf[a - 1][d] - pf[c][b - 1] + pf[a - 1][b - 1] << nl;
    }

    return 0;
}
/*
    1,1     1,2     1,3     1,4     1,5

    2,1     2,2     2,3     2,4     2,5

    3,1     3,2     3,3     3,4     3,5

    4,1     4,2     4,3     4,4     4,5

    5,1     5,2     5,3     5,4     5,5

    when store sum in array
    pf[3[3] = a[3][3] + pf[2][3] + pf[3][2] - pf[2][2]

    when output a=3, b=3, c=5,.d=5
    pf[5][5] - pf[2][5] - pf[5][2] + pf[2][2]
    pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1]
*/