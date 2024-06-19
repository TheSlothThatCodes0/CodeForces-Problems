#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vll vector<long long>
#define endl "\n"
#define int ll

void solve()
{
    ll n, k; cin >> n >> k;
    vll lst;

    for (ll i = 0; i < n*k; i++)
    {
        ll x; cin >> x;
        lst.push_back(x);
    }
    ll s = 0;
    for (ll i = (n-1)/2*k; i < n*k; i += n/2+1)
    {
        s += lst[i];
    }
    

    cout << s << endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin >> c;
    while (c--)
    {
        solve();
    }

    return 0;
}