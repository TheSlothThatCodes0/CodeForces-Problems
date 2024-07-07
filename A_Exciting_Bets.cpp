#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void TheSlothThatCodes()
{
    ll a, b; cin >> a >> b;

    if (a == b)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }

    ll x = abs(a-b);

    ll y = min(a%x , x - a%x);
    
    cout << x << " " << y << endl;

    
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c; cin >> c;
    while (c--)
    {
        TheSlothThatCodes();
    }
    
    return 0;
}