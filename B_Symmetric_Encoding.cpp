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


void TheSlothThatCodes()
{
    int n; cin >> n;
    string s; cin >> s;
    set<char> v;
    for (int i = 0; i < n; i++)
    {
        v.insert(s[i]);
    }

    vector<char> a(v.begin(), v.end());
    map<char, char> cor;

    int p1 = 0, p2 = v.size()-1;

    while(p1 <= p2)
    {
        cor[a[p1]] = a[p2];
        cor[a[p2]] = a[p1];
        p1++;
        p2--;
    }

    // for(auto i : cor)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    // cout << "-------------------\n";

    string ans = "";

    for (int i = 0; i < n; i++)
    {
        ans += cor[s[i]];
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
        TheSlothThatCodes();
    }
    
    return 0;
}