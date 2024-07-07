#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long

void TheSlothThatCodes()
{
    ll a, b, c; cin >> a >> b >> c;
    vector<int> l1, l2;
    for (ll i = 0; i < a; i++)
    {
        int x; cin >> x;
        l1.push_back(x);
    }

    for (ll i = 0; i < b; i++)
    {
        int x; cin >> x;
        l2.push_back(x);
    }

    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());

    unordered_set<ll> l1_s, l2_s, common;

    for (ll i = 0; i < a; i++)
    {
        if (l1[i] <= c)
        {
            l1_s.insert(l1[i]);
        }
        
    }

    for (ll i = 0; i < b; i++)
    {
        if (l2[i] <= c)
        {
            l2_s.insert(l2[i]);

        }
    }

    for (auto i : l1_s)
    {
        if (l2_s.find(i) != l2_s.end())
        {
            common.insert(i);
            l2_s.erase(i);
        }
    }

    for (auto j : common)
    {
        l1_s.erase(j);
    }

    ll z = l1_s.size() + l2_s.size() + common.size();

    if (z < c || l1_s.size() + common.size() < c/2 || l2_s.size() + common.size() < c/2 )
    {
        cout << "NO" <<endl;
        return;
    }

    cout << "YES" << endl;
    



}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c; cin >> c;
    while (c--)
    {
        TheSlothThatCodes();
    }
    
    return 0;
}