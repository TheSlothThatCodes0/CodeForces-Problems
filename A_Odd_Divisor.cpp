#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve()
{
    unsigned ll a; cin >> a;

    if (a % 2 != 0)
    {
        YES;
        return;
    }

    if ((a & (a-1)) == 0)
    {
        NO;
        return;
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