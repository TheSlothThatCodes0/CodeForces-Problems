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

    int max = log2(n-1);
    max = pow(2, max);

    for (int i = max-1; i >= 0; i--)
    {
        cout << i << " ";
    }
    
    for (int i = max; i < n; i++)
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