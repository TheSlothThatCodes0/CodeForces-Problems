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
    int n, f,k; cin >> n >> f >> k;

    vll a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int target = a[f-1];

    sort(a.begin(), a.end(), greater<int>());

    if (a[k-1] > target)
    {
        NO;
        return;
    }

    if (a[k] == target)
    {
        if ((k != n) && a[k] == target )
        {
            cout << "MAYBE" << endl;
            return;
        }
        
        else
        {
            YES;
            return;
        }
        
    }

    YES;
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