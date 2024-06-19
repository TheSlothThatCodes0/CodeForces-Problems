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
    int x, y; cin >> x >> y;
    int ans = 0;
    int max_x = 0;
    if (y % 2 == 0)
    {
        ans += y / 2;
        max_x = 7 * ans;
    }
    else
    {
        ans += (y/2) + 1;
        max_x = (7 * (ans-1)) + 11;
    }
    // cout << "ans: " << ans << endl;
    // cout << "max_x: " << max_x << endl;
    if (x <= max_x)
    {
        cout << ans << endl;
        return;
    }
    else
    {
        x -= max_x;
        if (x % 15 == 0)
        {
            ans += x / 15;
        }
        else
        {
            ans += (x / 15) + 1;
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