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
    int a, b ,n; cin >> a >> b >> n;
    int count = b;
    for(int i = 0; i < n; i++)
    {
        int x; 
        cin >> x;

        count += min(a-1, x);

    }

    cout << count << endl;
    
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