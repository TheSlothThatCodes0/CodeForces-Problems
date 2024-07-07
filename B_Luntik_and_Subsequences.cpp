#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void TheSlothThatCodes()
{
    ll len; cin >> len;

    ll one = 0, zero = 0;

    for (ll i = 0; i < len; i++)
    {
        int x; cin >> x;

        if (x == 1)
        {
            one++;
        }

        if (x == 0)
        {
            zero++;
        }
    }
    ll a = 1;
    cout << (a<<zero) * (one) << endl;
    
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