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
    int n; cin >> n;
    string s; cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (isalpha(s[i]) && isdigit(s[i+1]))
        {
            NO;
            return;
        }
        
        if (isdigit(s[i]) && isdigit(s[i+1]))
        {
            if (s[i] > s[i+1])
            {
                NO;
                return;
            }
        }

        if (isalpha(s[i]) && isalpha(s[i+1]))
        {
            if (s[i] > s[i+1])
            {
                NO;
                return;
            }
            
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