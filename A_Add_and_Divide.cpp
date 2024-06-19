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

int log_a_b(int a, int b)
{
    return floor(log10(b) / log10(a)) + 1;
}

void solve()
{
    int a, b; cin >> a >> b;

    if (a == b)
    {
        cout << 2 << endl;
        return;
    }

    int ans = 0;
    if (b == 1)
    {
        b++;
        ans++;
    }

    int mini = INT_MAX;
    if (a < b)
    {
        cout << 1 + ans << endl;
        return;
    }
    
    for (int i = 0; i < 33; i++)
    {
        int tmep = log_a_b(b + i, a);
        // cout << tmep + i << " ";
        mini = min(mini, tmep + i);
    }
    // cout << endl;
    
    cout << mini + ans << endl;
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