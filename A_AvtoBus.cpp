#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long

void solve()
{
    ll n; cin >> n;
    
    if (n % 2 != 0 || n == 2)
    {
        cout << -1 << endl;
        return;
    }

    ll max = n/4;
    ll min;

    if ((n/2) % 3 == 0)
    {
        min = n/6;
    }

    else
    {
        min = n/6 + 1;
    }

    cout << min << " " << max << endl;

    
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