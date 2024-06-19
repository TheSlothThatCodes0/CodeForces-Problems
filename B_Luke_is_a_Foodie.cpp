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
    int n, x; cin >> n >> x;
    vll a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mini = a[0] - x, maxi = a[0] + x;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        int minc = a[i] - x, maxc = a[i] + x;

        if (max(mini, minc) > min(maxi, maxc))
        {
            ans++;
            mini = minc;
            maxi = maxc;
        }
        else
        {
            mini = max(mini, minc);
            maxi = min(maxi, maxc);
        }
    }
    
    cout << ans << endl;

    
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