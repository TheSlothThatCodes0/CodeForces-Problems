#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve()
{
    ll len, max_ = INT_MIN, min_ = INT_MAX; cin >> len;

    for (ll i = 0; i < len; i++)
    {
        ll x; cin >> x;
        max_ = max(max_, x);
        min_ = min(min_, x);
        
    }

    cout << max_ - min_ << endl;
    
    
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