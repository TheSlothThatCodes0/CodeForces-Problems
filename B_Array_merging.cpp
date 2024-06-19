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

void solve3()
{
    int n; cin >> n;

    vll a, b;

    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        a.pb(x);
    }

    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        b.pb(x);
    }

    set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
        s.insert(b[i]);
    }

    int target = a[0];
    int temp = 0;
    map<int, int> a_map, b_map;

    for (int i = 0; i < n; i++)
    {
        if(a[i] == target)
        {
            temp++;
        }
        else
        {
            a_map[target] = max(temp, a_map[target]);
            target = a[i];
            temp = 1;
        }
    }

    a_map[target] = max(temp, a_map[target]);
    target = b[0];
    temp = 0;

    for (int i = 0; i < n; i++)
    {
        if(b[i] == target)
        {
            temp++;
        }
        else
        {
            b_map[target] = max(temp, b_map[target]);
            target = b[i];
            temp = 1;
        }
    }
    
    b_map[target] = max(temp, b_map[target]);

    int ans = 1;

    for(auto i: s)
    {
        ans = max(ans, a_map[i]+b_map[i]);
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
        solve3();
    }
    
    return 0;
}