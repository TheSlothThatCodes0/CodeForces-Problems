#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vll vector<long long>
#define endl "\n"
#define int ll
#define pb push_back


void solve()
{
    int n, q; cin >> n >> q;
    vll a(n);
    vll sum(n, 0);
    ll temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        temp += a[i];
        sum[i] = temp;
    }

    for (int i = 0; i < q; i++)
    {
        int l, r,k; cin >> l >> r >> k;
        int replace = sum[r-1]-(l > 1 ? sum[l-2] : 0);
        int x = (l-r+1) * k;
        int total = sum[n-1] - replace + x;

        if (total % 2 != 0)
        {
            YES;
        }
        else
        {
            NO;
        }
        
        
    }
    
}

int32_t main()
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