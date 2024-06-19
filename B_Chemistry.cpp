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
    int k; cin >> k;
    int s; cin >> s;
    string st; cin >> st;
    map<char, int> mp;

    for(int i = 0; i < k; i++)
    {
        mp[st[i]]++;
    }

    // cout << "______________________" << endl;

    // for(auto x: mp)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }

    // cout << "______________________" << endl;

    int count = 0;
    for(auto x: mp)
    {
        if (x.second % 2 != 0)
        {
            s--;
            if (s < -1)
            {
                // cout << s << " ";
                NO;
                return;
            }
            
        }
    }

    // cout << s << " ";

    // if (s % 2 != 0 && s != -1)
    // {
    //     NO;
    //     return;
    // }

    YES;

}

int32_t main()
{
    int c; cin >> c;
    while (c--)
    {
        solve();
    }
    
    return 0;
}