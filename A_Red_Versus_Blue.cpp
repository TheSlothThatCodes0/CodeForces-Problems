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
    int n, r, b; cin >> n >> r >> b;

    int cons = (r)/(b+1);
    int extra  = r%(b+1);

    for (int i = 0; i < extra; i++)
    {
        for (int i = 0; i < cons+1; i++)
        {
            cout << "R";
        }

        cout << "B"; 
    }

    int left = b+1 - extra;

    for (int i = 0; i < left; i++)
    {
        for (int i = 0; i < cons; i++)
        {
            cout << "R";
        }

        if (i < left-1)
        {
            cout << "B";
        }
    }
    

    cout << endl;
    
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