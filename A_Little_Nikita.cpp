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
    int n, m; cin >> n >> m;

    if (n < m)
    {
        NO;
        return;
    }

    if (n == m)
    {
        YES;
        return;
    }
    

    while (n >= m)
    {
        if (n == m)
        {
            YES;
            return;
        }
        
        m += 2;
    }

    NO;
    
    
}

int32_t main()
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