#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

void solve()
{
    long long a, b,r; cin >> a >> b >> r;

    long long x = (a  b) ;

    while (x > r)
    {
        x = x << 1;
    }
    

    cout << abs(a ^(x) - b ^ (x)) << endl;;


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