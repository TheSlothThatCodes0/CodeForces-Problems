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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vll b(n+1);
    for(int i = 0; i < n+1; i++)
    {
        cin >> b[i];
    }

    int ans = 0;
    int target = b[n];
    int temp = INT_MAX;
    int mini = a[0], maxi = a[0];
    bool trigger = false;
    for (int i = 0; i < n; i++)
    {
        ans += abs(a[i] - b[i]);
        temp = min(temp, min(abs(a[i] - target), abs(b[i] - target)));
        if ((a[i] > b[i] && target > b[i] && target < a[i]) || (a[i] < b[i] && target < b[i] && target > a[i]))
        {
            trigger = true;
        }
    }
    
    if(trigger)
    {
        ans++;
    }
    else
    {
        ans += temp;
        ans++;
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