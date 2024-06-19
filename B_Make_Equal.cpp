#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve()
{
    ll len, sum = 0; cin >> len;
    vector<ll> lst;

    for (ll i = 0; i < len; i++)
    {
        ll x; cin >> x;
        lst.push_back(x);
        sum += x;
    }

    ll target = sum / len, sum_ = 0;
    
    for (int i = 1; i <= len; i++)
    {
        sum_ += lst[i-1];

        if (sum_ < target * i )
        {
            NO;
            return;
        }

        
    }

    YES;
    
    
    
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