#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void TheSlothThatCodes()
{

    ll a, b; cin >> a >> b;

    ll x = b % 4;

    // cout << x << endl;

    for (ll i = 1; i <= x; i++)
    {
        if (a % 2 == 0)
        {
            a -= b-x + i;
        }

        else
        {
            a += b-x + i;
        }
        
    }

    cout << a << endl;
    

    
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