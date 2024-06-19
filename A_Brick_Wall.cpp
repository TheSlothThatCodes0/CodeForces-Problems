#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void solve()
{
    int n, m; cin >> n >> m;

    if (m % 2 == 0)
    {
        cout << n * (m/2) << endl;
        return;
    }

    else
    {
        cout << n * (((m-3)/2)+1) << endl;
        return;
    }

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