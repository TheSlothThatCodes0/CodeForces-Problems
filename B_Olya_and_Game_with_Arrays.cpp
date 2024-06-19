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
    ll no_list; cin >> no_list;
    vector<int> min_list;
    vector<int> second_min_list;

    for (ll i = 0; i < no_list; i++)
    {
        vll temp;
        ll len; cin >> len;

        for (ll i = 0; i < len; i++)
        {
            ll x; cin >> x;
            temp.pb(x);
        }

        sort(temp.begin(),temp.end());
        min_list.pb(temp[0]);
        second_min_list.pb(temp[1]);
    }

    sort(min_list.begin(),min_list.end());
    sort(second_min_list.begin(),second_min_list.end());

    int ans = 0;

    ans += min_list[0];

    for (int i = 1; i < no_list; i++)
    {
        ans+= second_min_list[i];
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