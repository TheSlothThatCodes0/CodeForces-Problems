#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve()
{
    ll a, b; cin >> a >> b;

    if (a%2 != 0 && b%2 != 0)
    {
        NO;
        return;
    }

    if (a%2 != 0 && b%2 == 0 )
    {
        if (b/2 == a)
        {
            NO;
            return;
        }
    }

    else if (b%2 != 0 && a%2 == 0)
    {
        if (a/2 == b)
        {
            NO;
            return;
        }
    }

    YES;

    
    
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