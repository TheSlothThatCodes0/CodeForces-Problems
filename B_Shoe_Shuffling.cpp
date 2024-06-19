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
    int n; cin >> n;
    vll a(n);
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }

    for (auto i: m)
    {
        if (i.second == 1)
        {
            cout << -1 << endl;
            return;
        }
    }

    vll ans(n);
    for (int i = 1; i <= n; i++)
    {
        ans[i-1] = i;
    }

    for (int i = 0; i < n-1; i++)
    {
        if (a[i] == a[i+1])
        {
            swap(ans[i], ans[i+1]);
        }
    }
    
    for (auto i: ans)
    {
        cout << i << " ";
    }
    cout << endl;
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