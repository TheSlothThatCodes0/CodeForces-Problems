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
    string s; cin >> s;
    int n = s.size();
    int ones = 0;
    int zeros = 0;
    string x = "";
    for(auto i: s)
    {
        if (i == '1')
        {
            ones++;
            x+= "0";
        }
        else
        {
            zeros++;
            x+= "1";
        }
    }

    if (zeros == ones)
    {
        cout << 0 << endl;
        return;
    }
    

    for (int  i = 0; i < n; i++)
    {
        if (x[i] == '0')
        {
            zeros--;
        }
        else
        {
            ones--;
        }

        if (zeros == -1 || ones == -1)
        {
            cout << n - i << endl;
            return;
        }
    }
    
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