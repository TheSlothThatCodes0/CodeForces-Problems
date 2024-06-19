#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve()
{
    ll len, count = 0; cin >> len;
    string s; cin >> s;

    for (ll i = 0; i < len; i++)
    {
        if (s[i] == '@')
        {
            count++;
        }
        
        if (s[i] == '*' && s[i+1] == '*')
        {
            break;
        }
    }


    cout << count << endl;

    
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