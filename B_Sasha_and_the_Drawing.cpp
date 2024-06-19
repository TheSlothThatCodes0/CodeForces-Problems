#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve()
{

    ll a, b; cin >> a >> b;

    if (b == 4*a - 2)
    {
        cout << 2*a << endl;
        return;
    }

    if (b != 0)
    {
        b++;
    }


    cout << b/2 << endl;
    
    
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