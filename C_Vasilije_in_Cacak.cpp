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

void TheSlothThatCodes()
{
    
    ll n, k ,x; cin >> n >> k >> x;

    int max = ((n)*(n+1)/2)-((n-k)*(n-k+1)/2);
    int min = k * (k+1)/2;

    // cout << max << " " << min << endl;

    if (x <= max && x >= min)
    {
        YES;
        return;
    }
    
    NO;
    
}

int32_t main()
{
    int c; cin >> c;
    while (c--)
    {
        TheSlothThatCodes();
    }
    
    return 0;
}