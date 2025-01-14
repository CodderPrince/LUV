/*Given N strings, print unique strings
in lexiographical•order with their
frequency:
N<=10^5

*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
   map<string,int> m;
   ll n;
   cin>>n;
   for(ll i=0; i<n; i++)

   {
    string s;
    cin>>s;
    m[s]++;
   }
   for(auto x: m)
   {
    cout<<x.first<<" "<<x.second<<nl;
   }

return 0;
}