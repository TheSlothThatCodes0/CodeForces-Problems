#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void TheSlothThatCodes()
{
    ll len; cin >> len;
    vector<ll> lst;
    for (ll i = 0; i < len; i++)
    {
        ll x; cin >> x;
        lst.push_back(x);
    }

    ll cur_year = 0;

    for (ll i = 0; i < len; i++)
    {
        cur_year += lst[i] - cur_year % lst[i];
    }

    cout << cur_year << endl;
    
    
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c; cin >> c;
    while (c--)
    {
        TheSlothThatCodes();
    }
    
    return 0;
}