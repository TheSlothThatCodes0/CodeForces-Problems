#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define vll vector<long long>
#define endl "\n"
#define int ll

void solve()
{
    string s; cin >> s;
    ll one = 0, zero = 0;
    for (char i : s)
    {
        if (i == '1')
        {
            one++;
        }
        
        else
        {
            zero++;
        }
        
    }

    if (min(one,zero) % 2 == 0)
    {
        cout << "NET"<< endl;
        return;
    }

    cout << "DA" << endl;
    
    


    
    
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