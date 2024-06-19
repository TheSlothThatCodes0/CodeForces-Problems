#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve()
{
    ll len, x, y; cin >> len >> x >> y;
    vector<ll> v;

    for (ll i = 0; i < len; i++)
    {
        ll x; cin >> x;
        v.push_back(x);
    }
    
    ll count = 0;
    sort(v.begin(),v.end());

    for (ll i = 0; i < count; i++)
    {
        /* code */
    }
    
    
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c; cin >> c;
    while (c--)
    {
        solve();
    }
    
    return 0;
}