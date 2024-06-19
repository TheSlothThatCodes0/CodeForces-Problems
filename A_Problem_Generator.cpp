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
    int n, m; cin >> n >> m;
    string s; cin >> s;

    map<char, int> mp;
    mp['A'] = 0;
    mp['B'] = 0;
    mp['C'] = 0;
    mp['D'] = 0;
    mp['E'] = 0;
    mp['F'] = 0;
    mp['G'] = 0;    
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }

    int count = 0;

    for(auto i : mp)
    {
        if (i.second < m)
        {
            count += - i.second + m;
        }
        
        
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