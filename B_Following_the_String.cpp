#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long

void solve()
{
    ll len; cin >> len;
    vector<int> lst;

    for (ll i = 0; i < len; i++)
    {
        int x; cin >> x;
        lst.push_back(x);
    }

    unordered_map<char, int> mp;
    for (char i = 'a'; i <= 'z'; i++)
    {
        mp.insert({i,0});
    }

    string s = "";

    for (int i = 0; i < len; i++)
    {
        for (auto x : mp)
        {
            if (x.second == lst[i])
            {
                s += x.first;
                mp[x.first]++;
                break;
            }
            
        }
        
    }
    
    
    
    cout << s << endl;


}

int main()
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