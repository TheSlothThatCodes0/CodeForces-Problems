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
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
    }
    
    if (n % 2 == 0)
    {
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " <<  n << endl;
    }

    else
    {
        cout << 4 << endl;
        cout << 1 << " " << n-1 << endl;
        cout << 1 << " " <<  n-1 << endl;
        cout << n-1 << " " << n << endl;
        cout << n-1 << " " << n << endl;
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